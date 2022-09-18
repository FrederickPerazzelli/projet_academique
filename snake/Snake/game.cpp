
/* directive au pr�-processeur
-------------------------------*/
#include"game.h"

// loop du jeu
void game::play() {
    //Variables
   
    point pos;

    initialize();
    while (!_lose) {

        printScore(cout);
        printLive(cout);
        inputKey();
       
        if (_dir != STOP) {

            pos = _ekans.nouvellePosition(_dir);
            _ekans.move(_dir);

            if (!canMove(pos)) {

                _cptLive--;  
                drawScreen(cout);
               
                if (_cptLive == 0) {
                    _lose = true;
                }
            }
            else if (pos == _pomme.getPosition()) {

                _ekans.eat(_dir);
                _score++;
                printScore(cout);
                createApple();
            }
            else {
                _ekans.nouvellePosition(_dir);
            }

            _ekans.draw(cout);
            Sleep(100);
        }
    }
    printEndGame(cout);
}

//Touches entr�es, initialise la direction et le bool�en 
//  _lose si Q est touch�
void game::inputKey() {
   
    int touche;
    
    if (_kbhit()) {                     //si une touche est 
                                        //appuy�e
        touche = _getch();              //saisie la touche
        if (touche == 'q') {            //si la touche est q, 
                                        //on veut arr�ter le jeu
            _lose = true;
            _dir = STOP;
        }
        else if (touche == 224) {       //si la touche est 224, 
                                        //c�est une fl�che
            touche = _getch();          //dans le buffer on prend 
                                        //la 2e partie de la touche
            switch (touche) {
            case 75:                    //code ascii des fl�ches
                _dir = LEFT;
                break;
            case 72:
                _dir = UP;
                break;
            case 80:
                _dir = DOWN;
                break;
            case 77:
                _dir = RIGHT;
                break;
            }

        }
    }
}

//initialise les types primitifs � 0
game::game() {
    _lose = false;
    _dir = LEFT;
    _cptLive = 3;
    _score = 0;
    _ekans.initialize(_width/2, _height/2);
    _plateau.setLargeur(_width);
    _plateau.setHauteur(_height);
}

//initialise les types primitifs � 0
game::~game() {
    _lose = false;
    _dir = NONE;
    _cptLive = 0;
    _score = 0;
    _ekans.initialize(0, 0);
    _plateau.setLargeur(0);
    _plateau.setHauteur(0);  
}

//initalise le jeu
void game::initialize() {
    game();
    drawScreen(cout);
}

//g�n�re une nouvelle position al�atoire ds le terrain
point game::randPosition() const {
    
    point p;
    int x, y;
    srand (time(NULL));

    x = rand() % 37 + 2;    //Position random
    y = rand() % 17 + 2;

    //V�rification que le rand n'est pas la position du snake
    for (int i = 0; i < _ekans.getTaille(); ++i) {
        if (x == _ekans[i].getX() && y == _ekans[i].getY()) {
            x = rand() % 37 + 2;    //Position random
            y = rand() % 17 + 2;
        }
    }

    p.setPosition(x, y);
    return p;
}

//  Creation de la pomme;
void game::createApple() {
    _pomme.setPosition(randPosition().getX(), randPosition().getY());
    _pomme.draw(cout);
}

//  Peu tu bouger;
bool game::canMove(const point& p) const {
   
    if (_ekans.ifCollision(p)) {

        // si la t�te du serpent frappe un mur;
        if ((_ekans[0].getX() == 0 || _ekans[0].getX() == 39) || (_ekans[0].getY() == 0 || _ekans[0].getY() == 19)) {

            return false;
        }
        for (int i = 1; i < _ekans.getTaille(); i++) {

            if (_ekans[0] == _ekans[i]) {

                return false;
            }
        }
    }
    return true;
}


// renvoie le score
int game::getScore() const {
    return _score;
}

// imprime le score
void game::printScore(ostream& output) const {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(0, 23);
    output << "Score : " << _score << endl;
}

// imprime le nombre de vie
void game::printLive(ostream& output) const {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(0, 24);
    output << "Vies restantes : " << _cptLive << endl;
}

// imprime game over
void game::printEndGame(ostream& ouput) const {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(0, 26);
    ouput << "Game Over" << endl << "Score : " << _score << endl;
}

// affiche le jeu graphique a l'�cran
void game::drawScreen(ostream& output)
{
    system("cls");
    printScore(output);
    printLive(output);
    _ekans.initialize(_width / 2, _height / 2);
    _dir = LEFT;
    _plateau.draw(output);
    _ekans.draw(output);
    createApple();
}
