/*====================================
Auteurs : Alexandre Maher, Olivier Leclerc St-Amand,
Nom du fichier : collision.h
Projet: Spelunky
Date :  Decembre 2021
But:	Vérifie les différents types de collisions qui peuvent se produire.
		Ce qui se produit lors d'une collision est gêrer ailleur.
====================================*/

#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.hpp"
#include "game.h"
#include <iostream>
#include "room.h"
#include "entity.h"


class collision {
public:
	bool checkTopCollision(RectangleShape collisionBoxPart, Sprite terrain)const;
	bool checkBottomCollision(RectangleShape collisionBoxPart, Sprite terrain)const;
	bool checkLeftCollision(RectangleShape collisionBoxPart, Sprite terrain)const;
	bool checkRightCollision(RectangleShape collisionBoxPart, Sprite terrain)const;

	void checkCollision(entity* entity, room* room)const;

	bool checkWhipCollision(Sprite whip, Sprite entity);
	bool checkScoringItemCollision(Sprite item, Sprite entity);

	bool checkSpriteCollision(Sprite sprite1, float scale1, Sprite sprite2, float scale2)const;
};