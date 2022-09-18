/* directive au pr�-processeur
-------------------------------*/
#include"point.h"
#include"rectangle.h"

//	D�finition de la m�thode du constructeur par d�faut;
rectangle::rectangle()
{
	_hauteur = 0;
	_largeur = 0;
}
//	D�finition de la m�thode du constructeur avec deux param�tres;
rectangle::rectangle(int h, int l)
{
	_hauteur = h;
	_largeur = l;
}

//	D�finition de la m�thode du constructeur avec quatres param�tres;
rectangle::rectangle(int h, int l, int x, int y)
{
	_hauteur = h;
	_largeur = l;
	_coord.setPosition(x, y);
}

//	D�finition de la m�thode destructeur de l'objet rectangle;
rectangle::~rectangle()
{
	_hauteur = 0;
	_largeur = 0;
}

//	D�finition de la m�thode getHauteur, permet d'aller chercher l'hauteur de l'objet rectangle;
int rectangle::getHauteur() const
{
	return _hauteur;
}

//	D�finition de la m�thode getLargeur, permet d'aller chercher la largeur de l'objet rectangle;
int rectangle::getLargeur() const
{
	return _largeur;
}

//	D�finition de la m�thode getRectangle qui retourne l'objet rectangle;
rectangle rectangle::getRectangle() const
{
	return *this;
}


//	D�finition de la m�thode getPosition, permet d'aller chercher la position de l'objet point dans l'objet rectangle;
point& rectangle::getPosition()
{
	return _coord;
}

//	D�finition de la m�thode setHauteur, permet de d�finir la hauteur du rectangle;
void rectangle::setHauteur(int h)
{
	_hauteur = h;
}

//	D�finition de la m�thode setLargeur, permet de d�finir la largeur du rectangle;
void rectangle::setLargeur(int l)
{
	_largeur = l;
}


//	D�finition de la m�thode setRectangle avec deux param�tres;
void rectangle::setRectangle(int h, int l)
{
	setHauteur(h);
	setLargeur(l);
}

//	D�finition qui permet de donner une valeur a la variable x et y;
void rectangle::setCoord(int x, int y)
{
	_coord.setPosition(x, y);
}

//	D�finition qui permet de donner une valeur au rectangle et de donner des coordonn�es a l'objet coord;
void rectangle::setRectangle(int h, int l, int x, int y)
{
	setRectangle(h, l);
	_coord.setPosition(x, y);
}

//	D�finition de l'op�rateur == ;
bool rectangle::operator==(const rectangle& r) const
{
	return (_hauteur == r._hauteur && _largeur == r._largeur);
}

//	D�fintion de l'op�rateur != ;
bool rectangle::operator!=(const rectangle& r)const
{
	return (_hauteur != r._hauteur || _largeur != r._largeur);
}

//	D�finition de l'op�rateur < ;
bool rectangle::operator<(const rectangle& r) const
{
	return calculAire() < r.calculAire();
}

//	D�finition de l'op�rateur > ;
bool rectangle::operator>(const rectangle& r) const
{
	return calculAire() > r.calculAire();
}

//	D�finition de l'op�rateur <= ;
bool rectangle::operator<=(const rectangle& r) const
{
	return calculAire() <= r.calculAire();
}

//	D�finition de l'op�rateur >= ;
bool rectangle::operator>=(const rectangle& r) const
{
	return calculAire() >= r.calculAire();
}

//	Fonction qui lit l'entr�e de l'utilisateur;
void rectangle::read(istream& input)
{
	char symbole;
	_coord.read(cin);

	input >> _hauteur >> symbole >> _largeur;

}

//	Fonction qui affiche l'entr�e de l'utilisateur;
void rectangle::print(ostream& output) const
{
	output << "(" << _coord.getX() << "," << _coord.getY() << ") " << _hauteur << " * " << _largeur;
}

//	D�finition qui permet de dessiner le rectangle;
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

//	Fonction pour lire l'entr�e de l'utilisateur
istream& operator>>(istream& input, rectangle& r)
{
	r.read(input);
	return input;
}

//	Fonction pour afficher l'entr�e de l'utilsateur;
ostream& operator<<(ostream& output, const rectangle& r)
{
	r.print(output);
	return output;
}
