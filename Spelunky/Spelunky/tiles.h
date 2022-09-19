/*------------------------------------------------------
Auteur : Olivier Leclerc St-Amand
Date : 2021/12/18
Programme: tiles.h
But : Matrice de tuiles. qui stocke les informations de chaque tuiles. si il y a collision, ca position et son sprite. 
---------------------------------------------------*/
#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.hpp"
#include "game.h"
#include <iostream>
using namespace sf;
using namespace std;

class tiles {
	private:
		gameDataRef _data;
	
		//position
		float _positionX;
		float _positionY;
		bool _valid;	// si les collisions s'applique sur la tuile

		IntRect _block;
		Sprite _tiles;	//sprite de la tuile
			
	public:

		tiles(gameDataRef data, float dimensionX, float dimensionY, float posX, float posY, char type, bool valid);
		void draw()const;
		const Sprite& getSpriteTiles() const;
		Vector2f getPosition() const;
		bool isValid() const;
		IntRect setIntRect(float x, float y, int width = 128, int height = 128);
};