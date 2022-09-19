#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.hpp"
#include "game.h"
#include <iostream>
using namespace std;
using namespace sf;

class collisionBox {
private:
	gameDataRef _data;
	Sprite _objectSprite;

	vector<RectangleShape> _box;
	RectangleShape _borderTop;
	RectangleShape _borderBottom;
	RectangleShape _borderLeft;
	RectangleShape _borderRight;

public:
	collisionBox(gameDataRef data, Sprite& sprite);
	~collisionBox();

	void initBox();
	void setBoundaries();
	void update(float dt, Sprite sprite);
	RectangleShape getBorderBottom();
	RectangleShape getBorderTop();
	RectangleShape getBorderLeft();
	RectangleShape getBorderRight();

	void draw()const;
};