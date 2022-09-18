/* En-t�te de programme
 ==========================================
Programme:		rectangle.h
Acteur:			Fr�d�rick Perazzelli-Delorme
Date de cr�ation:	
But du programme:	D�finition des m�thodes et prototypes de l'objet rectangle
					cet objet cr�e un rectangle a l'�cran qui servira de plateau de jeu;
====================================================== */

/* directive au pr�-processeur
-------------------------------*/
#pragma once
#include"point.h"
#include<iostream>


using namespace std;

class rectangle {

private:

	point _coord;										//	Variable point qui donne acces a l'objet point et aux coordon�e
	
	int _hauteur;										//	Variable qui donne la hauteur du rectangle;
	int _largeur;										//	Variable qui donne la largeur du rectangle;

public:

	//	Constructeur
	rectangle();										//	Constructeur de l'objet rectangle par d�faut;
	rectangle(int h, int l);							//	Constructeur de l'objet rectangle avec deux param�tres;
	rectangle(int h, int l, int x, int y);				//	Constructeur de l'objet rectangle avec quatres param�retres;

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
	void setCoord(int x, int y);						//Permet de donner une valeur a la variable x et y de l'objet coordonn�es;
	void setRectangle(int h, int l, int x, int y);		//Permet de donner une valeur au rectangle ainsi qu'aux coordon�e;

	//	Op�rateur
	bool operator==(const rectangle& r) const;			//	Op�rateur ==
	bool operator!=(const rectangle& r) const;			//	Op�rateur !=
	bool operator<(const rectangle& r) const;			//	Op�rateur <
	bool operator>(const rectangle& r) const;			//	Op�rateur >
	bool operator<=(const rectangle& r) const;			//	Op�rateur <=
	bool operator>=(const rectangle& r) const;			//	Op�rateur >=

	//	Autre m�thode
	void read(istream& input);							//Op�rateur pour lire l'entr�e  de l'utilisateur
	void print(ostream& output) const;					//Op�rateur pour afficher la position utilisant p.print
	void draw(ostream& output);							//Op�rateur qui permet de dessiner le rectangle;

	int calculAire() const;								//	Fonction permetant de calculer l'aire;
	int calculPerimetre() const;						//	Fonction qui calcul le perimetre;
};

istream& operator>>(istream& input, rectangle& r);			//Fonction pour lire l'input de l'utilisateur;
ostream& operator<<(ostream& output, const rectangle& r);	//	Fonction pour afficher.
