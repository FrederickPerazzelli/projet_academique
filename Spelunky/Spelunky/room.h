/*------------------------------------------------------
Auteur : Olivier Leclerc St-Amand
Date : 2021/12/18
Programme: room.h
But : Matrice de x et y qui est rempli de pointeur de tuiles. l'ensemble de ces tuiles permet de creer la map et le background
---------------------------------------------------*/
#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.hpp"
#include "game.h"
#include "mapHomemade.hpp"
#include "tiles.h"
#include "background.h"
#include <math.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <random>
using namespace sf;
using namespace std;

class room {

	private:
		gameDataRef _data;


		tiles* _tile;
		background* _background;
		
		mapHomemade<char> _fileRoom;		//map de donnee texte qui contien les types de tuiles
		mapHomemade<tiles*> _room;			//map de tuiles qui sert a afficher les platformes et les portes
		mapHomemade<background*> _backRoom;	//map du background

		vector<tiles*> _collisionVector;	//Vecteur de tuiles qui sont autour d'une entity
		Vector2f _positionEntrance;			//possition de la porte d'entree
		Vector2f _positionExit;				//possition de la porte de sortie
		vector<RectangleShape> _collisionBox1, // boite de collision des tuiles autour de l'entity
							   _collisionBox2,
							   _collisionBox3,
							   _collisionBox4;
		
	public:		
		room(gameDataRef data);					//appel 9 fois le readFile
		void initializeRoom(int fileNumber);	//remplie les map _room et _backroom
		void readFile( int fileNumber);			//lit les fichiers texte des map et appel le initializeRoom
		void draw()const;
		tiles* getTile(int x, int y);
		vector<tiles*> collision(Vector2f pos);	//trouve les 4tuiles qui sont le plus proche de l'entity et les renvoient dans un vecteur
		
		//boites de collition pour debugger
		void initCollisionBox(vector<tiles*> tile);
		void updateCollisionBox(vector<tiles*> tile);
		void drawCollisionBox() const;

		vector<RectangleShape> getCollisionBox()const;
};