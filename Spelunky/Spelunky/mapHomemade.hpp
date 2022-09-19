/*------------------------------------------------------
Auteur : Frédérick Perazzelli-Delorme
Date : 2021/09/16
Programme: map.hpp
But : L'objet map est un template qui represente une matrice. Elle contient un nombre de ligne et un nombre de colonne qui forme la grille.
	  Chaque map possède aussi un nom. Elle peu etre remplie de données comme des int, des string, des char;
---------------------------------------------------*/

#pragma once
#include<cassert>
#include<iostream>

using namespace std;

template <class TYPE>
class mapHomemade {

private:

	char* _name;				//	Nom de la map;
	TYPE** _map;				//	Map dynamique, avec lignes et colonnes;
	int _nbLine,				//	Nombre de lignes pour la matrice (axe ordonnées);
		_nbCol;					//	Nombre de colonnes pour la matrice (axe abscisses);

public:

	mapHomemade();												//	Constructeur de map sans paramètres;
	mapHomemade(const char* name, int nbCol, int nbLine);		//	Constructeur de map avec paramètres;

	~mapHomemade();												//	Destructeur de map et name;
	void clear();										//	Destructeur de map et name;
	void clearMap();									//	Destructeur de map;
	void clearName();									//	Destructeur de name;

	mapHomemade(const mapHomemade<TYPE>& m);							//	Copieur de l'objet vecteur;

	int getNbLine()const;								//	Getteur de Ligne;
	int getNbCol()const;								//	Getteur de colonne;
	const char* getName()const;							//	Getteur du name;
	TYPE& at(int posI, int posJ)const;					//	Getteur de la données a la position i + j;
	TYPE* operator[](int pos);							//	Operator [] pour l'objet map;
	TYPE* operator[](int pos)const;

	void setName(const char* name);						//	Setteur du name;
	void resize(int nbCol, int nbLine);					//	Resize la matrice avec les nouvelles dimensions;

	void print(ostream& output)const;					//	Méthode de output (print) pour l'objet map;
	void read(istream& input);							//	Méthode de input (read) pour l'objet map;

	const mapHomemade<TYPE>& operator=(const mapHomemade<TYPE>& m);			//	Operator = pour l'objet map;
};

template <class TYPE>
ostream& operator<<(ostream& output, const mapHomemade<TYPE>& m);	//	Opérator << (cout) pour l'objet map;

template <class TYPE>
istream& operator>>(istream& input, mapHomemade<TYPE>& m);			//	Opérator >> (cin) pour l'objet map;

/* Constructeur de la map sans paramètre*/
template <class TYPE>
mapHomemade <TYPE>::mapHomemade() {
	_map = nullptr;
	_name = nullptr;
	_nbLine = 0;
	_nbCol = 0;
}

/* Constructeur de la map avec paramètre*/
template <class TYPE>
mapHomemade <TYPE>::mapHomemade(const char* name, int nbLine, int nbCol) {

	assert(nbLine >= 0);
	assert(nbCol >= 0);

	int tempName = strlen(name);

	if (nbLine == 0 || nbCol == 0) {
		_map = nullptr;
		_name = nullptr;
		_nbLine = 0;
		_nbCol = 0;
	}

	if (nbLine != 0 && nbCol != 0) {
		_nbLine = nbLine;
		_nbCol = nbCol;
		_map = new TYPE * [_nbCol];

		for (int i = 0; i < _nbLine; i++)
			*(_map + i) = new TYPE[_nbCol];
	}

	if (tempName != 0) {
		_name = new char[(tempName)+1];
		strcpy_s(_name, (tempName)+1, name);
	}
}

/* Destructeur de map */
template<class TYPE>
mapHomemade<TYPE>::~mapHomemade() {

	clear();
}

/* Destructeur (clear) de map et name */
template<class TYPE>
void mapHomemade <TYPE>::clear() {

	clearMap();
	clearName();
}

/* Destructeur de map */
template<class TYPE>
void mapHomemade <TYPE>::clearMap() {

	for (int i = 0; i < _nbLine; i++)
		delete[] * (_map + i);

	delete[]_map;
	_map = nullptr;
	_nbLine = _nbCol = 0;
}

/* copieur de l'objet map */
template <class TYPE>
mapHomemade<TYPE>::mapHomemade(const mapHomemade<TYPE>& m) {

	clearName();
	if (m._nbLine == 0 || m._nbCol == 0) {									//	Si on essai de copier des matrices vide;
		clearMap();
	}
	else {
		_nbLine = m._nbLine;												//	Prend le nombre de lignes de la map copiée;
		_nbCol = m._nbCol;													//	Prend le nombre de colonnes de la map copiée;

		_map = new TYPE * [_nbLine];

		for (int i = 0; i < _nbLine; i++)
			*(_map + i) = new TYPE[_nbCol];

		for (int i = 0; i < _nbLine; i++)
			for (int j = 0; j < _nbCol; j++)
				*(*(_map + i) + j) = *(*(m._map + i) + j);
	}

	if (strlen(m.getName()) != 0) {										//	Prend le nom de la map copiée;
		_name = new char[strlen(m.getName()) + 1];
		strcpy_s(_name, strlen(m.getName()) + 1, m._name);
	}
}

