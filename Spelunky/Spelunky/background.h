/*------------------------------------------------------
Auteur : Olivier Leclerc St-Amand
Date : 2021/12/16
Programme: BackGround.h
But : Permet de gerer et stocker le background de la room.
---------------------------------------------------*/

#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.hpp"
#include "game.h"
#include <iostream>
using namespace sf;
using namespace std;

class background {
	private:
		gameDataRef _data;
	

		float _positionX;
		float _positionY;

		IntRect _block;
		Sprite _background;
			
	public:

		background(gameDataRef data, float posX, float posY);
		void draw()const;
		const Sprite& getSpriteBackground() const;
		float getPositionX() const;
		float getPositionY() const;
		IntRect setIntRect(float x, float y, int width = 512, int height = 512);
};