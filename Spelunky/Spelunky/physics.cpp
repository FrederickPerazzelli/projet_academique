#include "physics.h"	

physics::physics(gameDataRef data){
	init();
}

void physics::init(){
	//Vitesse maximale d'un entite
	_maxVelocityEntityX = 25;
	_maxVelocityEntityY = 50;
	//Vitesse minimale d'un objet
	_maxVelocityItemX = 50;
	_maxVelocityItemY = 50;

	_minVelocity = 0.5;
	_dragEntity = 0.75;
	_dragItem = 0.95;
	
	_gravity = 1.5;	//gravity normale = 1.5
}

Vector2f physics::displacement(Vector2f velocity, int type) {

	if (type == PHYSICS_TYPE_NORMAL) {
		//si la limite de velociteX est depassé, on baisse la velocite a la limite
		if (velocity.x > _maxVelocityEntityX || velocity.x < -_maxVelocityEntityX) {
			//if moving left
			if (velocity.x < 0.f) {
				velocity.x = _maxVelocityEntityX * -1.f;
			}
			//if moving right
			else if (velocity.x > 0.f){
				velocity.x = _maxVelocityEntityX * 1.f;
			}
		}
		//si la limite de velociteY est depassé, on baisse la velocite a la limite
		if (velocity.y > _maxVelocityEntityY || velocity.y < -_maxVelocityEntityY) {
			//if moving up
			if (velocity.y < 0.f) {
				velocity.y = _maxVelocityEntityY * -1.f;
			}
			//if moving down
			else if (velocity.y > 0.f) {
				velocity.y = _maxVelocityEntityY * 1.f;
			}
		}
		velocity.x *= _dragEntity;		//ralenti l'entite constamment. Sans ça, il ne perd jamais sa velocity
		velocity.y += _gravity;
	}

	if (type == PHYSICS_TYPE_ITEM) {
		//si la limite de velociteX est depassé, on baisse la velocite a la limite
		if (velocity.x > _maxVelocityItemX || velocity.x < -_maxVelocityItemX) {
			//if moving left
			if (velocity.x < 0.f) {
				velocity.x = _maxVelocityItemX * -1.f;
			}
			//if moving right
			else if (velocity.x < 0.f){
				velocity.x = _maxVelocityItemX * 1.f;
			}
		}
		//si la limite de velociteY est depassé, on baisse la velocite a la limite
		if (velocity.y > _maxVelocityItemY || velocity.y < -_maxVelocityItemY) {
			//if moving up
			if (velocity.y < 0.f) {
				velocity.y = _maxVelocityItemY * -1.f;
			}
			//if moving down
			else if (velocity.y > 0.f){
				velocity.y = _maxVelocityItemY * 1.f;
			}
		}
		//velocity.x *= _dragItem;		//l'item ralenti quand il rebondis, j'aime mieu ça comme ça ;)
										//je la laisse au cas ou je change d'idée
		velocity.y += _gravity;
	}

	if (type == PHYSICS_TYPE_FLYING) {
		//si la limite de velociteX est depassé, on baisse la velocite a la limite
		if (velocity.x > _maxVelocityItemX || velocity.x < -_maxVelocityItemX) {
			//if moving left
			if (velocity.x < 0.f) {
				velocity.x = _maxVelocityItemX * -1.f;
			}
			//if moving right
			else if (velocity.x < 0.f) {
				velocity.x = _maxVelocityItemX * 1.f;
			}
		}
		//si la limite de velociteY est depassé, on baisse la velocite a la limite
		if (velocity.y > _maxVelocityItemY || velocity.y < -_maxVelocityItemY) {
			//if moving up
			if (velocity.y < 0.f) {
				velocity.y = _maxVelocityItemY * -1.f;
			}
			//if moving down
			else if (velocity.y > 0.f) {
				velocity.y = _maxVelocityItemY * 1.f;
			}
		}
		//velocity.x *= _dragItem;		//l'item ralenti quand il rebondis, j'aime mieu ça comme ça ;)
										//je la laisse au cas ou je change d'idée
	}

	//Limit la vitesse minimale
	if (std::abs(velocity.x) < _minVelocity)
		velocity.x = 0.f;
	
	return velocity;
}