/* Destructeur de name */
template<class TYPE>
void mapHomemade <TYPE>::clearName() {

	delete[]_name;
	_name = nullptr;
}

/* Getteur de ligne */
template <class TYPE>
int mapHomemade<TYPE>::getNbLine()const {
	return _nbLine;
}

/* Getteur de Colonne */
template <class TYPE>
int mapHomemade<TYPE>::getNbCol()const {
	return _nbCol;
}

/* Getteur du name */
template <class TYPE>
const char* mapHomemade<TYPE>::getName()const {

	if (_name == nullptr)
		return "\0";							//	Si la variable _name est vide;
	
	return _name;
}

/* Getteur de la données a la position i / j*/
template <class TYPE>
TYPE& mapHomemade<TYPE>::at(int posI, int posJ)const {
	assert(posI >= 0 && posI < _nbLine);
	assert(posJ >= 0 && posJ < _nbCol);

	return *(*(_map + posI) + posJ);
}

/* Operateur [] pour l'objet map */
template <class TYPE>
TYPE* mapHomemade<TYPE>::operator[](int pos) {

	assert(pos >= 0 && pos <= _nbLine);
	return *(_map + pos);
}

template<class TYPE>
inline TYPE* mapHomemade<TYPE>::operator[](int pos) const
{
	//assert(pos >= 0 && pos < _nbLine);
	return *(_map + pos);
}

/* Setteur du name */
template<class TYPE>
void mapHomemade<TYPE>::setName(const char* name) {
	
	clearName();

	if (strlen(name) != 0) {
		_name = new char[strlen(name) + 1];
		strcpy_s(_name, strlen(name) + 1, name);
	}
}

/* Resize de la matrice avec les nouvelles dimensions */
template <class TYPE>
void mapHomemade<TYPE>::resize(int nbCol, int nbLine) {

	assert(nbLine >= 0);
	assert(nbCol >= 0);

	if (nbLine == 0 || nbCol == 0) {
		clearMap();
		return;
	}

	TYPE** temp = new TYPE * [nbLine];

	for (int i = 0; i < nbLine; i++)						//	Création de vecteur par ligne selon le nombre de colonne;
		*(temp + i) = new TYPE[nbCol];

	for (int i = 0; i < _nbLine && i < nbLine; i++) 		//	copie element jusqu'a la plus petite taille des lignes;
		for (int j = 0; j < _nbCol && j < nbCol; j++) 		//	Copie element jusqu'a la plus petite taille des colonnes;
			*(*(temp + i) + j) = *(*(_map + i) + j);


	clearMap();
	_map = temp;
	_nbLine = nbLine;
	_nbCol = nbCol;
}

/* Méthode print */
template <class TYPE>
void mapHomemade<TYPE>::print(ostream& output)const {

	for (int i = 0; i < _nbLine; i++) {
		for (int j = 0; j < _nbCol; j++) {
			output << *(*(_map + j) + i);
		}
		output << endl;
	}
}

/* Méthode read */
template <class TYPE>
void mapHomemade<TYPE>::read(istream& input) {

	assert(_map != NULL);								//	S'assurer que _map n'est pas null;

	for (int i = 0; i < _nbLine; i++)
		for (int j = 0; j < _nbCol; j++) {
			input >> *(*(_map + i) + j);
		}
}

/* Operator = pour l'objet map */
template <class TYPE>
const mapHomemade<TYPE>& mapHomemade<TYPE>::operator=(const mapHomemade<TYPE>& m) {

	if (this == &m) {
		return *this;
	}

	clear();																//	Clear la map est le nom de la map;

	if (m._nbLine != 0 && m._nbCol != 0)
	{
		_nbLine = m._nbLine;												//	Prend le nombre de lignes de la map copiée;
		_nbCol = m._nbCol;													//	Prend le nombre de colonnes de la map copiée;

		_map = new TYPE * [_nbLine];

		for (int i = 0; i < _nbLine; i++)
			*(_map + i) = new TYPE[_nbCol];

		for (int i = 0; i < _nbLine; i++)
			for (int j = 0; j < _nbCol; j++)
				*(*(_map + i) + j) = *(*(m._map + i) + j);
															
	}

	if (strlen(m.getName()) != 0) {										//	Prend le nom de la map copiée;
		_name = new char[strlen(m.getName()) + 1];
		strcpy_s(_name, strlen(m.getName()) + 1, m._name);
	}

	return *this;
}

/* Opérator << de l'objet map */
template <class TYPE>
ostream& operator<<(ostream& output, const mapHomemade<TYPE>& m) {
	m.print(output);
	return output;
}

/* Operator >> de l'objet map */
template <class TYPE>
istream& operator>>(istream& input, mapHomemade<TYPE>& m) {
	m.read(input);
	return input;
}