/* directive au pr�-processeur
-------------------------------*/
#include "snake.h"


//	Constructeur du serpent par d�faut
snake::snake()
{
    _taille = 6;
}

// constructeur du serpent en recevant;
snake::snake(int x, int y) {
    _taille = 6;
}

//	Destructeur du snake
snake::~snake() {
    _taille = 0;
}

//	Initialise le serpent
void snake::initialize(int x, int y) {
    assert(x >= 0 && y >= 0);
    _taille = 6;
    for (int i = 0; i < _taille; i++) {
        _snake[i].setPosition(x + i, y);
        _snake[i].setColor(14);
    }
}

// Renvoie la t�te du serpent
const point& snake::getHeadPosition() const {
    return _snake[0];
}

// renvoie la position du serpent
const point& snake::getPosition(int ind) const {

    return _snake[ind];
}

// operator pour aller chercher la position du serpent
const point& snake::operator[](int ind) const {
    return getPosition(ind);
}

//	Renvoie la taille du serpent
int snake::getTaille() const {
    return _taille;
}

//	Donne la nouvelle position de la t�te du serpent;
point snake::nouvellePosition(int dir) const{
    point newHead = _snake[0];

    switch (dir) {
    case 1:
        newHead.setX(newHead.getX() - 1);
        break;
    case 2:
        newHead.setX(newHead.getX() + 1);
        break;
    case 3:
        newHead.setY(newHead.getY() - 1);
        break;
    case 4:
        newHead.setY(newHead.getY() + 1);
        break;
    }
    return newHead;
}

//	M�thode collision du serpent;
bool snake::ifCollision(const point& pos) const {
    
    for (int i = 0; i < _taille; i++) {

        if (pos == _snake[i]) {
            return true;
        }
    }

    return false;
}

//	Fait bouger le serpent;
void snake::move(int dir) {

    point newHead = nouvellePosition(dir);

    for (int i = _taille - 1; i >= 0; --i) {
        _snake[i].setColor(6);
        _snake[i + 1] = _snake[i];
    }
    _snake[0] = newHead;
    _snake[_taille].setColor(0);
}

// Si le serpent mange la pomme
void snake::eat(int dir) {

    move(dir);
    _taille++;
}

//	Operator draw;
void snake::draw(ostream& output)const {
    
    for (int i = 0; i < _taille; i++) {

        _snake[i].draw(cout);

        if (_snake[_taille].getX() != 0) {

            _snake[_taille].setColor(0);
            _snake[_taille].draw(cout);
        }
    }
  
}

//	Operator cout;
ostream& operator<<(ostream& output, const snake& s) {
    s.draw(output);
    return output;
}