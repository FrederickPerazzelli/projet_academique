#include "tiles.h"

tiles::tiles(gameDataRef data, float dimensionX, float dimensionY, float posY, float posX, char type, bool valid) : _data(data)
{

	_positionX = posX;
	_positionY = posY;
	_valid = valid;

	//fait les porte et les echelle de la map
	if (type == 'A') {
		_block = setIntRect(dimensionX * 128, dimensionY * 128);
		_tiles.setTexture(_data->assets.getTexture("floor tile"));
		_tiles.setTextureRect(_block);
		_tiles.setPosition(_positionX * 128, _positionY * 128);
	}

	//fait les tuiles de la map
	else if (type == 'B') {
		_block = setIntRect(dimensionX * 128, dimensionY * 128);
		_tiles.setTexture(_data->assets.getTexture("block tile"));
		_tiles.setTextureRect(_block);
		_tiles.setPosition(_positionX * 128, _positionY * 128);
	}
}

void tiles::draw() const
{
	_data->window.draw(_tiles);
}

const Sprite& tiles::getSpriteTiles() const
{
	return _tiles;
}

Vector2f tiles::getPosition() const
{
	return Vector2f(_positionX * 128, _positionY * 128);
}

bool tiles::isValid() const
{
	return _valid;
}

IntRect tiles::setIntRect(float x, float y, int width, int height)
{
	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}

