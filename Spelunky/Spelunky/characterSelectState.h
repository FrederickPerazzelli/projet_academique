/*------------------------------------------------------
Auteur : Frédérick Perazzelli-Delorme
Date : 2021/12/18
Programme: characterSelectState.h
But : Menu de selection du personnage. Un vecteur de Sprite contient tout les personnages et un vecteur de string, de la meme grosseur, contient
tout les noms des personnages. Un iterator est initialiser qui permet de se promener dans les deux vecteurs. Ceci permet d'envoyer le bon personnage,
lors de l'envoie dans le prochain state du stack.
---------------------------------------------------*/
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "DEFINITIONS.hpp"
#include "game.h"
#include "state.hpp"
#include "gameState.h"
using namespace sf;
using namespace std;

//chaque state représentera une vraie fenêtre et hérite de state, car on implémentera
//un init, update, draw et handleInput différent pour chaque fenêtre.
class characterSelectState : public state {
private:
	gameDataRef _data;		//chaque state recevra le pointeur sur la gameData qui
							//donne accès au stateMachine, au RenderWindow, au
							//assertManager et au inputManager
	
	View _viewChar;
	Clock _clock;
	Time _time;

	IntRect _block;

	Sprite _background;
	Sprite _switchButtonRight;
	Sprite _switchButtonLeft;
	Sprite _pole;
	Sprite _controlKey;
	Sprite _controlMouse;
	Sprite _playButton;


	vector<string> _charString;
	vector<Sprite> _character;
	Text _charName;

	int _iterator;


public:
	characterSelectState(gameDataRef data);

	void init();
	void handleInput();
	void update(float dt);
	void draw(float dt)const;
	IntRect setRect(float x, float y, int width, int height);
};