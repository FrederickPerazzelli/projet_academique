#include "gameState.h"
//le constructeur utilise les : pour initialiser _data avant même l'execution du contenu{}
gameState::gameState(gameDataRef data, string character) : _data(data) {
	_gameState = gameStates::ready;
	_player = nullptr;
	_camera = nullptr;
	_scoringItem = nullptr;
	_bat = nullptr;
	_spider = nullptr;
	_room = nullptr;
	_spawner = nullptr;
	_hud = nullptr;
	_score = 0;
	_selectedCharacter = character;
	_doorOpen = false;
}

gameState::~gameState() {
	delete _player;
	delete _camera;
	delete _bat;
	delete _spider;
	delete _scoringItem;
	delete _room;
	delete _spawner;
	delete _hud;
}

//load l’image du background à l’aide du assetManager ds _data et la set au Sprite
void gameState::init() {

	//initialisation du joueur
	_player = new player(_data, _selectedCharacter);

	//initialisation de la camera
	_camera = new camera(_data);

	//initialisation du hud
	_hud = new hud(_data);

	//initialisation de la musique
	if (!_indianaMusic.openFromFile(MUSIC_FILEPATH))
		cout << "musique introuvable" << endl;
	_indianaMusic.play();
	_indianaMusic.setVolume(MUSIC_VOLUME);

	//initialisation de la room
	//vecteur pour faire des niveaux de styles aleatoire
	vector<String> blockTile{ TILE_BABYLON, TILE_DUAT, TILE_PAGODA, TILE_BEEHIVE, TILE_GOLD, TILE_MOTHERSHIP,TILE_PALACE,TILE_STONE,TILE_SUNKEN,TILE_TEMPLE,TILE_VLAD,TILE_WOOD };
	vector<String> background{ BACKGROUND_BABYLON_TEXTURE, BACKGROUND_EGGPLANT_TEXTURE, BACKGROUND_CAVE_TEXTURE,BACKGROUND_BEEHIVE_TEXTURE , BACKGROUND_GOLD_TEXTURE,BACKGROUND_MOTHERSHIP_TEXTURE ,BACKGROUND_GOLD_TEXTURE, BACKGROUND_STONE_TEXTURE ,BACKGROUND_SUNKEN_TEXTURE,BACKGROUND_TEMPLE_TEXTURE,BACKGROUND_VLAD_TEXTURE, BACKGROUND_VOLCANO_TEXTURE };
	int random;
	random = rand() % 12;

	_data->assets.loadTexture("floor tile", TILE_FLOOR_BABYLON);
	_data->assets.loadTexture("block tile", blockTile[random]);
	_data->assets.loadTexture("background", background[random]);
	_room = new room(_data);

	//initialisation de tous les entities
	_spawner = new entitySpawner(_data, _room);
	
	
	//initialisation de la musique
	_listItems = _spawner->generateItems("key item");
	_listScoringItems = _spawner->generateScoringItems("scoring item");
	_listSpiders = _spawner->generateSpiders("spider sprite");
	_listBats = _spawner->generateBats("bat sprite");

	if (!_gameMusic.openFromFile(MUSIC_FILEPATH))
		cout << "musique introuvable" << endl;
	_gameMusic.play();
	_gameMusic.setVolume(MUSIC_VOLUME);
	_gameMusic.setLoop(true);
}

//Alexandre
void gameState::handleInput() {
	Event event;
	//fênetre qui reste ouverte tant qu'elle n'est pas fermée
	while (_data->window.pollEvent(event)) {
		if (event.type == Event::Closed) {
			_data->window.close();
		}
	}
	//si une touche de clavier pertinente est activée
	if (_data->input.isMovementKeyPressed()) {
		_time = _clock.getElapsedTime();
		if (_time.asMilliseconds() >= 1.f) {
			//la velocity du joueur est affectée selon la direction retournée
			_player->move(_data->input.direction(_player->isOnGround()));
		}
		_clock.restart();
	}
	else {
		//si aucune touche n'est enregistrée, une valeure de 0,0 est additionnée à la velocity
		_player->move(Vector2f (0.f, 0.f));
	}
	
	//item pickup/drop
	if (_data->input.isInteractKeyPressed()) {
		_time = _interactClock.getElapsedTime();
		if (_time.asMilliseconds() >= _player->getInteractCooldown()) {
			if (_player->isHoldingItem() == false)			//si le joueur ne tient pas déja un item, il peut pickup un item
				_player->pickupItem(findClosestItem());
			else {											//sinon, il le lache
				_player->dropItem();
			}
		}
		_interactClock.restart();
	}
	//item throw
	if (_player->isHoldingItem() == true && _data->input.isThrowKeyPressed()) {	//si le joueur tient un item, il peut le lancer
		_time = _interactClock.getElapsedTime();
		if (_time.asMilliseconds() >= _player->getInteractCooldown()) {
			_player->throwItem();
		}
		_interactClock.restart();
	}
	//whip																		//si le joueur ne tient pas d'item, il whip
	if (_player->isHoldingItem() == false && _data->input.isThrowKeyPressed()) {
		_time = _interactClock.getElapsedTime();
		if (_time.asMilliseconds() >= _player->getInteractCooldown()) {
			_player->whip();
		}
		_interactClock.restart();
	}
}

