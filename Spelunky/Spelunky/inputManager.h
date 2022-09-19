#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "DEFINITIONS.hpp"
using namespace sf;
using namespace std;

class inputManager {
private:
	bool _movementUp = false;
	bool _movementRight = false;
	bool _movementDown = false;
	bool _movementLeft = false;
	bool _jump = false;
public:
	//compare la position de la souris a la position du sprite en parametre et retourne s'ils interesecte
	bool isSpriteClicked(const Sprite& object, Mouse::Button button, RenderWindow& window);

	Vector2i getMousePosition(RenderWindow& window)const;

	bool isInteractKeyPressed();
	bool isThrowKeyPressed();
	bool isMovementKeyPressed();
	Vector2f direction(bool isOnGround)const;
};