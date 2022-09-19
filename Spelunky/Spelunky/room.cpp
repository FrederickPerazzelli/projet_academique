#include "room.h"

room::room(gameDataRef data) : _data(data)
{
	_backRoom.resize(60, 60);
	_room.resize(60, 60);
	for (int i = 1; i < 10; i++)
	{
		readFile( i);
	}

}

void room::initializeRoom(int fileNumber)
{
	int xPos=0,
		yPos=0;
	Vector2i position(0, 0);
	_positionEntrance = Vector2f(0, 9.5);
	_positionExit = Vector2f(0, 7);

	
	switch (fileNumber) {
	case 1:

		for (int i = 0; i < _backRoom.getNbLine(); i+=4) {
			for (int j = 0; j < _backRoom.getNbCol(); j+=4) {
				/* map (front)*/
				_background = new background(_data, i, j);
				_backRoom[i][j] = _background;
			}
		}
		break;
	/*Changement de la position initial et final des boucles for en prenant compte de quelle emplacement du fichier */
	case 2:
		xPos = 20;
		yPos = 0;

		break;
	case 3:
		xPos = 40;
		yPos = 0;

		break;
	case 4:
		xPos = 0;
		yPos = 20;

		break;
	case 5:
		xPos = 20;
		yPos = 20;

		break;
	case 6:
		xPos = 40;
		yPos = 20;

		break;
	case 7:
		xPos = 0;
		yPos = 40;

		break;
	case 8:
		xPos = 20;
		yPos = 40;

		break;
	case 9:
		xPos = 40;
		yPos = 40;

		break;
	}

	for (int i = 0 +yPos; i < 20 + yPos; i++) {
		for (int j = 0 + xPos; j < 20 + xPos; j++) {

			if ((fileNumber == 1 && position.y == 0) || (fileNumber == 2 && position.y == 0) || (fileNumber == 3 && position.y == 0))
			{
				/* Tuile de l'extrimite de la map*/
				_tile = new tiles(_data, 7, 0, i, j, 'A', true);
				_room[i][j] = _tile;

				/* incrementation de la position sur la _fileRoom*/
				position.x += 1;
				if (position.x == 20) {
					position.x = 0;
					position.y += 1;
				}
			}
			else if ((fileNumber == 3 && position.x == 19) || (fileNumber == 6 && position.x == 19) || fileNumber == 9 && position.x == 19)
			{
				/* Tuile de l'extrimite de la map*/
				_tile = new tiles(_data, 7, 0, i, j, 'A', true);
				_room[i][j] = _tile;

				/* incrementation de la position sur la _fileRoom*/
				position.x += 1;
				if (position.x == 20) {
					position.x = 0;
					position.y += 1;
				}
			}
			else if ((fileNumber == 1 && position.x == 0) || (fileNumber == 4 && position.x == 0) || (fileNumber == 7 && position.x == 0))
			{
				/* Tuile de l'extrimite de la map*/
				_tile = new tiles(_data, 7, 0, i, j, 'A', true);
				_room[i][j] = _tile;

				/* incrementation de la position sur la _fileRoom*/
				position.x += 1;
				if (position.x == 20) {
					position.x = 0;
					position.y += 1;
				}
			}
			else if ((fileNumber == 7 && position.y == 19) || (fileNumber == 8 && position.y == 19) || (fileNumber == 9 && position.y == 19))
			{
					/* Tuile de l'extrimite de la map*/
					_tile = new tiles(_data, 7, 0, i, j, 'A', true);
					_room[i][j] = _tile;

					/* incrementation de la position sur la _fileRoom*/
					position.x += 1;
					if (position.x == 20) {
						position.x = 0;
						position.y += 1;
					}
			}
			else
			{
				switch (_fileRoom[position.y][position.x]) {
				case '0':
					/* Tuile vide*/
					_tile = new tiles(_data, 6, 0, i, j, 'A', false);
					_room[i][j] = _tile;


					/* incrementation de la position sur la _fileRoom*/
					position.x += 1;
					if (position.x == 20) {
						position.x = 0;
						position.y += 1;
					}

					break;
				case '1':
					/* Tuile possible si necessaire (pas utilise au final)*/
					_tile = new tiles(_data, 7, 0, i, j, 'A', true);
					_room[i][j] = _tile;

					/* incrementation de la position sur la _fileRoom*/
					position.x += 1;
					if (position.x == 20) {
						position.x = 0;
						position.y += 1;
					}
					break;
				case '2':
					/* tuile de floor*/
					_tile = new tiles(_data, 1, 2, i, j, 'B', true);
					_room[i][j] = _tile;

					/* incrementation de la position sur la _fileRoom*/
					position.x += 1;
					if (position.x == 20) {
						position.x = 0;
						position.y += 1;
					}
					break;
				case '3':
					/* tuile de la porte d'entree*/
					_tile = new tiles(_data, _positionEntrance.x, _positionEntrance.y, i, j, 'A', false);
					_room[i][j] = _tile;

					/* incrémentation position entrance */
					_positionEntrance.x = _positionEntrance.x + 1;
					if (_positionEntrance.x == 3) {
						_positionEntrance.x = 0;
						_positionEntrance.y = _positionEntrance.y + 1;
					}

					/* incrementation de la position sur la _fileRoom*/
					position.x += 1;
					if (position.x == 20) {
						position.x = 0;
						position.y += 1;
					}
					break;
				case '4':
					/* tuile de la porte de sortie*/
					_tile = new tiles(_data, _positionExit.x, _positionExit.y, i, j, 'A', false);
					_room[i][j] = _tile;

					/* incrémentation position exit dans le png*/
					_positionExit.x = _positionExit.x + 1;
					if (_positionExit.x == 3) {
						_positionExit.x = 0;
						_positionExit.y = _positionExit.y + 1;
					}

					/* incrementation de la position sur la _fileRoom*/
					position.x += 1;
					if (position.x == 20) {
						position.x = 0;
						position.y += 1;
					}
					break;
				case '5':
					/* tuile d'echelle si on vennait a la coder*/
					_tile = new tiles(_data, 4, 1, i, j, 'A', false);
					_room[i][j] = _tile;

					/* incrementation de la position sur la _fileRoom*/
					position.x += 1;
					if (position.x == 20) {
						position.x = 0;
						position.y += 1;
					}
					break;
				case '6':
					/* tuile de floor*/
					_tile = new tiles(_data, 0, 2, i, j, 'B', true);
					_room[i][j] = _tile;
					
					/* incrementation de la position sur la _fileRoom*/
					position.x += 1;
					if (position.x == 20) {
						position.x = 0;
						position.y += 1;
					}
					break;
				case '7':
					/* tuile de floor*/
					_tile = new tiles(_data, 1, 3, i, j, 'B', true);
					_room[i][j] = _tile;

					/* incrementation de la position sur la _fileRoom*/
					position.x += 1;
					if (position.x == 20) {
						position.x = 0;
						position.y += 1;
					}
					break;
				case '8':
					/* tuile de floor*/
					_tile = new tiles(_data, 2, 2, i, j, 'B', true);
					_room[i][j] = _tile;

					/* incrementation de la position sur la _fileRoom*/
					position.x += 1;
					if (position.x == 20) {
						position.x = 0;
						position.y += 1;
					}
					break;
				}
			}
		}
	}

}

