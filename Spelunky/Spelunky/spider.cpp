#include "spider.h"

spider::spider(gameDataRef data) : _data(data) {
	setSprite();
	initCollisionBox();
	_physics = new physics(_data);

	_walkingAnimationIterator = 0;
	_fallingAnimationIterator = 0;
	_isAngry = false;

	_spiderPhase = 0;
	_damageCooldown = DAMAGE_COOLDOWN;
	_entityType = ENTITY_TYPE_ENEMY;
	setStanding();

	if (!_spiderSoundBuffer.loadFromFile(SPIDER1_SFX_FILEPATH))
		cout << "spider sound 1 introuvable" << endl;

	_spiderSound.push_back(Sound());
	_spiderSound[0].setBuffer(_spiderSoundBuffer);

	if (!_spiderSoundBuffer.loadFromFile(SPIDER2_SFX_FILEPATH))
		cout << "spider sound 2 introuvable" << endl;

	_spiderSound.push_back(Sound());
	_spiderSound[1].setBuffer(_spiderSoundBuffer);

	if (!_spiderSoundBuffer.loadFromFile(SPIDER3_SFX_FILEPATH))
		cout << "spider sound 3 introuvable" << endl;

	_spiderSound.push_back(Sound());
	_spiderSound[2].setBuffer(_spiderSoundBuffer);

	_spiderSound[0].setVolume(SFX_VOLUME);
	_spiderSound[1].setVolume(SFX_VOLUME);
	_spiderSound[2].setVolume(SFX_VOLUME);
}

spider::~spider() {
	delete _physics;
	_isAngry = false;
}

IntRect spider::setIntRect(int x, int y, int width, int height) {	//width et height = 128 par defaut

	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}

void spider::setSprite() {
	_initialFrame = setIntRect(0, 384);		//creation d'un rectangle qui commence à la position 0,0 dans une sheet
											//et qui a une dimension de 128,128

	//le sprite de l'entité est donné la texture de la sheet au complet en premier lieu
	_entitySprite.setTexture(_data->assets.getTexture("spider sprite"));
	_entitySprite.setTextureRect(_initialFrame);	//la taille du sprite est ajusté selon les parametres du rectangle

	_entitySprite.setPosition((_data->window.getSize().x / 2 - 256), (_data->window.getSize().y / 2));
	_entitySprite.setOrigin(64, 128);	//point d'origine au centre des pieds de l'entite

	int walkingSpriteLocationX = 0;
	int walkingSpriteLocationY = 0;
	for (int i = 0; i < 8; i++) {	//creation de nouveaux frames d'animation
		_walkingAnimationFrames.push_back(setIntRect(walkingSpriteLocationX, walkingSpriteLocationY, 128, 128));
		if (walkingSpriteLocationX == 384)
		{
			walkingSpriteLocationX = 0;
			walkingSpriteLocationY += 128;
		}
		else
		{
			walkingSpriteLocationX += 128;
		}
	}

	int fallingSpriteLocationX = 0;
	int fallingSpriteLocationY = 256;
	for (int i = 0; i < 4; i++) {	//creation de nouveaux frames d'animation
		_fallingAnimationFrames.push_back(setIntRect(fallingSpriteLocationX, fallingSpriteLocationY, 128, 128));
		if (fallingSpriteLocationX != 384)
		{
			fallingSpriteLocationX += 128;
		}
	}

}

void spider::draw() const {
	_data->window.draw(_entitySprite);
}

void spider::animate(float dt) {
	if (_entityState == ENTITY_STATE_STANDING) {			//si l'entite ne bouge pas et touche au sol
		_entitySprite.setTextureRect(_initialFrame);
		_walkingAnimationIterator = 0;
		_fallingAnimationIterator = 0;
	}
	else if (_entityState == ENTITY_STATE_AIR) {			//si l'entite ne touche pas au sol
		if (_animationClock.getElapsedTime().asSeconds() > ANIMATION_DURATION)
		{
			_fallingAnimationIterator++;
			if (_fallingAnimationIterator >= _fallingAnimationFrames.size()) { //après 6 images, on revient au debut
				_fallingAnimationIterator--;			//on empeche l'animation de boucler et on reste au dernier frame
			}
			_entitySprite.setTextureRect(_fallingAnimationFrames.at(_fallingAnimationIterator));
			_animationClock.restart();
		}
		_walkingAnimationIterator = 0;
	}
	else if (_entityState == ENTITY_STATE_WALKING) {			//si l'entite bouge au sol
		if (_animationClock.getElapsedTime().asSeconds() > ANIMATION_DURATION)
		{
			_walkingAnimationIterator++;
			if (_walkingAnimationIterator >= _walkingAnimationFrames.size()) //après 8 images, on revient à 0
				_walkingAnimationIterator = 0;

			_entitySprite.setTextureRect(_walkingAnimationFrames.at(_walkingAnimationIterator));
			_animationClock.restart();
		}
		_fallingAnimationIterator = 0;
	}

}

