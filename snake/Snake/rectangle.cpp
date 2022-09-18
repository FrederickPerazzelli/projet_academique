/* directive au pré-processeur
-------------------------------*/
#include"point.h"
#include"rectangle.h"

//	Définition de la méthode du constructeur par défaut;
rectangle::rectangle()
{
	_hauteur = 0;
	_largeur = 0;
}
//	Définition de la méthode du constructeur avec deux paramètres;
rectangle::rectangle(int h, int l)
{
	_hauteur = h;
	_largeur = l;
}

//	Définition de la méthode du constructeur avec quatres paramètres;
rectangle::rectangle(int h, int l, int x, int y)
{
	_hauteur = h;
	_largeur = l;
	_coord.setPosition(x, y);
}

//	Définition de la méthode destructeur de l'objet rectangle;
rectangle::~rectangle()
{
	_hauteur = 0;
	_largeur = 0;
}

//	Définition de la méthode getHauteur, permet d'aller chercher l'hauteur de l'objet rectangle;
int rectangle::getHauteur() const
{
	return _hauteur;
}

//	Définition de la méthode getLargeur, permet d'aller chercher la largeur de l'objet rectangle;
int rectangle::getLargeur() const
{
	return _largeur;
}

//	Définition de la méthode getRectangle qui retourne l'objet rectangle;
rectangle rectangle::getRectangle() const
{
	return *this;
}


//	Définition de la méthode getPosition, permet d'aller chercher la position de l'objet point dans l'objet rectangle;
point& rectangle::getPosition()
{
	return _coord;
}

//	Définition de la méthode setHauteur, permet de définir la hauteur du rectangle;
void rectangle::setHauteur(int h)
{
	_hauteur = h;
}

//	Définition de la méthode setLargeur, permet de définir la largeur du rectangle;
void rectangle::setLargeur(int l)
{
	_largeur = l;
}


//	Définition de la méthode setRectangle avec deux paramètres;
void rectangle::setRectangle(int h, int l)
{
	setHauteur(h);
	setLargeur(l);
}

//	Définition qui permet de donner une valeur a la variable x et y;
void rectangle::setCoord(int x, int y)
{
	_coord.setPosition(x, y);
}

//	Définition qui permet de donner une valeur au rectangle et de donner des coordonnées a l'objet coord;
void rectangle::setRectangle(int h, int l, int x, int y)
{
	setRectangle(h, l);
	_coord.setPosition(x, y);
}

//	Définition de l'opérateur == ;
bool rectangle::operator==(const rectangle& r) const
{
	return (_hauteur == r._hauteur && _largeur == r._largeur);
}

//	Défintion de l'opérateur != ;
bool rectangle::operator!=(const rectangle& r)const
{
	return (_hauteur != r._hauteur || _largeur != r._largeur);
}

//	Définition de l'opérateur < ;
bool rectangle::operator<(const rectangle& r) const
{
	return calculAire() < r.calculAire();
}

//	Définition de l'opérateur > ;
bool rectangle::operator>(const rectangle& r) const
{
	return calculAire() > r.calculAire();
}

//	Définition de l'opérateur <= ;
bool rectangle::operator<=(const rectangle& r) const
{
	return calculAire() <= r.calculAire();
}

//	Définition de l'opérateur >= ;
bool rectangle::operator>=(const rectangle& r) const
{
	return calculAire() >= r.calculAire();
}

//	Fonction qui lit l'entrée de l'utilisateur;
void rectangle::read(istream& input)
{
	char symbole;
	_coord.read(cin);

	input >> _hauteur >> symbole >> _largeur;

}

//	Fonction qui affiche l'entrée de l'utilisateur;
void rectangle::print(ostream& output) const
{
	output << "(" << _coord.getX() << "," << _coord.getY() << ") " << _hauteur << " * " << _largeur;
}

//	Définition qui permet de dessiner le rectangle;
void rectangle::draw(ostream& output)
{
	gotoxy(_coord.getX(), _coord.getY());
	for (int i = 0; i < _largeur; i++) {
		output << "*";
	}
	for (int i = 0; i < _hauteur - 2; i++) {
		gotoxy(_coord.getX(), _coord.getY() + i + 1);
		output << "*";
		for (int j = 0; j < _largeur - 2; j++) {
			output << " ";
		}
		output << "*";
	}
	gotoxy(_coord.getX(), _coord.getY() + _hauteur - 1);
	for (int i = 0; i < _largeur; i++) {
		output << "*";
	}
}

//	Fonction qui permet de calculer l'aire du rectangle;
int rectangle::calculAire() const
{
	int aire;
	aire = _hauteur * _largeur;
	return aire;
}

//	Fonction qui calcul le perimetre;
int rectangle::calculPerimetre() const
{
	int perimetre;
	perimetre = (_hauteur * 2) + (_largeur * 2);
	return perimetre;
}

//	Fonction pour lire l'entrée de l'utilisateur
istream& operator>>(istream& input, rectangle& r)
{
	r.read(input);
	return input;
}

//	Fonction pour afficher l'entrée de l'utilsateur;
ostream& operator<<(ostream& output, const rectangle& r)
{
	r.print(output);
	return output;
}
