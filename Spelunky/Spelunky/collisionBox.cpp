#include "collisionBox.h"

collisionBox::collisionBox(gameDataRef data, Sprite& sprite) : _data(data){
	_objectSprite = sprite;
	initBox();
}

collisionBox::~collisionBox(){
}

void collisionBox::initBox(){

	setBoundaries();
	_box.push_back(_borderTop);
	_box.push_back(_borderBottom);
	_box.push_back(_borderLeft);
	_box.push_back(_borderRight);
}

void collisionBox::setBoundaries() {
	_borderTop.setPosition(_objectSprite.getPosition());	
	_borderTop.setSize(Vector2f(_objectSprite.getGlobalBounds().width, 1));		//aussi large que l'entite, 1 de hauteur
	_borderTop.setOrigin(_objectSprite.getOrigin().x, _objectSprite.getGlobalBounds().height);
	_borderTop.setFillColor(Color(255, 0, 0));

	_borderBottom.setPosition(_objectSprite.getPosition());	
	_borderBottom.setSize(Vector2f(_objectSprite.getGlobalBounds().width, -1));	//aussi large que l'entite, 1 de hauteur
	_borderBottom.setOrigin(_objectSprite.getOrigin().x, _objectSprite.getGlobalBounds().height - _objectSprite.getGlobalBounds().height);
	_borderBottom.setFillColor(Color(255, 0, 0));

	_borderLeft.setPosition(_objectSprite.getPosition());	
	_borderLeft.setSize(Vector2f(-1, _objectSprite.getGlobalBounds().height));	//aussi grand que l'entite, 1 de largeur
	_borderLeft.setOrigin(_objectSprite.getOrigin().x, _objectSprite.getGlobalBounds().height);
	_borderLeft.setFillColor(Color(255, 0, 0));

	_borderRight.setPosition(_objectSprite.getPosition());	
	_borderRight.setSize(Vector2f(1, _objectSprite.getGlobalBounds().height));	//aussi grand que l'entite, 1 de largeur
	_borderRight.setOrigin(_objectSprite.getOrigin().x - _objectSprite.getGlobalBounds().width, _objectSprite.getGlobalBounds().height);
	_borderRight.setFillColor(Color(255, 0, 0));
}

void collisionBox::update(float dt, Sprite sprite) {		//devrait pas avoir à faire ça, mais marche pas sinon
	_objectSprite = sprite;									//ce christie de vecteur fait tout planté?????????
	//for (int i = 0; i < _box.size(); i++) {
	//	_box[i].setPosition(_objectSprite.getPosition());
	//}

	_borderTop.setPosition(_objectSprite.getPosition());
	_borderBottom.setPosition(_objectSprite.getPosition());
	_borderLeft.setPosition(_objectSprite.getPosition());
	_borderRight.setPosition(_objectSprite.getPosition());

}

RectangleShape collisionBox::getBorderBottom() {
	return _borderBottom;
}

RectangleShape collisionBox::getBorderTop() {
	return _borderTop;
}

RectangleShape collisionBox::getBorderLeft() {
	return _borderLeft;
}

RectangleShape collisionBox::getBorderRight() {
	return _borderRight;
}

void collisionBox::draw() const{
	//for (int i = 0; i < _box.size(); i++) {
	//	_data->window.draw(_box[i]);
	//}
	_data->window.draw(_borderTop);
	_data->window.draw(_borderBottom);
	_data->window.draw(_borderLeft);
	_data->window.draw(_borderRight);

}