//Alexandre
void gameState::handleEntities(float dt){

	//gestion des items
	for (_itItems = _listItems.begin(); _itItems != _listItems.end(); _itItems++) {
		if ((*_itItems) != nullptr) {
			(*_itItems)->move(Vector2f(0.f, 0.f));
			(*_itItems)->update(dt);
			checkCollision(*_itItems);
		}
	}

	//gestion des scoringItems
	for (_itScoringItems = _listScoringItems.begin(); _itScoringItems != _listScoringItems.end(); _itScoringItems++) {
		if ((*_itScoringItems) != nullptr) {
			(*_itScoringItems)->move(Vector2f(0.f, 0.f));
			(*_itScoringItems)->update(dt);
			checkCollision(*_itScoringItems);
		}
	}

	//Idéallement, spider et bat aurait fait parti de l'objet enemy qui aurait été enfant de entity. On aurait donc pu
	//les regroupé dans un seul conteneur
	//gestion des chauves-souris
	for (_itBats = _listBats.begin(); _itBats != _listBats.end(); _itBats++) {
		if ((*_itBats) != nullptr) {
			if ((* _itBats)->getIsAngry() == false)
			{
				(*_itBats)->detection(_player->getPosition());
			}
			else {
				(*_itBats)->move((*_itBats)->pathfindStraightLine(_player->getPosition()));
			}

			(*_itBats)->update(dt);
			checkCollision(*_itBats);
		}
	}

	//gestion des spiders
	for (_itSpiders = _listSpiders.begin(); _itSpiders != _listSpiders.end(); _itSpiders++) {
		if ((*_itSpiders) != nullptr) {
			if ((*_itSpiders)->getIsAngry() == false) {
				(*_itSpiders)->detection(_player->getPosition());
			}
			else {
				(*_itSpiders)->attacking(_player->getPosition(), _spiderMovement);
			}
			(*_itSpiders)->update(dt);
			checkCollision(*_itSpiders);
		}
	}

	//enfin, le joueur est gêrer
	_player->update(dt);
	checkCollision(_player);
}

//Alexandre
//gere le delai, apres 3 secondes, on veut afficher la prochaine fenetre
void gameState::update(float dt) {
	if (_doorOpen == true) {
		cout << "win";
		_gameState = gameOver;
	}
	if(_gameState != gameStates::gameOver){

		handleEntities(dt);
		_hud->updateHud(_player->getPosition());

		//Cette methode fonctionnait lorsque j'utilisait un vecteur,
		//mais depuis que j'utilise une liste, elle donne directement au joueur le scoringItem
		//le plus proche, meme s'ils n'interesecte pas.
		
		//pickupScoringItem(findClosestScoringItem());	//dans pickupScoringItem ou juste après, il faut delete l'item et
														//le retirer du vecteur. Pas le temps.
														
		checkWhipCollision();
		checkKeyDoorCollision();
		
			

		outOfBounds();
		_camera->updateCamera(_player->getPosition());
	}

	if (_gameState == gameStates::playing) {
		
	
		
		
	}

	if (_gameState == gameStates::gameOver) {
			_data->machine.addState(stateRef(new gameOverState(_data, _selectedCharacter, _doorOpen, _score)), true);
	}
 }

