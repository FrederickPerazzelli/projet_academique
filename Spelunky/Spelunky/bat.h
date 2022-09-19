/*====================================
Auteurs : Isabelle Rioux, Alexandre Maher (correction du mouvement)
Nom du fichier : bat.h
Projet: Spelunky
Date :  Decembre 2021
But:	Objet bat qui hérite de l'objet entity. Poursuit le joueur en ligne droite et n'évite pas les obstacles.
====================================*/

#pragma once
#include "entity.h"

class bat: public entity {
private:

	bool _isAngry;

	//propriétés d'animation
	//vector<IntRect> _walkingAnimationFrames;
	vector<IntRect> _fallingAnimationFrames;
	//int _walkingAnimationIterator;
	int _fallingAnimationIterator;
	Clock _animationClock;
	int _entityState;

	int _enemyType;

public:
	bat(gameDataRef);
	~bat();

	void setSprite();
	IntRect setIntRect(int x, int y, int width = 128, int height = 128);

	void setEnemySprite();

	void draw()const;
	void animate(float dt);

	void update(float dt);

	void move(Vector2f direction);
	void handlePhysics(Vector2f direction, int type);
	void setStanding();
	void setFlying();

	bool isStanding();
	bool isMoving();

	Vector2f pathfindStraightLine(Vector2f destination);
	int getEnemyType();
	Vector2f getPosition()const;

	bool getIsAngry();
	void detection(Vector2f entityPosition);
};

