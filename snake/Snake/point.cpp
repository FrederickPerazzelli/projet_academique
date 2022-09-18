/* directive au pré-processeur
-------------------------------*/
#include"point.h"

// Définition de la méthode du constructeur par défaut;
point::point()
{
	_x = 0;
	_y = 0;
	_color = 7;
}

//	Définition de la méthode du constructeur lorsque l'utilsateur donne des valeurs aux variables;
point::point(int x, int y, int color)
{
	_x = x;
	_y = y;
	_color = color;
}

//	Définition de la méthode du copieur
point::point(const point& p)
{
	_x = p._x;
	_y = p._y;
	_color = p._color;
}

//	Définition de la méthode du destructeur de l'objet point;
point::~point()
{
	_x = 0;
	_y = 0;
	_color = 7;
}

//	Définition de la méthode du getteur x;
int point::getX() const
{
	return _x;
}

//	Définition de la méthode du getteur y;
int point::getY() const
{
	return _y;
}

//	Définition de la méthode du getteur color;
int point::getColor() const
{
	return _color;
}

// Définition de la méthode du setteur x;
void point::setX(int x)
{
	_x = x;
}

// Définition de la méthode du setteur y;
void point::setY(int y)
{
	_y = y;
}

// Définition de la méthode du setteur color;
void point::setColor(int color)
{
	_color = color;
}

// Définition de la méthode du setteur de position;
void point::setPosition(int x, int y)
{
	setX(x);
	setY(y);
	setColor(7);
}

//	Définition de l'affecteur;
const point& point::operator=(const point& p)
{
	_x = p._x;
	_y = p._y;
	_color = p._color;
	return *this;
}

//	Définition de la méthode pour l'opérateur == ;
bool point::operator==(const point& p) const
{
	return (_x == p._x && _y == p._y);
}

//	Définition de la méthode pour l'opérateur != ;
bool point::operator!=(const point& p) const
{
	return (_x != p._x || _y != p._y);
}

//	Définition de la méthode pour l'opérateur + ;
point point::operator+(const point& p)
{
	_x = _x + p._x;
	_y = _y + p._y;
	return *this;
}

//	Définition de la méthode pour l'opérateur - ;
point point::operator-(const point& p)
{
	_x = _x - p._x;
	_y = _y - p._y;
	return *this;
}

//	Définition de la méthode pour lire, utilisant p.read();
void point::read(istream& input)
{
	char symbole;

	input >> symbole >> _x >> symbole >> _y >> symbole;
}

//	Définition de la méthode pour afficher, utilisant p.print();
void point::print(ostream& output) const
{
	output << "(" << _x << "," << _y << ")";
}

//	Opérateur qui affiche un point a la position du point;
void point::draw(ostream& output) const
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _color);
	gotoxy(_x, _y);
	cout << "\xFE";
}

void gotoxy(int x, int y)
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = x;
	scrn.Y = y;
	SetConsoleCursorPosition(hOuput, scrn);
}

//	Définition de la méthode pour calculer la distance
float distance(const point& p1, const point& p2)
{
	return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p2.getY(), 2));
}

//	Définition de la méthode pour lire, utilisant >> ;
istream& operator>>(istream& input, point& p)
{
	p.read(input);
	return input;
}

//	Définition de la méthode pour lire, utilisant << ;
ostream& operator<<(ostream& output, const point& p)
{
	p.print(output);
	return output;
}