void room::readFile( int fileNumber)
{
	string number;
	_fileRoom.clear();
	_fileRoom.resize(0,0);
	if (fileNumber==1)					/*assure que la premiere parti de la map est toujours la meme*/
	{
		number = to_string(fileNumber);
	}
	else if (fileNumber == 9)			/*assure que la derniere parti de la map est toujours la meme*/
	{
		number = "10";
	}
	else
	{
		std::random_device rd;						 // obtain a random number from hardware
		std::mt19937 gen(rd());						 // seed the generator
		std::uniform_int_distribution<> distr(2, 9); // define the range

		number = to_string(distr(gen));
	}

	string filename ("Ressources/Room/Room" + number + ".txt"); //cree le string avec le numero de la room
	ifstream file(filename);									//ouverture du ficher
	int nbLine, nbCol; 

	if (file.is_open())
	{
		
		file >> nbCol >> nbLine;			//Lit les dimensions de la matrice
		_fileRoom.resize(nbCol, nbLine);	//Donne les dimensions lues à la matrice

			
		file >> _fileRoom;					//lecture de la matrice
		file.close();
		
	}
	else {
		printf("can't open file");
	}
	initializeRoom(fileNumber); //appel l'initialisateur de la room pour une des parties et il est rappelle 10 fois
}

