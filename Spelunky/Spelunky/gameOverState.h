/*------------------------------------------------------
Auteur : Fr�d�rick Perazzelli-Delorme
Date : 2021/12/19
Programme: gameOverState.h
But : Dernier state du jeu qui affiche le r�sultat de la partie, Ils contients plusieurs sprite et du texte. Deux boutons, un qui permet
de rejouer et un qui permet de quitter le jeu. Si le joueur gagne il est �crit f�licitations, son score, un image de son personnage avec 
le personnage qu'il a utiliser. Si le joueur a perdu, il est �crit game over, avec sont score et une image de sont personnage a terre (mort).
Le bouton retry stack une nouvelle fois le characterSelection qui permet de cr�er une nouvelle partie. Le bouton exit ferme la fenetre.
---------------------------------------------------*/
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "DEFINITIONS.hpp"
#include "game.h"
#include "state.hpp"
#include "gameState.h"
#include "characterSelectState.h"
#include <fstream>
using namespace sf;
using namespace std;

//chaque state repr�sentera une vraie fen�tre et h�rite de state, car on impl�mentera
//un init, update, draw et handleInput diff�rent pour chaque fen�tre.
class gameOverState : public state {
private:
	gameDataRef _data;		//chaque state recevra le pointeur sur la gameData qui
							//donne acc�s au stateMachine, au RenderWindow, au
							//assertManager et au inputManager
	View _viewLogo;
	IntRect _block;

	Sprite _background;		// liste des sprites
	Sprite _bookStats;
	Sprite _player;
	Sprite _exitButton;
	Sprite _retryButton;
	Sprite _dollardSign;

	Text _characterName;	// liste des texte
	Text _scoreFinal;
	Text _textResult;
	Text _retry;
	Text _exit;

	bool _result;			//	recu par valeur dans le constructeur pour envoyer les donn�es au bon endroits
	string _characterSelected;
	string _score;

public:
	gameOverState(gameDataRef data, string character, bool result, int score);

	void init();
	void handleInput();
	void update(float dt);
	void draw(float dt)const;
	IntRect setRect(float x, float y, int width, int height);
};