void spider::update(float dt) {
	animate(dt);
	updateCollisionBox();
}

void spider::death(){

}

void spider::move(Vector2f direction) {
	_movementClock.restart();

	handlePhysics(direction, PHYSICS_TYPE_NORMAL);

	if (_velocity.y <= -1) {	//si la vitesse est égale à/dépasse 1, l'entite entre dans l'etat AIR

		_entityState = ENTITY_STATE_AIR;

		if (_velocity.x > 0) {					//si on bouge vers la droite, le sprite reçois son scale normal et l'entite devient MOVING
			_entitySprite.setScale(1, 1);
		}

		else if (_velocity.x < 0) {				//si on bouge vers la gauche, le sprite est flipped et l'entite devient MOVING
			_entitySprite.setScale(-1, 1);
		}
	}

	if (_velocity.x != 0) {			//si on n'est pas dans les air, on peut marcher

		_entityState = ENTITY_STATE_WALKING;

		if (_velocity.x > 0) {			//si on bouge vers la droite, le sprite reçois son scale normal et l'entite devient MOVING
			_entitySprite.setScale(1, 1);
		}

		else if (_velocity.x < 0) {			//si on bouge vers la gauche, le sprite est flipped et l'entite devient MOVING
			_entitySprite.setScale(-1, 1);
		}

	}
	else {
		_entityState = ENTITY_STATE_STANDING;
	}

}

void spider::handlePhysics(Vector2f direction, int type) {

	//la chauve souris n'est pas affecté par la physique, sa velocité demeure statique
	_velocity.x = direction.x;
	_velocity.y = direction.y;

	_velocity = _physics->displacement(_velocity, PHYSICS_TYPE_NORMAL);

	_entitySprite.move(_velocity);

}

void spider::setStanding() {
	_entityState = ENTITY_STATE_STANDING;
}

void spider::setFalling() {
	_entityState = ENTITY_STATE_AIR;
}

void spider::detection(Vector2f entityPosition) {
	if (isStanding() && entityPosition.x <= getPosition().x + 8 && entityPosition.x >= getPosition().x - 8) {
		_isAngry = true;
		setFalling();
		_spiderSound[0].play();
	}
	

}

Vector2f spider::pathfind(Vector2f destination) {
	Vector2f direction;

	if (getPosition().x < destination.x) {	//si la chauve souris est a gauche du personnage
		direction.x = 25;
	}
	if (getPosition().x > destination.x) {	//si la chauve souris est a droite du personnage
		direction.x = -25;
	}

	if (_spiderPhase >= 5)
	{
		direction.y = 25;
	}
	else {
		direction.y = -25;
	}
	if (_spiderPhase == 1)
	{
		_spiderSound[1].play();
	}
	else if (_spiderPhase == 10) {
		_spiderSound[2].play();
	}
	return direction;
}

bool spider::isMoving() {
	if (_entityState != ENTITY_STATE_STANDING)
		return true;
	else
		return false;
}

bool spider::isWalking() {
	if (_entityState == ENTITY_STATE_WALKING)
		return true;
	else
		return false;
}

bool spider::getIsAngry() {
	return _isAngry;
}

bool spider::isStanding() {
	if (_entityState == ENTITY_STATE_STANDING)
		return true;
	else
		return false;
}

Vector2f spider::getVelocity() {
	return _velocity;
}

const Sprite& spider::getSprite() const {
	return _entitySprite;
}

Vector2f spider::getPosition() const {
	return _entitySprite.getPosition();
}


// spider 2 sec arret puis saute 5 x -2 y direction joueur
void spider::wait() {
	handlePhysics(Vector2f(0, 0), PHYSICS_TYPE_NORMAL);
}

void spider::attacking(Vector2f playerPosition, Clock& spiderClock){
	if (spiderClock.getElapsedTime().asSeconds() >= SPIDER_SPEED)
	{
		_spiderPhase = 1;
		move(pathfind(playerPosition));
		spiderClock.restart();
	}
	else if (getSpiderPhase() >= 1)
	{
		_spiderPhase++;
		move(pathfind(playerPosition));
		if (_spiderPhase >= 10)
		{
			_spiderPhase = 0;
		}
	}
	else
	{
		wait();
	}
}

int& spider::getSpiderPhase()
{
	return _spiderPhase;
}

int spider::getEnemyType(){
	return _enemyType;
}
