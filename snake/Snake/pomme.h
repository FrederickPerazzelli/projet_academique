/* En-t�te de programme
 ==========================================
Programme:		point.h
Acteur:			Nicolas Garant et Fr�d�rick Perazzelli-Delorme
Date de cr�ation:	30 mars 2021
But du programme:	M�thodes et prototypes de l'objet pomme
					cet objet fait appara�tre une pomme rouge 
					a l'�cran (un point);
====================================================== */

/* directive au pr�-processeur
-------------------------------*/
#pragma once
#include"point.h"
#include<iostream>


class pomme {

private:

	point _pomme;								//	Objet pomme;

public:

	//	Constructeur;
	pomme();									//	Constructeur par d�faut;
	pomme(int x, int y);						//	Constructeur avec variable;

	//	Getteur;
	const point& getPosition()const;					//	Getteur de la position de 
												//pomme;

	//	Setteur;	
	void setPosition(int x, int y);				//	Setteur de la position de la 
												//pomme;

	//	Autre M�thode;
	void draw(ostream& output) const;			//	Dessine la pomme;
};

//	Operator;
ostream& operator<<(ostream& output, const pomme& p);	//	Operatour cout
