/* En-tête de programme
 ==========================================
Programme:		point.h
Acteur:			Frédérick Perazzelli-Delorme
Date de création:	
But du programme:	Méthodes et prototypes de l'objet point
					cet objet créer un point aux coordonnées indiquées;
====================================================== */

/* directive au pré-processeur
-------------------------------*/
#pragma once

#include<clocale>
#include<conio.h>
#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<cassert>

using namespace std;

class point {

private:

	int _x;											//	Variable point axe des x;
	int _y;											//	Variable point axe des y;
	int _color;										//	Variable de la couleur de l'objet point;

public:

	// Constructeur
	point();										//	Constructeur du point par défaut;												
	point(int x, int y, int color = 7);				//	Constructeur du point lorsque l'utilisateur donne des valeurs aux variables;
	point(const point& p);							//	Copieur

	// Destructeur
	~point();										//	Destructeur de l'objet point;

	// Getteur
	int getX() const;								//	Getteur de la valeur de la variable x dans l'objet point;
	int getY() const;								//	Getteur de la valeur de la variable y dans l'objet point;
	int getColor() const;							//	Getteur de la valeur de la variable color dans l'objet point;

	//	Setteur
	void setX(int x);								//	Setteur de la valeur de la variable x dans l'objet point;
	void setY(int y);								//	Setteur de la valeur de la variable y dans l'objet point;
	void setColor(int color);						//	Setteur de la valeur de la variable color dans l'objet point;
	void setPosition(int x, int y);					//	Setteur de la position, donc valeur de la variable x et y;

	//	Affecteur												
	const point& operator=(const point& p);			//	Affecteur ou operateur = ;

	//	Opérateur
	bool operator==(const point& p)const;			//	Opérateur ==
	bool operator!=(const point& p)const;			//	Opérateur !=

	point operator+(const point& p);				//	Opérateur +
	point operator-(const point& p);				//	Opérateur -

	//	Autre méthode									
	void read(istream& input);						//	Opérateur pour lire la position utilisant p.read();
	void print(ostream& output)const;				//	Opérateur pour afficher la position utilisant p.print();
	void draw(ostream& output)const;				//	Opérateur qui affiche un point a la position du point;

	//	Méthode pour trouver la distance 
	friend float distance(const point& p1, const point& p2);	//	Calculer la distance entre deux points;
																
};

//	Opérator d'affichage et de lecture;
istream& operator>>(istream& input, point& p);			//	Opérateur pour lire la position utilisant >> ;
ostream& operator<<(ostream& output, const point& p);	//	Opérateur pour afficher la position utilisant << ;

void gotoxy(int x, int y);								//	Fonction pour placer le curseur a la position du point;
