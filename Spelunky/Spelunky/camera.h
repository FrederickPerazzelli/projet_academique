/*====================================
Auteurs : Alexandre Maher
Nom du fichier : camera.h
Projet: Spelunky
Date :  Decembre 2021
But:	Caméra centré sur une position donnée en paramètre. Est utilisé dans le projet courrant pour centrer la camera
		sur le personnage à chaque frame
====================================*/

#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.hpp"
#include "game.h"
#include <iostream>

using namespace sf;
using namespace std;

class camera {
private:
	gameDataRef _data;
	View _view;
public:
	camera(gameDataRef data);

	//initialisation de la camera
	void setCamera();
	//place la camera sur la position donnée en parametre.
	void updateCamera(Vector2f position);

};