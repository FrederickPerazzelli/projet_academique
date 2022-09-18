/* En-tête de programme
 ==========================================
Programme:		point.h
Acteur:			Nicolas Garant et Frédérick Perazzelli-Delorme
Date de création:
But du programme:	Méthodes et prototypes de l'objet pomme;
                    cet objet permet de créer un serpent et de le faire bouger a l'aide d'un tableau de point;
====================================================== */

/* directive au pré-processeur
-------------------------------*/
#pragma once

#include "point.h"
#include <iostream>
#include <assert.h>
#include <windows.h>

using namespace std;

class snake {

    private:

        point _snake[300];                          //tableau pour les positions du 
                                                    // serpent

        int _taille;                                //taille du serpent

    public:
        snake();                                    //Initialise la position du snake 
                                                    //au milieu de la console, 
                                                    //(20,7) taille 6;
        
        snake(int x, int y);                        //Initialise la position du snake 
                                                    //avec des données recu (x,y), 
                                                    //taille 6;

        ~snake();                                   //Remet la taille a 0;

        void initialize(int x, int y);              //Setteur
       
        const point& getHeadPosition() const;       //retourne la tête du serpent
        const point& getPosition(int ind) const;    //Retourne la position  
                                                    //d'une des parties du serpent;
        const point& operator[](int ind) const;     //Apelle le getteur de la position
        int getTaille() const;                      //retourne la taille du serpent

        point nouvellePosition(int dir)const;            //retourne la nouvelle position 
                                                    //selon la direction

        bool ifCollision(const point& pos) const;   //Retourne vrai si la position 
                                                    //recu est en collision avec 
                                                    //une position du serpent   

        void move(int dir);                         //avance le snake dans la bonne 
                                                    //direction
        void eat(int dir);                          //avance et mange une pomme dans
                                                    // la direction

        void draw(ostream& output)const;           //draw le snake
};

ostream& operator<<(ostream& output, const snake& s);