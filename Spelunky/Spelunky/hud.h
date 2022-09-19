/* ------------------------------------------------------
Auteur : Frédérick Perazzelli - Delorme
Date : 2021 / 12 / 18
Programme : hud.h
But : Le hud, ou heads - up display, consiste en 1 sprite de symbole d'argent $ avec un texte qui update les points lorsque le joueur rentre
en contact avec un scoring item, de plus il y a un vecteur de coeur(j'aurait p-e du utiliser une deque) qui represente la vie du joueur.
Lorsque le joeur rentre en contact avec un ennemie un coeur est pop.back et enlever du vecteur.
-------------------------------------------------- - */
#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.hpp"
#include "game.h"
using namespace sf;

class hud
{
private:
	gameDataRef _data;

	Clock _clock;
	IntRect _block;

	vector<Sprite> _heart;
	Sprite _dollarSign;
	Text _scoreText;

public:
	hud(gameDataRef data);
	void updateHud(Vector2f position);
	void updateLife();
	void updateScore(int score);
	void draw()const;
	int getNumberOfHeart(vector<Sprite> heart)const;
	IntRect setRect(float x, float y, int width, int height);
};

