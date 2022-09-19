#include "scoringItem.h"

scoringItem::scoringItem(gameDataRef data){
	_data = data;
	setSprite();
	initCollisionBox();
	_physics = new physics(_data);
	_facingDirection = FACING_RIGHT;
	_entitySize = 0.65;
	_health = 1;
	_worth = 100;

	_damageCooldown = DAMAGE_COOLDOWN;
	_entityType = ENTITY_TYPE_ITEM;
}

scoringItem::~scoringItem(){

}

IntRect scoringItem::setIntRect(int x, int y, int width, int height){
	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}

void scoringItem::setSprite(){
	_initialFrame = setIntRect(768, 0);

	//le sprite de l'entité est donné la texture de la sheet au complet en premier lieu
	_entitySprite.setTexture(_data->assets.getTexture("scoring item"));
	_entitySprite.setTextureRect(_initialFrame);			//la taille du sprite est ajusté selon les parametres du rectangle
	_entitySprite.setPosition((_data->window.getSize().x / 2 + 1000), _data->window.getSize().y / 2);
	_entitySprite.setOrigin(64, 120);					//point d'origine au centre des pieds de l'entite
	_entitySprite.setScale(Vector2f(1, 1));		//si je passe deux floats a cette caliss de fonction, l'item disparait completement
}

void scoringItem::draw() const{
	_data->window.draw(_entitySprite);
}

void scoringItem::update(float dt){
	updateCollisionBox();
}

void scoringItem::move(Vector2f direction){
	_movementClock.restart();

	handlePhysics(direction, PHYSICS_TYPE_ITEM);
}

void scoringItem::handlePhysics(Vector2f direction, int type){
	_velocity.x += direction.x;
	_velocity.y += direction.y;

	_velocity = _physics->displacement(_velocity, type);		//la velocity est affecté selon la physiques

	_entitySprite.move(_velocity);
}

string scoringItem::getName(){
	return _name;
}

int scoringItem::getWorth(){
	return _worth;
}
