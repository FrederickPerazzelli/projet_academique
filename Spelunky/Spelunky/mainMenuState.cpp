#include "mainMenuState.h"
//le constructeur utilise les : pour initialiser _data avant même l'execution du contenu{}
mainMenuState::mainMenuState(gameDataRef data) : _data(data) {
}

//load l’image du background à l’aide du assetManager ds _data et la set au Sprite
void mainMenuState::init() {

	/* background du menu */
	_data->assets.loadTexture("Main menu background", MAIN_MENU_BACKGROUND);
	_background.setTexture(_data->assets.getTexture("Main menu background"));


	/* titre du jeu dans le menu */
	_data->assets.loadTexture("Title main menu", TITLE_MAIN_MENU);
	_title.setTexture(_data->assets.getTexture("Title main menu"));;
	_title.setPosition((SCREEN_WIDTH / 2) - (_title.getGlobalBounds().width / 2), SCREEN_HEIGHT / 8);

	/* placer le button play  et son texte */
	_data->assets.loadTexture("Main menu button", MENU_BUTTON_DEFAULT);
	_block = setRect(768, 896, 512, 128);
	_playButton.setTexture(_data->assets.getTexture("Main menu button"));
	_playButton.setTextureRect(_block);
	_playButton.setPosition((SCREEN_WIDTH / 2) - (_playButton.getGlobalBounds().width / 2), SCREEN_HEIGHT / 2);
	/* texte Play */
	_data->assets.loadFont("Main menu text", MENU_TEXT);
	_play.setFont(_data->assets.getFont("Main menu text"));
	_play.setString("PLAY");
	_play.setCharacterSize(88);
	_play.setFillColor(Color::White);
	_play.setPosition(_playButton.getPosition().x + (_playButton.getLocalBounds().width / 10), _playButton.getPosition().y + (_playButton.getLocalBounds().height / 16));


	/* placer le button exit et sont texte */
	_data->assets.loadTexture("Main menu button", MENU_BUTTON_DEFAULT);
	_block = setRect(768, 896, 512, 128);
	_exitButton.setTexture(_data->assets.getTexture("Main menu button"));
	_exitButton.setTextureRect(_block);
	_exitButton.setPosition((SCREEN_WIDTH / 2) - (_exitButton.getGlobalBounds().width / 2), SCREEN_HEIGHT / 1.5);
	/* texte exit */
	_exit.setFont(_data->assets.getFont("Main menu text"));
	_exit.setString("EXIT");
	_exit.setCharacterSize(88);
	_exit.setFillColor(Color::White);
	_exit.setPosition(_exitButton.getPosition().x + (_exitButton.getLocalBounds().width / 10), _exitButton.getPosition().y + (_exitButton.getLocalBounds().height / 16));

}

//fênetre qui reste ouverte tant qu'elle n'est pas fermée
void mainMenuState::handleInput() {
	
	Event event;
	while (_data->window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			_data->window.close();
	}
}
//gere le delai, apres 3 secondes, on veut afficher la prochaine fenetre
void mainMenuState::update(float dt) {
	
	if (_data->input.isSpriteClicked(_playButton, Mouse::Left, _data->window)) {

		_data->machine.addState(stateRef(new characterSelectState(_data)), true);
	}
	else if (_data->input.isSpriteClicked(_exitButton, Mouse::Left, _data->window)) {
		_data->window.close();
	}
}

//clear, dessine le background et display la fenêtre. (dt n’est pas utilisé ici)
void mainMenuState::draw(float dt) const {
	_data->window.clear();
	_data->window.draw(_background);
	_data->window.draw(_title);
	_data->window.draw(_playButton);
	_data->window.draw(_exitButton);
	_data->window.draw(_play);
	_data->window.draw(_exit);
	_data->window.display();
}

IntRect mainMenuState::setRect(float x, float y, int width, int height)
{
	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}

