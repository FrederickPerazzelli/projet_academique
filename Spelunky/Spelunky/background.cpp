#include "background.h"

background::background(gameDataRef data, float posX, float posY) : _data(data)
{

	_positionX = posX;
	_positionY = posY;


	_block = setIntRect(0, 0);
	_background.setTexture(_data->assets.getTexture("background"));
	_background.setTextureRect(_block);
	_background.setPosition(_positionX * 128, _positionY * 128);
}

void background::draw() const
{
	_data->window.draw(_background);
}

const Sprite& background::getSpriteBackground() const
{
	return _background;
}

float background::getPositionX() const
{
	return _positionX;
}

float background::getPositionY() const
{
	return _positionY;
}

IntRect background::setIntRect(float x, float y, int width, int height)
{
	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}

