/*====================================
Auteurs : Isabelle Rioux
Nom du fichier : gamestate.h
Projet: Spelunky
Date :  Decembre 2021
But:	Objet spider qui hérite de l'objet entity. Poursuit le joueur en sautant et n'évite pas les obstacles.
====================================*/

#pragma once
#include "entity.h"
#include <SFML/Audio.hpp>

using namespace sf;
using namespace std;

class spider :public entity {
private:
	gameDataRef _data;

	bool _isAngry;

	//propriétés d'animation
	vector<IntRect> _walkingAnimationFrames;
	vector<IntRect> _fallingAnimationFrames;
	vector<IntRect> _standingAnimationFrames;
	int _walkingAnimationIterator;
	int _fallingAnimationIterator;
	int _standingAnimationIterator;
	Clock _animationClock;
	int _movingStateDirection;

	int _spiderPhase;
	int _enemyType;
	SoundBuffer _spiderSoundBuffer;
	vector<Sound> _spiderSound;

public:
	spider(gameDataRef);
	~spider();

	void setSprite();
	IntRect setIntRect(int x, int y, int width = 128, int height = 128);

	void draw()const;
	void animate(float dt);

	void update(float dt);

	void death();

	void move(Vector2f direction);
	void handlePhysics(Vector2f direction, int type);
	void setStanding();
	void setFalling();
	void detection(Vector2f entityPosition);
	Vector2f pathfind(Vector2f destination);

	bool getIsAngry();
	bool isStanding();
	bool isWalking();
	bool isMoving();
	bool isFalling();

	Vector2f getVelocity();
	const Sprite& getSprite() const;
	Vector2f getPosition()const;

	void wait();
	void attacking(Vector2f playerPosition, Clock& spiderClock);
	int& getSpiderPhase();
	int getEnemyType();

};

