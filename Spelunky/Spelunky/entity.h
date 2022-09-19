/*====================================
Auteurs : Alexandre Maher
Nom du fichier : gamestate.h
Projet: Spelunky
Date :  Decembre 2021
But:	Objet parent entity qui a pour but d'uniformiser les autres entity du jeu (item, player, enemies)
		Tout ce que ces objets ont en commun peut être retrouvé ici (physics, sprites, collisionBox, etc)
====================================*/

#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.hpp"
#include "game.h"
#include "physics.h"
#include <iostream>

class entity {
protected:
	gameDataRef _data;

	Texture _spriteSheet;
	Sprite _entitySprite;

	//propriétés d'animation
	IntRect _initialFrame;
	int _entityState;
	int _movingStateDirection;
	float _entitySize;

	//propriétés de mouvement
	physics* _physics;
	Clock _movementClock;
	Clock _damageClock;
	float _baseWalkingSpeed;
	Vector2f _velocity;

	//collisionBox utilisée pour la collision
	vector<RectangleShape> _collisionBox;

	bool _onGround;
	int _health;
	bool _facingDirection;
	float _damageCooldown;

	//type d'entity (player, item, enemy)
	int _entityType;

public:
	entity();
	entity(gameDataRef data);
	~entity();

	//créer un rectangle pour naviguer la spritesheet
	IntRect setIntRect(int x, int y, int width = 128, int height = 128);

	//envoi la direction et la velocity actuelle a l'objet physics,
	//et le resultat retourné est utilisé pour ensuite faire bouger l'entity.
	//selon le type d'entity, l'objet physics va agir differement.
	void handlePhysics(Vector2f direction, int type);

	void setStanding();

	//verifie si l'entity peu être endommagé
	void checkDamageCooldown(Time& time);
	//réduit _health de 1
	void takingDamage();

	//repositionne l'entity dépendemment dépendemment de ou la collision a lieu
	void collidingBottom(int type, Sprite terrain);
	void collidingTop(int type, Sprite terrain);
	void collidingLeft(int type, Sprite terrain);
	void collidingRight(int type, Sprite terrain);

	int getHealth();
	string getState();
	const Sprite& getSprite() const;
	Sprite& getSprite();
	Vector2f getVelocity();
	Vector2f getPosition()const;
	float getDamageCooldown();
	int getType();

	bool isOnGround();
	bool isStanding(Vector2f velocity);
	bool isWalking(Vector2f velocity);

	void setOnGround();
	void setInAir();

	//collision box
	//utilisé pour déterminer la collision ainsi que pour tester les positions des entity
	void initCollisionBox();
	void updateCollisionBox();
	void drawCollisionBox() const;
	vector<RectangleShape> getCollisionBox()const;
	void setPosition(Vector2f position);
};