/* En-tête de programme
 ==========================================
Programme:		rectangle.h
Acteur:			Frédérick Perazzelli-Delorme
Date de création:	
But du programme:	Définition des méthodes et prototypes de l'objet rectangle
					cet objet crée un rectangle a l'écran qui servira de plateau de jeu;
====================================================== */

/* directive au pré-processeur
-------------------------------*/
#pragma once
#include"point.h"
#include<iostream>


using namespace std;

class rectangle {

private:

	point _coord;										//	Variable point qui donne acces a l'objet point et aux coordonée
	
	int _hauteur;										//	Variable qui donne la hauteur du rectangle;
	int _largeur;										//	Variable qui donne la largeur du rectangle;

public:

	//	Constructeur
	rectangle();										//	Constructeur de l'objet rectangle par défaut;
	rectangle(int h, int l);							//	Constructeur de l'objet rectangle avec deux paramètres;
	rectangle(int h, int l, int x, int y);				//	Constructeur de l'objet rectangle avec quatres paramèretres;

	//	Destructeur
	~rectangle();										//	Destructeur de l'objet rectangle;

	//	Getteur
	int getHauteur() const;								//Getteur pour aller chercher la hauteur du rectangle;
	int getLargeur() const;								//Getteur pour aller chercher la largeur du rectangle;	
	rectangle getRectangle() const;						//Getteur qui retourne l'objet rectangle;
	point& getPosition();								//Getteur pour aller chercher la position de l'objet point;

	//	Setteur
	void setHauteur(int h);								//Permet de donner une valeur a la variable hauteur;
	void setLargeur(int l);								//Permet de donner une valeur a la variable largeur;
	void setRectangle(int h, int l);					//Permet de donner une valeur au rectangle;
	void setCoord(int x, int y);						//Permet de donner une valeur a la variable x et y de l'objet coordonnées;
	void setRectangle(int h, int l, int x, int y);		//Permet de donner une valeur au rectangle ainsi qu'aux coordonée;

	//	Opérateur
	bool operator==(const rectangle& r) const;			//	Opérateur ==
	bool operator!=(const rectangle& r) const;			//	Opérateur !=
	bool operator<(const rectangle& r) const;			//	Opérateur <
	bool operator>(const rectangle& r) const;			//	Opérateur >
	bool operator<=(const rectangle& r) const;			//	Opérateur <=
	bool operator>=(const rectangle& r) const;			//	Opérateur >=

	//	Autre méthode
	void read(istream& input);							//Opérateur pour lire l'entrée  de l'utilisateur
	void print(ostream& output) const;					//Opérateur pour afficher la position utilisant p.print
	void draw(ostream& output);							//Opérateur qui permet de dessiner le rectangle;

	int calculAire() const;								//	Fonction permetant de calculer l'aire;
	int calculPerimetre() const;						//	Fonction qui calcul le perimetre;
};

istream& operator>>(istream& input, rectangle& r);			//Fonction pour lire l'input de l'utilisateur;
ostream& operator<<(ostream& output, const rectangle& r);	//	Fonction pour afficher.