void room::draw() const
{
	for (int i = 0; i < _backRoom.getNbLine(); i+=4) {
		for (int j = 0; j < _backRoom.getNbCol(); j+=4) {
			_backRoom[i][j]->draw();					// dessine le background de la map avec des incrementation de 4 car le sprite est plus gros
		}
	}
	for (int i = 0; i < _room.getNbLine(); i++) {
		for (int j = 0; j < _room.getNbCol(); j++) {
			_room[i][j]->draw();						// dessine chaque tuiles de la room 
		}
	}
	drawCollisionBox();
}

tiles* room::getTile(int x, int y)
{
	return _room[y][x];
}

vector<tiles*> room::collision(Vector2f pos)
{
	Vector2i coord;
	coord.x = floor(pos.x); //donne la tuile ou le personnage est situe
	coord.y = floor(pos.y);	//donne la tuile ou le personnage est situe
	vector<Sprite> tilesSprites;
	_collisionVector.resize(0);

	// En haut a gauche (position du personnage plus precis dans qu'elle parti de la tuile
	// le personnage se situe et permet verifier la collision avec seulement 4 cases).
	if (pos.x < (floor(pos.x)+0.5) && pos.y < (floor(pos.y) + 0.5)){ 
		for (int i = 0; i < 2; i++){
			for (int j = 0; j < 2; j++) {
				_collisionVector.push_back(_room[(coord.y) - i][(coord.x) - j]);
			}
		}
	}

	// En bas a droite (position du personnage plus precis dans qu'elle parti de la tuile
	// le personnage se situe et permet verifier la collision avec seulement 4 cases).
	else if (pos.x >= (floor(pos.x) + 0.5) && pos.y >= (floor(pos.y) + 0.5)) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				_collisionVector.push_back(_room[(coord.y) + i][(coord.x) + j]);

			}
		}
	}
	// En bas a gauche (position du personnage plus precis dans qu'elle parti de la tuile
	// le personnage se situe et permet verifier la collision avec seulement 4 cases).
	else if (pos.x < (floor(pos.x) + 0.5) && pos.y >= (floor(pos.y) + 0.5)) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				_collisionVector.push_back(_room[(coord.y) + i][(coord.x) - j]);
			}
		}
	}
	// En haut a droite (position du personnage plus precis dans qu'elle parti de la tuile
	// le personnage se situe et permet verifier la collision avec seulement 4 cases).
	else if (pos.x >= (floor(pos.x) + 0.5) && pos.y < (floor(pos.y) + 0.5)) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				_collisionVector.push_back(_room[(coord.y) - i][(coord.x) + j]);
			}
		}
	}
		//affiche les boites de collision qui sont utilise par notre checkCollision
	initCollisionBox(_collisionVector);
		//update les boites de collision qui sont utilise par notre checkCollision
	updateCollisionBox(_collisionVector);
	
	return _collisionVector; // retourne un vecteur de tiles dans le checkCollision
}

