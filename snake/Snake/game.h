/* En-t�te de programme
 ==========================================
Programme:		point.h
Acteur:			Nicolas Garant et Fr�d�rick Perazzelli-Delorme
Date de cr�ation:   30 mars 2021
But du programme:	M�thodes et prototypes de l'objet game
                    cet objet cr�e une boucle qui permet a 
                   l'utilisateur de jouer aux jeu classique snake;
====================================================== */

/* directive au pr�-processeur
-------------------------------*/
#pragma	once
#include<iostream>
#include<conio.h>
#include"rectangle.h"
#include"snake.h"
#include"pomme.h"
#include"point.h"
#include<windows.h>
#include<time.h>

using	namespace std;

class game {

    private:
        bool _lose;                 //Si on perd

        int _dir,                   //la direction choisie
            _cptLive,               //le compteur de vie
            _score;                 //le score de la game

        snake _ekans;               //le serpent
        pomme _pomme;               //la pomme

        rectangle _plateau;         //rectangle du terrain de jeu
        const int _width = 40;      //dimension du terrain de jeu
        const int _height = 20;     // Hauteur;

        enum direction { STOP, LEFT, RIGHT, UP, DOWN, NONE };


    public:

        game();                     //initialise les types primitifs � 0

        ~game();                    //initialise les types primitifs � 0

        void initialize();          //initalise le jeu

        point randPosition() const; //g�n�re une nouvelle position al�atoire 
                                    //ds le terrain

        void createApple();         //g�n�re une nouvelle pomme tq position 
                                    //est ds le snake

        void play();                //la main loop du jeu

        void inputKey();            //la saisie des touches pour le 
                                    //d�placement du snake

        bool canMove(const point& p) const; //retourne vrai si la t�te du 
                                            //snake peut bouger

        int getScore() const;       //retourne le score (seule info qui 
                                    //pourrait �tre int�ressante
                                    //de l�ext�rieur) et aucun setteur 
                                    //pour cet objet.

        void printScore(ostream& output) const;     //affiche le score
        void printLive(ostream& output) const;      //affiche le compteur de vie
        void printEndGame(ostream& output) const;   //affiche game over et le score
        void drawScreen(ostream& output);           // dessine la game a l'�cran
};

