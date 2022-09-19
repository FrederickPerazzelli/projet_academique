#include "player.h"

player::player(gameDataRef data, string character){
	_data = data;
	_selectedCharacter = character;
	setSprite();
	setWhipSprite();
	initCollisionBox();

	_physics = new physics(_data);

	_walkingAnimationIterator = 0;
	_fallingAnimationIterator = 0;
	_interactCooldown = 100.f;
	_whipCooldown = 100.f;
	_whipSpriteOrigin = Vector2f(128, 140);
	
	_health = 3;
	_carriedItem = nullptr;
	_isHoldingItem = false;
	_facingDirection = FACING_RIGHT;

	_damageCooldown = DAMAGE_COOLDOWN;
	_entityType = ENTITY_TYPE_PLAYER;

	if (!_jumpSoundBuffer.loadFromFile(JUMP_SFX_FILEPATH))
		cout << "son de saut introuvable" << endl;
	_jumpSound.setBuffer(_jumpSoundBuffer);
	_jumpSound.setVolume(SFX_VOLUME);

	if (!_stepSoundBuffer.loadFromFile(STEP1_SFX_FILEPATH))
		cout << "son de pas1 introuvable" << endl;

	_stepSound.push_back(Sound());
	_stepSound[0].setBuffer(_stepSoundBuffer);

	if (!_stepSoundBuffer.loadFromFile(STEP2_SFX_FILEPATH))
		cout << "son de pas2 introuvable" << endl;

	_stepSound.push_back(Sound());
	_stepSound[1].setBuffer(_stepSoundBuffer);

	if (!_stepSoundBuffer.loadFromFile(STEP3_SFX_FILEPATH))
		cout << "son de pas13 introuvable" << endl;

	_stepSound.push_back(Sound());
	_stepSound[2].setBuffer(_stepSoundBuffer);

	if (!_stepSoundBuffer.loadFromFile(STEP4_SFX_FILEPATH))
		cout << "son de pas4 introuvable" << endl;

	_stepSound.push_back(Sound());
	_stepSound[3].setBuffer(_stepSoundBuffer);

	_stepSound[0].setVolume(SFX_VOLUME);
	_stepSound[1].setVolume(SFX_VOLUME);
	_stepSound[2].setVolume(SFX_VOLUME);
	_stepSound[3].setVolume(SFX_VOLUME);

	_isStepSoundPlaying = false;

}

player::~player() {

}

void player::update(float dt) {
	animate();
	updateCollisionBox();
	flipSprite();

	if (_isHoldingItem) {
		_carriedItem->beingCarried();
		carryItem();
	}

	//cout << "_entitySpriteX: " << _entitySprite.getPosition().x << endl;
	//cout << "_entitySpriteY: " << _entitySprite.getPosition().y << endl << endl;

}

IntRect player::setIntRect(Vector2f position, int width, int height) {	//width et height = 128 par defaut

	IntRect newSprite;
	newSprite.left = position.x;
	newSprite.top = position.y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}

//initialise les sprites du personnage
void player::setSprite(){
	_initialFrame = setIntRect(Vector2f(0, 0), 128, 122);			//creation d'un rectangle qui commence à la position 0,0 dans une sheet
																	//et qui a une dimension de 128,122
	
	//le sprite de l'entité est donné la texture de la sheet au complet en premier lieu
	_entitySprite.setTexture(_data->assets.getTexture(_selectedCharacter));
	_entitySprite.setTextureRect(_initialFrame);	//la taille du sprite est ajusté selon les parametres du rectangle
	_entitySprite.setPosition((_data->window.getSize().x / 2), (_data->window.getSize().y / 2));
	_entitySprite.setOrigin(64, 122);	//point d'origine au centre des pieds de l'entite

	//sprites de mouvement
	Vector2f walkingSpriteLocation = Vector2f(128, 0);
	for (int i = 0; i < 8; i++) {	//creation de nouveaux frames d'animation
		_walkingAnimationFrames.push_back(setIntRect(walkingSpriteLocation, 128, 122));
		walkingSpriteLocation.x += 128;
	}

	//sprites de lorsque dans les air
	Vector2f fallingSpriteLocation = Vector2f(0, 1152);
	for (int i = 0; i < 8; i++) {	//creation de nouveaux frames d'animation
		_fallingAnimationFrames.push_back(setIntRect(fallingSpriteLocation, 128, 122));
		fallingSpriteLocation.x += 128;
	}
}