void room::initCollisionBox(vector<tiles*> tile) {
	_collisionBox1.clear();
	_collisionBox2.clear();
	_collisionBox3.clear();
	_collisionBox4.clear();

	RectangleShape _borderTop;
	RectangleShape _borderBottom;
	RectangleShape _borderLeft;
	RectangleShape _borderRight;
	for (int i = 0; i < 4; i++)
	{
		_borderTop.setPosition(tile[i]->getPosition());
		_borderTop.setSize(Vector2f(tile[i]->getSpriteTiles().getGlobalBounds().width, 1));		//aussi large que l'entite, 1 de hauteur
		_borderTop.setOrigin(tile[i]->getSpriteTiles().getOrigin().x, tile[i]->getSpriteTiles().getOrigin().y);
		_borderTop.setFillColor(Color(255, 0+(i*50), 0));

		_borderBottom.setPosition(tile[i]->getPosition());
		_borderBottom.setSize(Vector2f(tile[i]->getSpriteTiles().getGlobalBounds().width, -1));	//aussi large que l'entite, 1 de hauteur
		_borderBottom.setOrigin(tile[i]->getSpriteTiles().getOrigin().x, tile[i]->getSpriteTiles().getOrigin().y - tile[i]->getSpriteTiles().getGlobalBounds().height);
		_borderBottom.setFillColor(Color(255, 0 + (i * 50), 0));

		_borderLeft.setPosition(tile[i]->getPosition());
		_borderLeft.setSize(Vector2f(-1, tile[i]->getSpriteTiles().getGlobalBounds().height));	//aussi grand que l'entite, 1 de largeur
		_borderLeft.setOrigin(tile[i]->getSpriteTiles().getOrigin().x, tile[i]->getSpriteTiles().getOrigin().y);
		_borderLeft.setFillColor(Color(255, 0 + (i * 50), 0));

		_borderRight.setPosition(tile[i]->getPosition());
		_borderRight.setSize(Vector2f(1, tile[i]->getSpriteTiles().getGlobalBounds().height));	//aussi grand que l'entite, 1 de largeur
		_borderRight.setOrigin(tile[i]->getSpriteTiles().getOrigin().x - tile[i]->getSpriteTiles().getGlobalBounds().width, tile[i]->getSpriteTiles().getOrigin().y);
		_borderRight.setFillColor(Color(255, 0 + (i * 50), 0));
		if (i==0)
		{
			_collisionBox1.push_back(_borderTop);
			_collisionBox1.push_back(_borderBottom);
			_collisionBox1.push_back(_borderLeft);
			_collisionBox1.push_back(_borderRight);
		}
		if (i == 1)
		{
			_collisionBox2.push_back(_borderTop);
			_collisionBox2.push_back(_borderBottom);
			_collisionBox2.push_back(_borderLeft);
			_collisionBox2.push_back(_borderRight);
		}
		if (i == 2)
		{
			_collisionBox3.push_back(_borderTop);
			_collisionBox3.push_back(_borderBottom);
			_collisionBox3.push_back(_borderLeft);
			_collisionBox3.push_back(_borderRight);
		}
		if (i == 3)
		{
			_collisionBox4.push_back(_borderTop);
			_collisionBox4.push_back(_borderBottom);
			_collisionBox4.push_back(_borderLeft);
			_collisionBox4.push_back(_borderRight);
		}
	}
	

}

void room::updateCollisionBox(vector<tiles*> tile) {





	for (int i = 0; i < _collisionBox1.size(); i++) {
		_collisionBox1[i].setPosition(tile[0]->getPosition());
	}
	for (int i = 0; i < _collisionBox1.size(); i++) {
		_collisionBox2[i].setPosition(tile[1]->getPosition());
	}
	for (int i = 0; i < _collisionBox1.size(); i++) {
		_collisionBox3[i].setPosition(tile[2]->getPosition());
	}
	for (int i = 0; i < _collisionBox1.size(); i++) {
		_collisionBox4[i].setPosition(tile[3]->getPosition());
	}
}

void room::drawCollisionBox() const {
	for (int i = 0; i < _collisionBox1.size(); i++) {
		_data->window.draw(_collisionBox1[i]);
	}
	for (int i = 0; i < _collisionBox2.size(); i++) {
		_data->window.draw(_collisionBox2[i]);
	}
	for (int i = 0; i < _collisionBox3.size(); i++) {
		_data->window.draw(_collisionBox3[i]);
	}
	for (int i = 0; i < _collisionBox4.size(); i++) {
		_data->window.draw(_collisionBox4[i]);
	}
}


