/*------------------------------------------------------
Auteur : Fr�d�rick Perazzelli-Delorme
Date : 2021/12/16
Programme: menuAnimationState.h
But : Menu d'animation qui donne l'impression qu'on ouvre une porte et avance vers le menu. On fait cela en ajuste le scale de des sprite
ainsi quand leur donnant une legere rotation et en les poussant (setPosition) vers la droite. Ensuite on envoie vers la prochaine state, le
menu principal.
---------------------------------------------------*/
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "DEFINITIONS.hpp"
#include "game.h"
#include "state.hpp"
#include "mainMenuState.h"
using namespace sf;
using namespace std;

//chaque state repr�sentera une vraie fen�tre et h�rite de state, car on impl�mentera
//un init, update, draw et handleInput diff�rent pour chaque fen�tre.
class menuAnimationState: public state {
private:
	gameDataRef _data;		//chaque state recevra le pointeur sur la gameData qui
							//donne acc�s au stateMachine, au RenderWindow, au
							//assertManager et au inputManager

	Clock _clock;			//1re fen�tre a besoin d�une clock car elle disparait
							//au bout de quelques secondes
	Sprite _background;
	Sprite _menuDoorFrame;
	Sprite _menuDoor;
	Sprite _menuHead;

public:
	menuAnimationState(gameDataRef data);

	void init();
	void handleInput();
	void update(float dt);
	void draw(float dt)const;
};