#include "bat.h"

bat::bat(gameDataRef data) {
	_data = data;
	setEnemySprite();
	initCollisionBox();
	_physics = new physics(_data);

	//_walkingAnimationIterator = 0;
	_fallingAnimationIterator = 0;
	_isAngry = false;

	_damageCooldown = DAMAGE_COOLDOWN;
	_entityType = ENTITY_TYPE_ENEMY;
}

bat::~bat() {
	_isAngry = false;
}

IntRect bat::setIntRect(int x, int y, int width, int height) {	//width et height = 128 par defaut

	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}

void bat::setEnemySprite(){
	_initialFrame = setIntRect(0, 0);		//creation d'un rectangle qui commence à la position 0,0 dans une sheet
											//et qui a une dimension de 128,128

	//le sprite de l'entité est donné la texture de la sheet au complet en premier lieu
	_entitySprite.setTexture(_data->assets.getTexture("bat sprite"));
	_entitySprite.setTextureRect(_initialFrame);	//la taille du sprite est ajusté selon les parametres du rectangle

	_entitySprite.setPosition((_data->window.getSize().x / 2), (_data->window.getSize().y / 2));
	_entitySprite.setOrigin(64, 128);	//point d'origine au centre des pieds de l'entite

	//int walkingSpriteLocationX = 128;
	//int walkingSpriteLocationY = 0;
	//for (int i = 0; i < 8; i++) {	//creation de nouveaux frames d'animation
	//	_walkingAnimationFrames.push_back(setIntRect(walkingSpriteLocationX, walkingSpriteLocationY, 128, 128));
	//	walkingSpriteLocationX += 128;
	//}

	int fallingSpriteLocationX = 256;
	int fallingSpriteLocationY = 128;
	for (int i = 0; i < 6; i++) {	//creation de nouveaux frames d'animation
		_fallingAnimationFrames.push_back(setIntRect(fallingSpriteLocationX, fallingSpriteLocationY, 128, 128));
		if (fallingSpriteLocationX == 384)
		{
			fallingSpriteLocationX = 0;
			fallingSpriteLocationY += 128;
		}
		else
		{
			fallingSpriteLocationX += 128;
		}

	}
}

void bat::setSprite() {
	_initialFrame = setIntRect(0, 0);		//creation d'un rectangle qui commence à la position 0,0 dans une sheet
											//et qui a une dimension de 128,128

	//le sprite de l'entité est donné la texture de la sheet au complet en premier lieu
	_entitySprite.setTexture(_data->assets.getTexture("bat sprite"));
	_entitySprite.setTextureRect(_initialFrame);	//la taille du sprite est ajusté selon les parametres du rectangle

	_entitySprite.setPosition((_data->window.getSize().x / 2), (_data->window.getSize().y / 2));
	_entitySprite.setOrigin(64, 128);	//point d'origine au centre des pieds de l'entite

	//int walkingSpriteLocationX = 128;
	//int walkingSpriteLocationY = 0;
	//for (int i = 0; i < 8; i++) {	//creation de nouveaux frames d'animation
	//	_walkingAnimationFrames.push_back(setIntRect(walkingSpriteLocationX, walkingSpriteLocationY, 128, 128));
	//	walkingSpriteLocationX += 128;
	//}

	int fallingSpriteLocationX = 256;
	int fallingSpriteLocationY = 128;
	for (int i = 0; i < 6; i++) {	//creation de nouveaux frames d'animation
		_fallingAnimationFrames.push_back(setIntRect(fallingSpriteLocationX, fallingSpriteLocationY, 128, 128));
		if (fallingSpriteLocationX == 384)
		{
			fallingSpriteLocationX = 0;
			fallingSpriteLocationY += 128;
		}
		else
		{
			fallingSpriteLocationX += 128;
		}
		
	}

}

void bat::draw() const {
	_data->window.draw(_entitySprite);
	drawCollisionBox();
}

