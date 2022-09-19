#include "item.h"

item::item(gameDataRef data) {
	_data = data;
	setSprite();
	initCollisionBox();
	_physics = new physics(_data);
	_facingDirection = FACING_RIGHT;
	_entitySize = 0.65;
	_health = 1;

	_damageCooldown = DAMAGE_COOLDOWN;
	_entityType = ENTITY_TYPE_ITEM;
}

item::~item(){

}

IntRect item::setIntRect(int x, int y, int width, int height){
	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}

void item::setSprite() {
	_initialFrame = setIntRect(1024, 128);	

	//le sprite de l'entité est donné la texture de la sheet au complet en premier lieu
	_entitySprite.setTexture(_data->assets.getTexture("key item"));
	_entitySprite.setTextureRect(_initialFrame);			//la taille du sprite est ajusté selon les parametres du rectangle
	_entitySprite.setPosition((_data->window.getSize().x / 2 - 150), _data->window.getSize().y / 2);
	_entitySprite.setOrigin(64, 120);					//point d'origine au centre des pieds de l'entite
	_entitySprite.setScale(Vector2f(1, 1));		//si je passe deux floats a cette caliss de fonction, l'item disparait completement
}

void item::draw()const{
	_data->window.draw(_entitySprite);
	drawCollisionBox();
}

void item::update(float dt) {
	updateCollisionBox();
	flipSprite();
}

void item::move(Vector2f direction) {
	_movementClock.restart();

	handlePhysics(direction, PHYSICS_TYPE_ITEM);
}

void item::handlePhysics(Vector2f direction, int type) {

	_velocity.x += direction.x;
	_velocity.y += direction.y;

	_velocity = _physics->displacement(_velocity, type);		//la velocity est affecté selon la physiques

	_entitySprite.move(_velocity);
}

void item::beingCarried(){
	_velocity.x = 0;
	_velocity.y = 0;
}

void item::flipSprite(){
	if (_velocity.x > 0) {			//si on bouge vers la droite, le sprite reçois son scale normal
		_entitySprite.setScale(1, 1);
		_facingDirection = FACING_RIGHT;
	}

	else if (_velocity.x < 0) {			//si on bouge vers la gauche, le sprite est flipped
		_entitySprite.setScale(-1, 1);
		_facingDirection = FACING_LEFT;
	}
}

void item::flipToLeft(){
	_entitySprite.setScale(-1, 1);
}

void item::flipToRight(){
	_entitySprite.setScale(1, 1);
}

string item::getName(){
	return _name;
}
