/*====================================
Auteurs : Alexandre Maher
Nom du fichier : gamestate.h
Projet: Spelunky
Date :  Decembre 2021
But:	l'objet item est un objet enfant de entity.
		Les seules différences majeure étant qu'il peut être tenu en main par une autre entity
		et le type de physics appliqué
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

	//restart la clock de movement et envoi la direction de mouvement à handlePhysics
	void move(Vector2f direction);

	//envoi la velocity de l'item à l'objet physics qui retourne la velocity réelle
	void handlePhysics(Vector2f direction, int type);

	//annulle la velocit de l'item lors du transport
	void beingCarried();

	//flip le sprite selon 
	void flipSprite();

	//appellé lorsqu'un item est transporté. Cela est nécéssaire puisque la méthode flipSprite dépend de la velocité X de l'entity
	//Lorsqu'un item est transporté, la vélocité est à 0, puisqu'on setPosition sur le joueur à la place.
	//donc on doit manuellement set le sprite d'un coté selon la velocité du joueur
	void flipToLeft();
	void flipToRight();

	string getName();
};