//initialise le whip du personnage
void player::setWhipSprite(){
	_emptyWhipFrame = setIntRect(Vector2f(1408, 1408));

	_whipSprite.setTexture(_data->assets.getTexture(_selectedCharacter));
	_whipSprite.setTextureRect(_emptyWhipFrame);
	_whipSprite.setPosition((_data->window.getSize().x / 2), (_data->window.getSize().y / 2));
	_whipSprite.setOrigin(_whipSpriteOrigin);
	_whipSprite.setScale(1, 1);

	//sprites d'animations du personnage
	Vector2f whippingSpriteLocation = Vector2f(0, 512);
	for (int i = 0; i < 6; i++) {
		_whippingAnimationFrames.push_back(setIntRect(whippingSpriteLocation, 128, 122));
		whippingSpriteLocation.x += 128;
	}

	//sprites du whip
	Vector2f whipSpriteLocation = Vector2f(1280, 1536);
	Vector2f emptyWhipSpriteLocation = Vector2f(1536, 1408);	//lorsque inactif, le sprite du whip est positionne sur un espace vide dans la sprite sheet
	_whipAnimationFrames.push_back(setIntRect(emptyWhipSpriteLocation, 128, 122));
	for (int i = 0; i < 6; i++) {
		_whipAnimationFrames.push_back(setIntRect(whipSpriteLocation, 128, 122));
		whipSpriteLocation.x += 128;
	}
}

//a chaque update, cette methode devrait etre appellé pour que le sprite de l'item tenu suive le personnage
void player::carryItem() {	//doit absolument permettre le sprite d'objet de changer de direction
	_carriedItem->getSprite().setPosition(_entitySprite.getPosition().x, _entitySprite.getPosition().y - 10);
}

void player::throwItem() {
	_carriedItem->move(calculateThrowVelocity());
	_isHoldingItem = false;
	cout << "throwing " << _carriedItem->getName() << endl;
	_carriedItem = nullptr;
}

Vector2f player::calculateThrowVelocity() {

	if (_facingDirection == FACING_LEFT) {
		_throwVelocity.x = _velocity.x - 30;
	}

	if (_facingDirection == FACING_RIGHT) {
		_throwVelocity.x = _velocity.x + 30;
	}

	if (_velocity.y <= 0 || _entityState != ENTITY_STATE_AIR) {
		_throwVelocity.y = _velocity.y - 16;
	}
	else if (_velocity.y > 0 && _entityState == ENTITY_STATE_AIR) {
		_throwVelocity.y = _velocity.y + 16;
	}

	return _throwVelocity;
}

void player::pickupItem(item* item) {
	if (item == nullptr) {
		return;
	}

	Rect<float> rect1 = _entitySprite.getGlobalBounds();
	Rect<float> rect2 = item->getSprite().getGlobalBounds();

	//pick up item si on a les mains vide
	if (_carriedItem == nullptr && rect1.intersects(rect2) && _onGround == true) {
		_carriedItem = item;
		_isHoldingItem = true;
		cout << "picking up " << _carriedItem->getName() << endl;
		carryItem();
	}
}

void player::dropItem() {
	_isHoldingItem = false;
	_carriedItem->move(_velocity);		//retient le momentum du joeur lorsque l'item est dropped
	cout << "dropping " << _carriedItem->getName() << endl;
	_carriedItem = nullptr;
}

void player::flipSprite() {
	//si on bouge vers la droite, le sprite reçois son scale normal. Si un item est tenu, il est aussi flipped
	if (_velocity.x > 0) {
		_facingDirection = FACING_RIGHT;
		_entitySprite.setScale(1, 1);
		_whipSprite.setScale(1, 1);
		if (_carriedItem != nullptr)
			_carriedItem->flipToRight();
	}

	//si on bouge vers la gauche, le sprite est flipped. Si un item est tenu, il est aussi flipped
	else if (_velocity.x < 0) {			
		_facingDirection = FACING_LEFT;
		_entitySprite.setScale(-1, 1);
		_whipSprite.setScale(-1, 1);
		if (_carriedItem != nullptr)
			_carriedItem->flipToLeft();
	}
}

void player::whip() {
	_isWhipping = true;
}

void player::death(){
	cout << "dead" << endl;
}

void player::draw() const {
	_data->window.draw(_whipSprite);
	_data->window.draw(_entitySprite);
	drawCollisionBox();
}

