/*====================================
Auteurs : Alexandre Maher
Nom du fichier : gamestate.h
Projet: Spelunky
Date :  Decembre 2021
But:	l'objet item est un objet enfant de entity.
		Les seules diff�rences majeure �tant qu'il peut �tre tenu en main par une autre entity
		et le type de physics appliqu�
====================================*/

#pragma once
#include "entity.h"

class item: public entity {
private:

	int _itemState;

	string _name = "test";

public:
	item(gameDataRef data);
	~item();

	IntRect setIntRect(int x, int y, int width = 128, int height = 128);
	void setSprite();

	void draw()const;
	void update(float dt);

	//restart la clock de movement et envoi la direction de mouvement � handlePhysics
	void move(Vector2f direction);

	//envoi la velocity de l'item � l'objet physics qui retourne la velocity r�elle
	void handlePhysics(Vector2f direction, int type);

	//annulle la velocit de l'item lors du transport
	void beingCarried();

	//flip le sprite selon 
	void flipSprite();

	//appell� lorsqu'un item est transport�. Cela est n�c�ssaire puisque la m�thode flipSprite d�pend de la velocit� X de l'entity
	//Lorsqu'un item est transport�, la v�locit� est � 0, puisqu'on setPosition sur le joueur � la place.
	//donc on doit manuellement set le sprite d'un cot� selon la velocit� du joueur
	void flipToLeft();
	void flipToRight();

	string getName();
};

