#include "hud.h"

hud::hud(gameDataRef data) :_data(data) {

	/* signe de dollard */
	_data->assets.loadTexture("dollard sign", HUD_DOLLARD_SIGN);
	_block = setRect(256, 64, 64, 64);
	_dollarSign.setTexture(_data->assets.getTexture("dollard sign"));
	_dollarSign.setTextureRect(_block);
	_dollarSign.setOrigin(_dollarSign.getGlobalBounds().width / 2, _dollarSign.getGlobalBounds().height / 2);

	/* met le font pour le score */
	//_data->assets.loadFont("Main menu text", MENU_TEXT);
	_scoreText.setFont(_data->assets.getFont("Main menu text"));
	_scoreText.setCharacterSize(32);
	_scoreText.setString("00");
	_scoreText.setFillColor(sf::Color::Yellow);
	_scoreText.setOrigin(_scoreText.getGlobalBounds().width / 2, _scoreText.getGlobalBounds().height / 2);

	/* initialise la queue des coeur pour la vie */
	_data->assets.loadTexture("heart hp", HUD_HEART);
	for (int i = 0; i < 3; i++) {
		Sprite temp;
		temp.setTexture(_data->assets.getTexture("heart hp"));
		temp.setOrigin(temp.getGlobalBounds().width / 2, temp.getGlobalBounds().height / 2);
		_heart.push_back(temp);
	}
}

void hud::updateHud(Vector2f position)
{	
	/* le signe de $ prend la position du personnage et le reste ce place en relation avec le Sprite du dollard*/
	_dollarSign.setPosition(position.x + 450, position.y - 450);
	_scoreText.setPosition(_dollarSign.getPosition().x + 60, _dollarSign.getPosition().y - 10);
	for (int i = 0; i < _heart.size(); i++) {
		_heart[i].setPosition(_dollarSign.getPosition().x + 150 + (i * 50 + 50), _dollarSign.getPosition().y);
	}
}

void hud::updateLife()
{
	_heart.pop_back();
}

void hud::updateScore(int score)
{
	_scoreText.setString(to_string(score));
}

void hud::draw() const
{
	_data->window.draw(_dollarSign);
	_data->window.draw(_scoreText);
	for (int i = 0; i < _heart.size(); i++) {
		_data->window.draw(_heart[i]);
	}
}

int hud::getNumberOfHeart(vector<Sprite> heart) const
{
	return _heart.size();
}

IntRect hud::setRect(float x, float y, int width, int height)
{
	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}
