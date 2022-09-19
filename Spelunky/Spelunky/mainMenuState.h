/*------------------------------------------------------
Auteur : Frédérick Perazzelli-Delorme
Date : 2021/12/17
Programme: mainMenuState.h
But : Le menu principal de notre jeu, contient un sprite de background avec notre titre et deux boutons. Un nous envoie vers le selection du
personnage et l'autre vers la sortie.
---------------------------------------------------*/
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "DEFINITIONS.hpp"
#include "game.h"
#include "state.hpp"
#include "characterSelectState.h"
using namespace sf;
using namespace std;

//chaque state représentera une vraie fenêtre et hérite de state, car on implémentera
//un init, update, draw et handleInput différent pour chaque fenêtre.
class mainMenuState : public state {
private:
	gameDataRef _data;		//chaque state recevra le pointeur sur la gameData qui
							//donne accès au stateMachine, au RenderWindow, au
							//assertManager et au inputManager

	Sprite _background;		

	IntRect _block;

	Sprite _title;			
	Sprite _playButton;		
	Sprite _exitButton;
	Text _play;
	Text _exit;


public:
	mainMenuState(gameDataRef data);

	void init();
	void handleInput();
	void update(float dt);
	void draw(float dt)const;
	IntRect setRect(float x, float y, int width, int height);
};