//Alexandre
//rendering des entities et de la map
void gameState::draw(float dt)const {
	_data->window.clear();

	_room->draw();
	_player->draw();

	for (item* _itemIt : _listItems) {
		if (_itemIt != nullptr) {
			_itemIt->draw();
		}
	}
	for (scoringItem* _scoringItemIt : _listScoringItems) {
		if (_scoringItemIt != nullptr) {
			_scoringItemIt->draw();
		}
	}
	for (bat* _batIt : _listBats) {
		if (_batIt != nullptr) {
			_batIt->draw();
		}
	}
	for (spider* _spiderIt : _listSpiders) {
		if (_spiderIt != nullptr) {
			_spiderIt->draw();
		}
	}

	_hud->draw();

	_data->window.display();
}

//Alexandre
void gameState::checkCollision(entity* entity){
	_collision.checkCollision(entity, _room);
}

//Alexandre
void gameState::checkWhipCollision() {
	if (_player->isWhipping()) {
		for (_itBats = _listBats.begin(); _itBats != _listBats.end(); _itBats++) {
			if ((*_itBats) != nullptr) {
				if (_collision.checkWhipCollision(_player->getWhipSprite(), (*_itBats)->getSprite())) {
					(*_itBats)->checkDamageCooldown(_time);
					if ((*_itBats)->getHealth() <= 0) {
						clearEntity((*_itBats));
					}
				}
			}
		}
		for (_itSpiders = _listSpiders.begin(); _itSpiders != _listSpiders.end(); _itSpiders++) {
			if ((*_itSpiders) != nullptr) {
				if (_collision.checkWhipCollision(_player->getWhipSprite(), (*_itSpiders)->getSprite())) {
					(*_itSpiders)->checkDamageCooldown(_time);
					if ((*_itSpiders)->getHealth() <= 0) {
						clearEntity((*_itSpiders));
					}
				}
			}
		}
	}
}

//Olivier
void gameState::checkKeyDoorCollision()
{
	_itItems = _listItems.begin();
	Rect<float> keyRect = (*_itItems)->getSprite().getGlobalBounds();
	Rect<float> doorRect = _room->getTile(57,56)->getSpriteTiles().getGlobalBounds();

	if (keyRect.intersects(doorRect)) {
		_doorOpen = true;
	}
}

//Alexandre
void gameState::clearEntity(entity* entity){
	//aurait gêrer ce qui se produit lorsqu'un entity meurt ou disparait. On l'aurait retirer de sa liste respective.
	//pas eu le temps.
}

//Alexandre
item* gameState::findClosestItem(){

	if (_listItems.size() == 0) {
		return nullptr;
	}

	float initialPosition = _player->getPosition().x;
	float distance = abs(initialPosition - (*_listItems.begin())->getPosition().x);
	list<item*>::iterator position = _listItems.begin();
	
	for (_itItems = _listItems.begin(); _itItems != _listItems.end(); _itItems++) {
		float newDistance = abs(initialPosition - (*_itItems)->getPosition().x);
		if (newDistance <= distance && _itItems != _listItems.begin()) {
			position++;
			distance = newDistance;
		}
	}
	return (*position);
}

//Alexandre
scoringItem* gameState::findClosestScoringItem()
{
	if (_listScoringItems.size() ==  0) {
		return nullptr;
	}

	float initialPosition = _player->getPosition().x;
	float distance = abs(initialPosition - (*_itScoringItems)->getPosition().x);
	list<scoringItem*>::iterator position = _listScoringItems.begin();

	for (_itScoringItems = _listScoringItems.begin(); _itScoringItems != _listScoringItems.end(); _itScoringItems++) {
		float newDistance = abs(initialPosition - (*_itScoringItems)->getPosition().x);
		if (newDistance <= distance && _itItems != _listItems.begin()) {
			position++;
			distance = newDistance;
		}
	}
	return (*position);
}

//Alexandre
void gameState::pickupScoringItem(scoringItem* scoringItem) {
	if (scoringItem == nullptr) {
		return;
	}

	if (_collision.checkScoringItemCollision(_scoringItem->getSprite(), _player->getSprite())) {
		addToScore();
	}
}

//Alexandre
void gameState::addToScore() {
	_score += _scoringItem->getWorth();
	cout << _score << endl;
}

//Alexandre
void gameState::outOfBounds() {
	if (_player->getPosition().y >= 10000) {
		_player->setPosition(Vector2f(700, -100));
	}
	//pourrait faire la meme chose pour les autres entites. Pas le temps
}