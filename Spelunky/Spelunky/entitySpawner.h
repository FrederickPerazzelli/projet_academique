/*====================================
Auteurs : Alexandre Maher
Nom du fichier : entitySpawner.h
Projet: Spelunky
Date :  Decembre 2021
But:	Gère le spawning d'entity. Idéallement, cet objet aurait été approfondis pour pouvoir gêrer plus de paramètres.
		(Type d'item, type d'enemy, position sur la map), mais ça a du être fait à la dernière minute et plusieurs features sont manquantes.
		La liste a été choisi au lieu des autres structures puisqu'elle permet de resize automatiquement lors de la suppression d'un element.
		Cela est utile lorsqu'un item disparait/un enemy meurt et qu'il ne doit plus être appellé
====================================*/

#pragma once
#include "item.h"
#include "scoringItem.h"
#include "bat.h"
#include "spider.h"
#include "room.h"
#include "DEFINITIONS.hpp"
#include "list"
#include <stdlib.h>
#include <time.h>

class entitySpawner {
private:
	gameDataRef _data;

	//différents type d'entity que le spawner peut faire spawn
	item* _item;
	scoringItem* _scoringItem;
	spider* _spider;
	bat* _bat;

	list<item*> _items;
	list<item*>::iterator _itItems;

	list<scoringItem*> _scoringItems;
	list<scoringItem*>::iterator _itScoringItems;

	list<spider*> _spiders;
	list<spider*>::iterator _itSpiders;

	list<bat*> _bats;
	list<bat*>::iterator _itBats;

	//la room que le spawner aurait besoin pour faire spawn les items à des coords précise
	room* _room;

public:
	entitySpawner(gameDataRef data, room* room);
	~entitySpawner();

	//ces fonctions sont appellées pour générer des entitys
	list<item*> generateItems(string sprite);
	list<scoringItem*> generateScoringItems(string sprite);
	list<spider*> generateSpiders(string sprite);
	list<bat*> generateBats(string sprite);
};

