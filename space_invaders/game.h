#include <vector>
#include "laser.h"
#include "alien.h"
#include "vaisseau.h"
#include "mur.h"
#pragma once

using namespace std;

class game {
private:
	vaisseau _player;
	alien _aliens[5][11];
	mur _murs[4];
	vector<laser> laserPlayer;
	vector<laser> laserAlien;

	int _dirAlien;
	int _dirPlayer;
	int _score;
	int _lives;
public:
	game();

	void play();
	void initialize();
	void shoot(int posX, int posY);
	void alienShoot();

	void alienMove();
	void laserMove();

	void collisionMur();
	bool collisionPlayer();
	void collisionAlien();

	void laserDraw(RenderWindow& window);
	void mursDraw(RenderWindow& window);
	void alienDraw(RenderWindow& window);

	void gameOver(RenderWindow& window);

	void setText(Text& text, const char* message, Font& font, const char* police,
		int posX, int posY, int taille, const Color& color, int style);
};