void bat::animate(float dt) {
	if (_entityState == ENTITY_STATE_STANDING) {			//si l'entite ne bouge pas et touche au sol
		_entitySprite.setTextureRect(_initialFrame);
		//_walkingAnimationIterator = 0;
		_fallingAnimationIterator = 0;
	}
	else if (_entityState == ENTITY_STATE_AIR) {			//si l'entite ne touche pas au sol
		if (_animationClock.getElapsedTime().asSeconds() > ANIMATION_DURATION)
		{
			_fallingAnimationIterator++;
			if (_fallingAnimationIterator >= _fallingAnimationFrames.size()) //après 6 images, on revient au debut
				_fallingAnimationIterator = 0;			//on empeche l'animation de boucler et on reste au dernier frame

			_entitySprite.setTextureRect(_fallingAnimationFrames.at(_fallingAnimationIterator));
			_animationClock.restart();
		}
		//_walkingAnimationIterator = 0;
	}
	else if (_entityState == ENTITY_STATE_WALKING) {			//si l'entite bouge au sol
		if (_animationClock.getElapsedTime().asSeconds() > ANIMATION_DURATION)
		{
			//_walkingAnimationIterator++;
			//if (_walkingAnimationIterator >= _walkingAnimationFrames.size()) //après 8 images, on revient à 0
			//	_walkingAnimationIterator = 0;

			//_enemySprite.setTextureRect(_walkingAnimationFrames.at(_walkingAnimationIterator));
			//_animationClock.restart();
		}
		_fallingAnimationIterator = 0;
	}

}

void bat::update(float dt) {
	animate(dt);
	updateCollisionBox();
}

void bat::move(Vector2f direction) {
	_movementClock.restart();

	handlePhysics(direction, PHYSICS_TYPE_FLYING);

	if (_velocity.y >= 1 || _velocity.y <= -1) {	//si la vitesse est égale à/dépasse 1, l'entite entre dans l'etat AIR

		_entityState = ENTITY_STATE_AIR;

		if (_velocity.x > 0) {					//si on bouge vers la droite, le sprite reçois son scale normal et l'entite devient MOVING
			_entitySprite.setScale(1, 1);
		}

		else if (_velocity.x < 0) {				//si on bouge vers la gauche, le sprite est flipped et l'entite devient MOVING
			_entitySprite.setScale(-1, 1);
		}
	}

	else if (_velocity.x != 0) {			//si on n'est pas dans les air, on peut marcher

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

void bat::handlePhysics(Vector2f direction, int type) {

	//la chauve souris n'est pas affecté par la physique, sa velocité demeure statique
	_velocity.x = direction.x;
	_velocity.y = direction.y;

	_entitySprite.move(_velocity);

}

void bat::setStanding() {
	_entityState = ENTITY_STATE_STANDING;
	_velocity.x = 0;

	if (_velocity.y < 0)	//empeche l'entite de flotter infiniment lors d'un saut
		_velocity.y = 0;
}

void bat::setFlying()
{
	_entityState = ENTITY_STATE_AIR;
}

bool bat::isStanding()
{
	if (_entityState == ENTITY_STATE_STANDING)
		return true;
	else
		return false;
}


bool bat::isMoving() {
	if (_entityState != ENTITY_STATE_STANDING)
		return true;
	else
		return false;
}

Vector2f bat::pathfindStraightLine(Vector2f destination){
	Vector2f direction;

	if (getPosition().x < destination.x) {	//si la chauve souris est a gauche du personnage
		direction.x = 5;
	}
	if (getPosition().x > destination.x) {	//si la chauve souris est a droite du personnage
		direction.x = -5;
	}
	if (getPosition().y < destination.y && getPosition().y - destination.y < abs(1)) {	//si la chauve souris est en haut du personnage
		direction.y = 5;
	}
	if (getPosition().y > destination.y && getPosition().y + destination.y > abs(1)) {	//si la chauve souris est en bas du personnage
		direction.y = -5;
	}

	return direction;
}

int bat::getEnemyType(){
	return _enemyType;
}

Vector2f bat::getPosition() const {
	return _entitySprite.getPosition();
}

bool bat::getIsAngry()
{
	return _isAngry;
}

void bat::detection(Vector2f entityPosition) {
	if (isStanding() && entityPosition.x <= getPosition().x + 32 && entityPosition.x >= getPosition().x - 32) {
		_isAngry = true;
		setFlying();
	}
}
