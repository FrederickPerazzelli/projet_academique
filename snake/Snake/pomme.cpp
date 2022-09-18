/* En-t�te de programme
 ==========================================
Programme:		point.h
Acteur:			Frederick Perazzelli-Delorme et Nicolas Garant
Date de cr�ation:	30 mars 2021
But du programme:	M�thodes et prototypes de l'objet pomme;
====================================================== */

/* directive au pr�-processeur
-------------------------------*/
#include"pomme.h"

//	Construteur pomme par d�faut;
pomme::pomme()
{
	_pomme.setPosition(0, 0);
	_pomme.setColor(4);
}

//	Constructeur pomme avec variable;
pomme::pomme(int x, int y)
{
	_pomme.setPosition(x, y);
	_pomme.setColor(4);
}

//	Getteur de pomme;
const point& pomme::getPosition() const
{
	return _pomme;
}

//	Setteur de pomme;
void pomme::setPosition(int x, int y)
{
	_pomme.setPosition(x, y);
	_pomme.setColor(4);
}

//	Dessine la pomme;
void pomme::draw(ostream& output) const
{
	_pomme.draw(output);
}

// Operator cout
ostream& operator<<(ostream& output, const pomme& p)
{
	p.draw(output);
	return output;
}
