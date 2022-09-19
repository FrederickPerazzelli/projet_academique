/*------------------------------------------------------
Auteur : Frédérick Perazzelli-Delorme
Date : 2021/12/16
Programme: splashState.h
But : Splash State de notre jeu, fait apparaître notre logo avant de nous envoyer vers la prochaine state. Une image de background.
la view était pour les test, c'est difficile de faire le placement puisque j'ai un petit écran.
---------------------------------------------------*/

#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "DEFINITIONS.hpp"
#include "game.h"
#include "state.hpp"
#include "menuAnimationState.h"
using namespace sf;
using namespace std;

//chaque state représentera une vraie fenêtre et hérite de state, car on implémentera
//un init, update, draw et handleInput différent pour chaque fenêtre.
class splashState : public state {
private:
	gameDataRef _data;		//chaque state recevra le pointeur sur la gameData qui
							//donne accès au stateMachine, au RenderWindow, au
							//assertManager et au inputManager

	Clock _clock;			//1re fenêtre a besoin d’une clock car elle disparait
							//au bout de quelques secondes
	Sprite _background;
	View _viewLogo;

public:
	splashState(gameDataRef data);

	void init();
	void handleInput();
	void update(float dt);
	void draw(float dt)const;
};