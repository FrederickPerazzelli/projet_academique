/*====================================
Auteurs : Alexandre Maher
Nom du fichier : gamestate.h
Projet: Spelunky
Date :  Decembre 2021
But:	Objet enfant de entity qui represente les items qui donne du score lorsque ramasser par le joueur
		très similaire à l'objet item, sauf qu'il ne peut pas être transporter. Contient aussi une propriété qui determine combien
		cet item vaut pour le score
====================================*/

#pragma once
#include "entity.h"

class scoringItem : public entity {
private:

	int _itemState;

	string _name = "test scoring item";
	int _worth;

public:
	scoringItem(gameDataRef data);
	~scoringItem();

	IntRect setIntRect(int x, int y, int width = 128, int height = 128);
	void setSprite();

	void draw()const;
	void update(float dt);

	//restart la clock de movement et envoi la direction de mouvement à handlePhysics
	void move(Vector2f direction);

	//envoi la velocity de l'item à l'objet physics qui retourne la velocity réelle
	void handlePhysics(Vector2f direction, int type);

	string getName();
	int getWorth();
};

