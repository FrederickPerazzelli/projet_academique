#include "entity.h"
entity::entity() {

}

entity::entity(gameDataRef data): _data(data) {
	_physics = new physics(_data);
	_facingDirection = FACING_RIGHT;
}

entity::~entity() {
	delete _physics;
}

IntRect entity::setIntRect(int x, int y, int width, int height) {	//width et height = 128 par defaut

	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}

void entity::collidingBottom(int type, Sprite terrain) {
	if (_velocity.y > 0) {	//empeche l'entite de s'accrocher de s'accrocher dans les coins
		_entitySprite.setPosition(_entitySprite.getPosition().x, terrain.getPosition().y);
		if (type == ENTITY_TYPE_PLAYER) {
			setOnGround();
		}

		if (type == ENTITY_TYPE_ITEM) {
			//bondissement de l'item
			_velocity.x = _velocity.x * 0.75;
			_velocity.y = -_velocity.y * 0.5;
		}
	}
}

void entity::collidingTop(int type, Sprite terrain) {
	if (_velocity.y < 0) {	//empeche l'entite de s'accrocher de s'accrocher dans les coins
		_entitySprite.setPosition(_entitySprite.getPosition().x, terrain.getPosition().y + terrain.getGlobalBounds().height + _entitySprite.getGlobalBounds().height);
		_velocity.y = 0;

		if (type == ENTITY_TYPE_ITEM) {
			//bondissement de l'item
			_velocity.y = _velocity.y * -1;
		}
	}
}

void entity::collidingLeft(int type, Sprite terrain) {
	if (_velocity.x < 0) {	//empeche l'entite de s'accrocher de s'accrocher dans les coins
		_entitySprite.setPosition(terrain.getPosition().x + terrain.getGlobalBounds().width + _entitySprite.getGlobalBounds().width / 2 + 20, _entitySprite.getPosition().y);
		if (type == ENTITY_TYPE_ITEM) {
			//bondissement de l'item
			_velocity.x *= -0.8;
		}
	}
}

void entity::collidingRight(int type, Sprite terrain) {
	if (_velocity.x > 0) {	//empeche l'entite de s'accrocher de s'accrocher dans les coins
		_entitySprite.setPosition(terrain.getPosition().x - _entitySprite.getGlobalBounds().width / 2 - 20, _entitySprite.getPosition().y);
		if (type == ENTITY_TYPE_ITEM) {
			//bondissement de l'item
			_velocity.x *= -0.8;
		}
	}
}

void entity::handlePhysics(Vector2f direction, int type){

	//la velocity du frame precedent est additionner a la velocity retourner par le input du frame courrant
	_velocity.x += direction.x;
	_velocity.y += direction.y;

	//la velocity est envoyé à l'objet physics
	_velocity = _physics->displacement(_velocity, type);		//la velocity est affecté selon la physiques

	//l'entity est enfin bougé par la velocity retournée par la physique
	_entitySprite.move(_velocity);
	
}

void entity::setStanding() {
	_entityState = ENTITY_STATE_STANDING;
}

void entity::checkDamageCooldown(Time& time){
	time = _damageClock.getElapsedTime();
	if (time.asMilliseconds() >= _damageCooldown) {	//si le temps écoulé est plus grand que la valeur de _damageCooldown,
		takingDamage();								//il est possible de prendre du dommage
	}
	_damageClock.restart();
}

void entity::takingDamage(){
	_health--;
}

int entity::getHealth(){
	return _health;
}

void entity::setOnGround(){
	_onGround = true;
	_velocity.y = 0;	//besoin de set la velocity Y a 0, sinon l'entity tombe dans le sol
}

void entity::setInAir(){
	_onGround = false;
}

bool entity::isOnGround(){
	if (_onGround == true) {
		return true;
	}
	else
		return false;
}

bool entity::isStanding(Vector2f velocity) {
	if (velocity.x == 0 && velocity.y == 0 && isOnGround()) {
		return true;
	}
	else
		return false;
}

bool entity::isWalking(Vector2f velocity){
	if (velocity.x != 0 && isOnGround()) {
		return true;
	}
	else
		return false;
}

string entity::getState(){
	if (_entityState == 1)
		return "STANDING";
	else if (_entityState == 2)
		return "WALKING";
	else if (_entityState == 3)
		return "AIR";
}

Vector2f entity::getVelocity(){
	return _velocity;
}

const Sprite& entity::getSprite() const {
	return _entitySprite;
}

Sprite& entity::getSprite(){
	return _entitySprite;
}

Vector2f entity::getPosition() const{
	return _entitySprite.getPosition();
}

float entity::getDamageCooldown(){
	return _damageCooldown;
}

int entity::getType(){
	return _entityType;
}

void entity::initCollisionBox() {
	RectangleShape _borderTop;
	RectangleShape _borderBottom;
	RectangleShape _borderLeft;
	RectangleShape _borderRight;

	_borderTop.setPosition(_entitySprite.getPosition());
	_borderTop.setSize(Vector2f(_entitySprite.getGlobalBounds().width, 1));		//aussi large que l'entite, 1 de hauteur
	_borderTop.setOrigin(_entitySprite.getOrigin().x, _entitySprite.getGlobalBounds().height);
	_borderTop.setFillColor(Color(255, 0, 0));

	_borderBottom.setPosition(_entitySprite.getPosition());
	_borderBottom.setSize(Vector2f(_entitySprite.getGlobalBounds().width, -1));	//aussi large que l'entite, 1 de hauteur
	_borderBottom.setOrigin(_entitySprite.getOrigin().x, _entitySprite.getGlobalBounds().height - _entitySprite.getGlobalBounds().height);
	_borderBottom.setFillColor(Color(255, 0, 0));

	_borderLeft.setPosition(_entitySprite.getPosition());
	_borderLeft.setSize(Vector2f(-1, _entitySprite.getGlobalBounds().height));	//aussi grand que l'entite, 1 de largeur
	_borderLeft.setOrigin(_entitySprite.getOrigin().x, _entitySprite.getGlobalBounds().height);
	_borderLeft.setFillColor(Color(255, 0, 0));

	_borderRight.setPosition(_entitySprite.getPosition());
	_borderRight.setSize(Vector2f(1, _entitySprite.getGlobalBounds().height));	//aussi grand que l'entite, 1 de largeur
	_borderRight.setOrigin(_entitySprite.getOrigin().x - _entitySprite.getGlobalBounds().width, _entitySprite.getGlobalBounds().height);
	_borderRight.setFillColor(Color(255, 0, 0));

	_collisionBox.push_back(_borderTop);
	_collisionBox.push_back(_borderBottom);
	_collisionBox.push_back(_borderLeft);
	_collisionBox.push_back(_borderRight);

}

void entity::updateCollisionBox(){
	for (int i = 0; i < _collisionBox.size(); i++) {
		_collisionBox[i].setPosition(_entitySprite.getPosition());
	}
}

void entity::drawCollisionBox() const{
	for (int i = 0; i < _collisionBox.size(); i++) {
		_data->window.draw(_collisionBox[i]);
	}
}

vector<RectangleShape> entity::getCollisionBox()const{
	return _collisionBox;
}

void entity::setPosition(Vector2f position){
	_entitySprite.setPosition(position);
}
