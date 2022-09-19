/*====================================
Auteurs : Alexandre Maher, Olivier Leclerc St-Amand, Isabelle Rioux, Frédérick Perazzelli-Delorme
Nom du fichier : gamestate.h
Projet: Spelunky
Date :  Decembre 2021
But:	Gère la logique du jeu lors de l'etat principal.
====================================*/
#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include "DEFINITIONS.hpp"
#include "game.h"
#include "state.hpp"
#include "collision.h"
#include "hud.h"
#include "gameOverState.h"
#include "entity.h"
#include "camera.h"
#include "item.h"
#include "bat.h"
#include "player.h"
#include "spider.h"
#include "scoringItem.h"
#include "room.h"
#include "entitySpawner.h"
using namespace sf;
using namespace std;

//chaque state représentera une vraie fenêtre et hérite de state, car on implémentera
//un init, update, draw et handleInput différent pour chaque fenêtre.
class gameState : public state {
private:
	gameDataRef _data;		//chaque state recevra le pointeur sur la gameData qui
							//donne accès au stateMachine, au RenderWindow, au
							//assetManager et au inputManager

	int _score;

	int _gameState;

	Clock _clock;
	Clock _interactClock;
	Clock _spiderMovement;
	Time _time;
	collision _collision;
	player* _player;
	hud* _hud;
	bat* _bat;
	spider* _spider;
	camera* _camera;
	scoringItem* _scoringItem;
	room* _room;
	Music _gameMusic;
	bool _doorOpen;

	entitySpawner* _spawner;
	list<item*> _listItems;
	list<item*>::iterator _itItems;

	list<scoringItem*> _listScoringItems;
	list<scoringItem*>::iterator _itScoringItems;

	//ideallement, bat et spider aurait fait parti de la classe enemy qui serait enfant de entity
	//comme ils sont deux objects distinct, ils doivent etre mis dans deux conteneurs differents
	list<spider*> _listSpiders;
	list<spider*>::iterator _itSpiders;

	list<bat*> _listBats;
	list<bat*>::iterator _itBats;

	string _selectedCharacter;

	Music _indianaMusic;

public:
	gameState(gameDataRef data, string character);
	~gameState();

	void init();

	//Alexandre
	//gère le input saisie par le joueur
	void handleInput();

	//Alexandre
	//contient le game loop, divisé en plus petites méthodes pour lisibilité
	void update(float dt);

	//Alexandre
	//gère le update et le move de tous les entities dans le jeu
	void handleEntities(float dt);

	//Alexandre
	//draw les entities ainsi que la map
	void draw(float dt)const;

	//Alexandre
	//verifie si le joeur peut pickup un scoringItem
	void pickupScoringItem(scoringItem* scoringItem);

	//Alexandre
	//ajoute le scoringItem au score et le delete de la liste
	void addToScore();

	//Alexandre
	//verifie la collision entre l'entity donnée en parametre et la map
	void checkCollision(entity* entity);

	//Alexandre
	//verifie la collision avec le whip de tous les entities dans le jeu si le joueur est en train de whip
	void checkWhipCollision();

	//Olivier
	void checkKeyDoorCollision();

	//Alexandre
	//delete une entity
	void clearEntity(entity* entity);

	//Alexandre
	//retourne l'item le plus proche du joueur
	item* findClosestItem();
	//Alexandre
	//retourne le scoringItem le plus proche du joueur
	scoringItem* findClosestScoringItem();

	//Alexandre
	//repositionne une entity si elle tombe en bas de la map
	void outOfBounds();
};