/*====================================
Auteurs : Alexandre Maher
Nom du fichier : entitySpawner.h
Projet: Spelunky
Date :  Decembre 2021
But:	G�re le spawning d'entity. Id�allement, cet objet aurait �t� approfondis pour pouvoir g�rer plus de param�tres.
		(Type d'item, type d'enemy, position sur la map), mais �a a du �tre fait � la derni�re minute et plusieurs features sont manquantes.
		La liste a �t� choisi au lieu des autres structures puisqu'elle permet de resize automatiquement lors de la suppression d'un element.
		Cela est utile lorsqu'un item disparait/un enemy meurt et qu'il ne doit plus �tre appell�
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

	//diff�rents type d'entity que le spawner peut faire spawn
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

	//la room que le spawner aurait besoin pour faire spawn les items � des coords pr�cise
	room* _room;

public:
	entitySpawner(gameDataRef data, room* room);
	~entitySpawner();

	//ces fonctions sont appell�es pour g�n�rer des entitys
	list<item*> generateItems(string sprite);
	list<scoringItem*> generateScoringItems(string sprite);
	list<spider*> generateSpiders(string sprite);
	list<bat*> generateBats(string sprite);
};

