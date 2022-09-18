/* En-tête de programme
 ==========================================
Programme:		point.h
Acteur:			Nicolas Garant et Frédérick Perazzelli-Delorme
Date de création:	30 mars 2021
But du programme:	Méthodes et prototypes de l'objet pomme
					cet objet fait apparaître une pomme rouge 
					a l'écran (un point);
====================================================== */

/* directive au pré-processeur
-------------------------------*/
#pragma once
#include"point.h"
#include<iostream>


class pomme {

private:

	point _pomme;								//	Objet pomme;

public:

	//	Constructeur;
	pomme();									//	Constructeur par défaut;
	pomme(int x, int y);						//	Constructeur avec variable;

	//	Getteur;
	const point& getPosition()const;					//	Getteur de la position de 
												//pomme;

	//	Setteur;	
	void setPosition(int x, int y);				//	Setteur de la position de la 
												//pomme;

	//	Autre Méthode;
	void draw(ostream& output) const;			//	Dessine la pomme;
};

//	Operator;
ostream& operator<<(ostream& output, const pomme& p);	//	Operatour cout
