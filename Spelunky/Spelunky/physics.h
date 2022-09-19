/*====================================
Auteurs : Alexandre Maher
Nom du fichier : physics.h
Projet: Spelunky
Date :  Decembre 2021
But:	G�re la physique des entity. Totue la logique est contenu dans la methode Displacement.
		La gravit� applique une velocity Y constante vers le bas, une entity de type normal est appliqu� une reduction de velocity X
		constante comme la gravit�. Assure qu'un entit� ne bougera jamais trop vite en appliquant une v�locit� maximale.
		Effectue le bondissement d'items lors de contact avec une surface
====================================*/

#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.hpp"
#include "game.h"
#include <cmath>

using namespace sf;

class physics {
private:
	Vector2f _velocity;

	float _maxVelocityEntityX;
	float _maxVelocityEntityY;
	float _maxVelocityItemX;
	float _maxVelocityItemY;
	float _minVelocity;

	//la resistance de l'air qui ralenti une entity
	float _dragEntity;		
	float _dragItem;

	float _gravity;
public:
	physics(gameDataRef data);
	void init();
	Vector2f displacement(Vector2f velocity, int type);	//type de physique qui doit �tre appliqu�
};