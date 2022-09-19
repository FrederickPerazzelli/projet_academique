#include "characterSelectState.h"

characterSelectState::characterSelectState(gameDataRef data) : _data(data)
{
}

void characterSelectState::init()
{

	
	/* box de char pour le selectionner */
	_data->assets.loadTexture("Char selection box", MENU_BACKGROUND_CHAR_SELECT);
	_background.setTexture(_data->assets.getTexture("Char selection box"));
	_background.setOrigin(_background.getGlobalBounds().width / 2, _background.getGlobalBounds().height / 2);
	_background.setPosition(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);

	/* pole */
	_data->assets.loadTexture("pole char", MENU_CHAR_POLE);
	_block = setRect(896, 0, 384, 1088);
	_pole.setTexture(_data->assets.getTexture("pole char"));
	_pole.setTextureRect(_block);
	_pole.setOrigin(_pole.getGlobalBounds().width / 2, _pole.getGlobalBounds().height / 2);
	_pole.setPosition(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 1.2);


	/* setter tout les _character possible dans un vecteur */
	_iterator = 0;

	_data->assets.loadTexture("Raton", CHARACTER_BLACK_SPRITE);
	_data->assets.loadTexture("Blue", CHARACTER_BLUE_SPRITE);
	_data->assets.loadTexture("Silver", CHARACTER_CERULEAN_SPRITE);
	_data->assets.loadTexture("Red", CHARACTER_CINNABAR_SPRITE);
	_data->assets.loadTexture("Explorer", CHARACTER_CYAN_SPRITE);
	_data->assets.loadTexture("Eggplant", CHARACTER_EGGPLANT_SPRITE);
	_data->assets.loadTexture("Golden", CHARACTER_GOLD_SPRITE);
	_data->assets.loadTexture("Ninja", CHARACTER_GRAY_SPRITE);
	_data->assets.loadTexture("Green", CHARACTER_GREEN_SPRITE);
	_data->assets.loadTexture("Caillou", CHARACTER_CAILLOU_SPRITE);
	_data->assets.loadTexture("Purple", CHARACTER_IRIS_SPRITE);
	_data->assets.loadTexture("Indie", CHARACTER_KHAKI_SPRITE);
	_data->assets.loadTexture("Lemon", CHARACTER_LEMON_SPRITE);
	_data->assets.loadTexture("Luigi", CHARACTER_LIME_SPRITE);
	_data->assets.loadTexture("Pirate", CHARACTER_MAGENTA_SPRITE);
	_data->assets.loadTexture("Amazon", CHARACTER_OLIVE_SPRITE);
	_data->assets.loadTexture("8-bit", CHARACTER_ORANGE_SPRITE);
	_data->assets.loadTexture("Bootleg Mega-Man", CHARACTER_PINK_SPRITE);
	_data->assets.loadTexture("Scarlett", CHARACTER_RED_SPRITE);
	_data->assets.loadTexture("Peacock", CHARACTER_VIOLET_SPRITE);
	_data->assets.loadTexture("Wall-e", CHARACTER_WHITE_SPRITE);
	_data->assets.loadTexture("Classic", CHARACTER_YELLOW_SPRITE);
	_data->assets.loadTexture("Pepe", CHARACTER_PEPE_SPRITE);

	vector <string> strTemp{ "Raton", "Blue", "Silver", "Red", "Explorer", "Eggplant","Golden","Ninja","Green","Caillou","Purple","Indie","Lemon", "Luigi", "Pirate", "Amazon", "8-bit", "Bootleg Mega-Man", "Scarlett", "Peacock", "Wall-e", "Classic", "Pepe" };


	for (int i = 0; i < strTemp.size(); i++) {
		Sprite temp;
		_charString.push_back(strTemp[i]);

		_block = setRect(0, 0, 128, 128);
		temp.setTexture(_data->assets.getTexture(strTemp[i]));
		temp.setTextureRect(_block);
		temp.setOrigin(temp.getGlobalBounds().width / 2, temp.getGlobalBounds().height / 2);
		temp.setPosition(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
		_character.push_back(temp);
	}

	/* initialise le texte au haut du personnage */
	_data->assets.loadFont("Main menu text", MENU_TEXT);
	_charName.setFont(_data->assets.getFont("Main menu text"));
	_charName.setString(_charString[_iterator]);
	_charName.setCharacterSize(128);
	_charName.setFillColor(Color::White);
	_charName.setOrigin(_charName.getGlobalBounds().width / 2, _charName.getGlobalBounds().height / 2);
	_charName.setPosition(_character[0].getPosition().x - 25, _character[0].getPosition().y - 300);

	/* initialise le button switch droite character */
	_data->assets.loadTexture("switch button", SWITCH_BUTTON);
	_block = setRect(1024, 0, 128, 128);
	_switchButtonRight.setTexture(_data->assets.getTexture("switch button"));
	_switchButtonRight.setTextureRect(_block);
	_switchButtonRight.setOrigin(_switchButtonRight.getGlobalBounds().width / 2, _switchButtonRight.getGlobalBounds().height / 2);
	_switchButtonRight.setPosition((SCREEN_WIDTH / 2) + 100, SCREEN_HEIGHT / 2);

	/* initialise le button switch gauche character */
	_data->assets.loadTexture("switch button", SWITCH_BUTTON);
	_block = setRect(1024, 0, 128, 128);
	_switchButtonLeft.setTexture(_data->assets.getTexture("switch button"));
	_switchButtonLeft.setTextureRect(_block);
	_switchButtonLeft.setOrigin(_switchButtonLeft.getGlobalBounds().width / 2, _switchButtonLeft.getGlobalBounds().height / 2);
	_switchButtonLeft.setPosition((SCREEN_WIDTH / 2) - 100 , SCREEN_HEIGHT / 2);
	_switchButtonLeft.rotate(180);

	/* Regle de gauche */
	_data->assets.loadTexture("control key", CONTROL_KEY);
	_controlKey.setTexture(_data->assets.getTexture("control key"));
	_controlKey.setOrigin(_controlKey.getGlobalBounds().width / 2, _controlKey.getGlobalBounds().height / 2);
	_controlKey.setPosition((SCREEN_WIDTH / 2) + 450, SCREEN_HEIGHT / 2);


	/* Regle de droite */
	_data->assets.loadTexture("control mouse", CONTROL_MOUSE);
	_controlMouse.setTexture(_data->assets.getTexture("control mouse"));
	_controlMouse.setOrigin(_controlMouse.getGlobalBounds().width / 2, _controlMouse.getGlobalBounds().height / 2);
	_controlMouse.setPosition((SCREEN_WIDTH / 2) - 450, SCREEN_HEIGHT / 2);


	/*playbutton*/
	_data->assets.loadTexture("play button", PLAY_BUTTON);
	_block = setRect(0, 1024, 128, 128);
	_playButton.setTexture(_data->assets.getTexture("play button"));
	_playButton.setTextureRect(_block);
	_playButton.setOrigin(_playButton.getGlobalBounds().width / 2, _playButton.getGlobalBounds().height / 2);
	_playButton.setPosition((SCREEN_WIDTH / 2), SCREEN_HEIGHT / 2 + 300);


	
}

void characterSelectState::handleInput()
{
	Event event;
	while (_data->window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			_data->window.close();
	}

}

void characterSelectState::update(float dt)
{
	_time = _clock.getElapsedTime();
	if (_data->input.isSpriteClicked(_switchButtonRight, Mouse::Left, _data->window)) {
		if (_time.asSeconds() >= CHARACTER_SELECT_CLOCK) {
			_iterator = _iterator + 1;
			if (_iterator >= _character.size()) {
				_iterator = 0;
			}
			_charName.setString(_charString[_iterator]);
			_charName.setOrigin(_charName.getGlobalBounds().width / 2, _charName.getGlobalBounds().height / 2);
			_charName.setPosition(_character[0].getPosition().x, _character[0].getPosition().y - 300);
			draw(dt);
		}
		_clock.restart();
	}
	else if (_data->input.isSpriteClicked(_switchButtonLeft, Mouse::Left, _data->window)) {
		if (_time.asSeconds() >= CHARACTER_SELECT_CLOCK) {
			_iterator = _iterator - 1;
			if (_iterator < 0) {
				_iterator = _character.size() - 1;
			}
			_charName.setString(_charString[_iterator]);
			_charName.setOrigin(_charName.getGlobalBounds().width / 2, _charName.getGlobalBounds().height / 2);
			_charName.setPosition(_character[0].getPosition().x, _character[0].getPosition().y - 300);
			draw(dt);
		}
		_clock.restart();
	}
	else if (_data->input.isSpriteClicked(_playButton, Mouse::Left, _data->window)) {
		_data->machine.addState(stateRef(new gameState(_data, _charString[_iterator])), true);
	};
}

void characterSelectState::draw(float dt) const
{
	_data->window.clear();
	_data->window.draw(_background);
	_data->window.draw(_pole);
	_data->window.draw(_character[_iterator]);
	_data->window.draw(_charName);
	_data->window.draw(_switchButtonRight);
	_data->window.draw(_switchButtonLeft);
	_data->window.draw(_controlKey);
	_data->window.draw(_controlMouse);
	_data->window.draw(_playButton);
	_data->window.display();
}

IntRect characterSelectState::setRect(float x, float y, int width, int height)
{
	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}