void player::animate() {
	if (_isWhipping == true) {
		if (_animationClock.getElapsedTime().asSeconds() > ANIMATION_DURATION){
			//animate whipping
			if (_whippingAnimationIterator >= _whippingAnimationFrames.size()) {
				_whippingAnimationIterator = 0;
				_whipAnimationIterator = 0;
				_isWhipping = false;
			}
			else {
				_entitySprite.setTextureRect(_whippingAnimationFrames.at(_whippingAnimationIterator));
				_whippingAnimationIterator++;

				//animate whip
				_whipSprite.setOrigin(_whipSpriteOrigin);	//reinitialisation de l'origine du sprite du whip
				_whipAnimationIterator++;
				if (_whipAnimationIterator >= _whipAnimationFrames.size()) {
					_whipAnimationIterator = 0;
				}
			}
			//l'origine du whip doit manuellement etre reajusté puisqe le sprite n'est pas aligné avec l'animation du personnage
			if (_whipAnimationIterator == 4) {
				//deuxieme audio de whip
				_whipSprite.setOrigin(_entitySprite.getOrigin().x - 25, _entitySprite.getOrigin().y);
			}
			if (_whipAnimationIterator > 4) {
				_whipSprite.setOrigin(_entitySprite.getOrigin().x - 80, _entitySprite.getOrigin().y - 27);
			}

			_whipSprite.setTextureRect(_whipAnimationFrames.at(_whipAnimationIterator));
			_animationClock.restart();
		}
	}
	else if (_entityState == ENTITY_STATE_STANDING) {			//si l'entite ne bouge pas et touche au sol
		_entitySprite.setTextureRect(_initialFrame);
		_walkingAnimationIterator = 0;
		_fallingAnimationIterator = 0;
	}
	else if (_entityState == ENTITY_STATE_AIR) {			//si l'entite ne touche pas au sol
		if (_animationClock.getElapsedTime().asSeconds() > ANIMATION_DURATION)
		{
			_fallingAnimationIterator++;
			if (_fallingAnimationIterator >= _fallingAnimationFrames.size()) //après 8 images, on reste à 8
				_fallingAnimationIterator--;			//on empeche l'animation de boucler et on reste au dernier frame

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
	else {

	}

}

void player::move(Vector2f direction) {
	_movementClock.restart();

	direction.x *= PLAYER_WALKING_VELOCITY;
	direction.y *= PLAYER_JUMP_VELOCITY;

	handlePhysics(direction, PHYSICS_TYPE_NORMAL);

	if (isStanding(direction)) {
		_entityState = ENTITY_STATE_STANDING;
	}

	else if (isWalking(direction)) {
		_entityState = ENTITY_STATE_WALKING;
	}

	else if (_velocity.y >= 1 || _velocity.y <= -1) {	//si la vitesse est égale à/dépasse 1, l'entite entre dans l'etat AIR
		_entityState = ENTITY_STATE_AIR;
	}
}

void player::handlePhysics(Vector2f direction, int type) {
	_velocity.x += direction.x;
	_velocity.y += direction.y;

	_velocity = _physics->displacement(_velocity, type);		//la velocity est affecté selon la physiques

	_entitySprite.move(_velocity);
	_whipSprite.setPosition(_entitySprite.getPosition());	//sans cette ligne, la collisionbox du whip traine en arriere en bougeant

	if (direction.y <= -1) {
		_jumpSound.play();
	}

	if (direction.x != 0) {
		if (_velocity.y == 0 && isOnGround() == true) {
			if (_isStepSoundPlaying == false)
			{
				_stepSound[3].stop();
				_stepSound[0].play();
				_isStepSoundPlaying = true;
				_stepTime.restart();
			}
			else if (_stepTime.getElapsedTime().asSeconds() >= 0.25f && _stepTime.getElapsedTime().asSeconds() < 0.5f)
			{
				_stepSound[0].stop();
				_stepSound[1].play();
				_stepTime.restart();
			}
			else if (_stepTime.getElapsedTime().asSeconds() >= 0.5f && _stepTime.getElapsedTime().asSeconds() < 0.75f)
			{
				_stepSound[1].stop();
				_stepSound[2].play();
				_stepTime.restart();
			}
			else if (_isStepSoundPlaying == true && _stepTime.getElapsedTime().asSeconds() >= 0.75f)
			{
				_stepSound[2].stop();
				_stepSound[3].play();
				_isStepSoundPlaying = false;
				_stepTime.restart();
			}
		}
	}
}

void player::setStanding() {
	_entityState = ENTITY_STATE_STANDING;
}

void player::setOnGround() {
	_onGround = true;
	_velocity.y = 0;
}

void player::setInAir() {
	_onGround = false;
}

bool player::isOnGround() {
	if (_onGround == true) {
		return true;
	}
	else
		return false;
}

bool player::isStanding(Vector2f velocity) {
	if (velocity.x == 0 && velocity.y == 0 && isOnGround()) {
		return true;
	}
	else
		return false;
}

bool player::isWalking(Vector2f velocity) {
	if (velocity.x != 0 && isOnGround()) {
		return true;
	}
	else
		return false;
}

item player::getHeldItem() {
	return *_carriedItem;
}

string player::getState() {
	if (_entityState == 1)
		return "STANDING";
	else if (_entityState == 2)
		return "WALKING";
	else if (_entityState == 3)
		return "AIR";
}

bool player::isHoldingItem() {
	if (_isHoldingItem == true) {
		return true;
	}
	else
		return false;
}

float player::getInteractCooldown() {
	return _interactCooldown;
}

float player::getWhipCooldown() {
	return _whipCooldown;
}

Sprite player::getWhipSprite(){
	return _whipSprite;
}

bool player::isWhipping(){
	return _isWhipping;
}