/*====================================
Auteurs : Alexandre Maher
Nom du fichier : player.h
Projet: Spelunky
Date :  Decembre 2021
But:	Objet enfant d'entity qui représente le joueur. Le joueur peut bouger, sauter, fouetter, transporter un item et
		lancer un item. Ses animations et mouvement sont affecté selon plusieurs critères. Malheureusement, depuis qu'on a
		ajouter la map le jour avant la remise, le mouvement ne fonctionne pas correctement. (jump infini)
====================================*/

#pragma once
#include "entity.h"
#include "item.h"
#include "scoringItem.h"
#include <SFML/Audio.hpp>

class player: public entity{
private:

	Sprite _whipSprite;

	//propriétés d'animation
	IntRect _emptyWhipFrame;
	vector<IntRect> _walkingAnimationFrames;
	vector<IntRect> _fallingAnimationFrames;
	vector<IntRect> _whippingAnimationFrames;
	vector<IntRect> _whipAnimationFrames;

	int _walkingAnimationIterator;
	int _fallingAnimationIterator;
	int _whippingAnimationIterator;
	int _whipAnimationIterator;
	Clock _animationClock;

	bool _isHoldingItem;
	bool _isWhipping;
	item* _carriedItem;
	Vector2f _throwVelocity;
	Vector2f _whipSpriteOrigin;
	float _interactCooldown;
	float _whipCooldown;
	string _selectedCharacter;
	SoundBuffer _jumpSoundBuffer;
	Sound _jumpSound;

	SoundBuffer _stepSoundBuffer;
	vector<Sound> _stepSound;

	bool _isStepSoundPlaying;

	Clock _stepTime;


public:
	player(gameDataRef data, string character);
	~player();

	void setSprite();
	void setWhipSprite();
	IntRect setIntRect(Vector2f position, int width = 128, int height = 128);

	void draw()const;

	//anime le player selon plusieurs critères tel que si il est dans les airs et sa velocity
	void animate();
	void update(float dt);

	//additionne la velocity du frame courrant à celle du frame précédent. La velocity est ensuite envoyé à l'objet physics
	//qui retourne la velocity réelle.
	//affecte aussi le state du player dépendemment de certains critères
	void move(Vector2f direction);

	//envoi la velocity de l'item à l'objet physics qui retourne la velocity réelle
	void handlePhysics(Vector2f direction, int type);

	//flip le sprite selon sa velocity X
	void flipSprite();

	//ramasser un entity item
	void pickupItem(item* item);

	//drop un entity item
	void dropItem();

	//transporter un entity item
	void carryItem();

	//garocher un entity item. La velocity du player est additionner a une throwVelocity de base et ensuite transferer à
	//à l'item. Par exemple, si le joueur saute et lance l'item, il sera lancé vers le haut.
	void throwItem();
	Vector2f calculateThrowVelocity();

	void whip();

	//pas eu le temps
	void death();

	void setStanding();
	void setOnGround();
	void setInAir();
	bool isOnGround();
	bool isStanding(Vector2f velocity);
	bool isWalking(Vector2f velocity);
	item getHeldItem();
	bool isHoldingItem();
	string getState();
	float getInteractCooldown();
	float getWhipCooldown();
	Sprite getWhipSprite();
	bool isWhipping();
};