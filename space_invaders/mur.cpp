/***************************
 *  Auteur :    Nicolas Garant
 *  Fichier :   mur.cpp
 *  Date :      13/05/2021
 *  But :
 ***************************/
#include "mur.h"

mur::mur()
{
    setRectangleShape(0, 0, 0, 0);
    _nbVies = 0;
}

mur::mur(int posX, int posY, int _w, int _h, IntRect rectSprinte, int texture)
{
    setRectangleShape(posX, posY, _w, _h);
    _rectSprite = rectSprinte;
    setIntRect(rectSprinte);
    setTexture(texture);
    _nbVies = 12;
}

void mur::init(int posX, int posY, int _w, int _h, IntRect rectSprinte, int texture) {
    setRectangleShape(posX, posY, _w, _h);
    _rectSprite = rectSprinte;
    setIntRect(rectSprinte);
    setTexture(texture);
    _nbVies = 12;
}

RectangleShape mur::getRectangleShape() const {
    return _posMur;
}

Vector2f mur::getPosition() const {
    return _posMur.getPosition();
}

int mur::getX()
{
    return _posMur.getPosition().x;
}

int mur::getY()
{
    return _posMur.getPosition().y;
}

int mur::getVies()
{
    return _nbVies;
}

void mur::hit()
{
    if (_nbVies > 0) {
        _nbVies--;
        setTexture(12 - _nbVies);
    }
}

IntRect mur::getIntRect() const {
    return _rectSprite;
}

Texture mur::getTexture() const {
    return _textureMur;
}

void mur::setRectangleShape(int posX, int posY, int _w, int _h) {
    _posMur.setSize(Vector2f(_w, _h));
    _posMur.setPosition(posX, posY);
}

void mur::setPosition(int posX, int posY) {
    _posMur.setPosition(posX, posY);
}

void mur::setIntRect(IntRect intRect) {
    _posMur.setTextureRect(intRect);
}

void mur::setTexture(int texture) {
    _textureMur.loadFromFile(textMurs[texture]);
    _posMur.setTexture(&_textureMur);//Applique la texture à position
    setIntRect(_rectSprite);
}

void mur::print(RenderWindow& window) const {
    window.draw(_posMur);
}