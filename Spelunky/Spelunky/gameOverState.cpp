#include "gameOverState.h"
//le constructeur utilise les : pour initialiser _data avant même l'execution du contenu{} recoie aussi par valeur des données qui seront
// utile plus dans la construction du game over state.
gameOverState::gameOverState(gameDataRef data, string character, bool result, int score) : _data(data) {
	_characterSelected = character;
	_result = result;
	_score = to_string(score);
	init();
}

//load les image ainsi que le texte du gameover afin de créer le menu de la fin.
void gameOverState::init() {
	/* image de background */
	_data->assets.loadTexture("game over background", GAME_OVER_BACKGROUND);
	_background.setTexture(_data->assets.getTexture("game over background"));

	/* image du livre de statistique */
	_data->assets.loadTexture("book stats final", BOOK_STATS_FINAL);
	_bookStats.setTexture(_data->assets.getTexture("book stats final"));

	/* player Sprite et texte  si true == gagne, si false == perd*/
	if (_result == true) {
		_textResult.setFont(_data->assets.getFont("Main menu text"));
		_textResult.setString("Félicitation");
		_textResult.setCharacterSize(128);
		_textResult.setFillColor(Color::Yellow);
		_textResult.setOrigin(0, _textResult.getGlobalBounds().height / 2);
		_textResult.setPosition(_bookStats.getGlobalBounds().width / 1.8, _bookStats.getGlobalBounds().height / 6);

		_block = setRect(0, 0, 128, 128);
		_player.setTexture(_data->assets.getTexture(_characterSelected));
		_player.setTextureRect(_block);
		_player.setOrigin(_player.getGlobalBounds().width / 2, _player.getGlobalBounds().height / 2);
		_player.setPosition(_bookStats.getGlobalBounds().width / 4, _bookStats.getGlobalBounds().height / 3.3);
	}
	else {
		_textResult.setFont(_data->assets.getFont("Main menu text"));
		_textResult.setString("Game over");
		_textResult.setCharacterSize(128);
		_textResult.setFillColor(Color::Red);
		_textResult.setOrigin(0, _textResult.getGlobalBounds().height / 2);
		_textResult.setPosition(_bookStats.getGlobalBounds().width / 1.8, _bookStats.getGlobalBounds().height / 6);

		_block = setRect(384, 256, 128, 128);
		_player.setTexture(_data->assets.getTexture(_characterSelected));
		_player.setTextureRect(_block);
		_player.setOrigin(_player.getGlobalBounds().width / 2, _player.getGlobalBounds().height / 2);
		_player.setPosition(_bookStats.getGlobalBounds().width / 4, _bookStats.getGlobalBounds().height / 3.3);
	}


	/* player Name*/
	_characterName.setFont(_data->assets.getFont("Main menu text"));
	_characterName.setString(_characterSelected);
	_characterName.setCharacterSize(128);
	_characterName.setFillColor(Color::Black);
	_characterName.setOrigin(0, _characterName.getGlobalBounds().height / 2);
	_characterName.setPosition(_bookStats.getGlobalBounds().width / 4.1, _bookStats.getGlobalBounds().height / 1.3);

	/* sprite pour le logo du score */
	_block = setRect(448, 256, 64, 64);
	_dollardSign.setTexture(_data->assets.getTexture("dollard sign"));
	_dollardSign.setTextureRect(_block);
	_dollardSign.setOrigin(_dollardSign.getGlobalBounds().width / 2, _dollardSign.getGlobalBounds().height / 2);
	_dollardSign.setPosition(_bookStats.getGlobalBounds().width/1.5, _bookStats.getGlobalBounds().height/3);

	/* score */
	_scoreFinal.setFont(_data->assets.getFont("Main menu text"));
	_scoreFinal.setString(_score);
	_scoreFinal.setCharacterSize(88);
	_scoreFinal.setFillColor(Color::Black);
	_scoreFinal.setOrigin(_scoreFinal.getGlobalBounds().width / 2, _scoreFinal.getGlobalBounds().height / 2);
	_scoreFinal.setPosition(_dollardSign.getPosition().x + 150, _dollardSign.getPosition().y - 30);

	/* retry sprite et texte*/
	_block = setRect(768, 896, 512, 128);
	_retryButton.setTexture(_data->assets.getTexture("Main menu button"));
	_retryButton.setTextureRect(_block);
	_retryButton.setOrigin(_retryButton.getGlobalBounds().width / 2, _retryButton.getGlobalBounds().height / 2);
	_retryButton.setPosition(_bookStats.getGlobalBounds().width / 1.4, _bookStats.getGlobalBounds().height / 2);

	_retry.setFont(_data->assets.getFont("Main menu text"));
	_retry.setString("RETRY");
	_retry.setCharacterSize(88);
	_retry.setFillColor(Color::White);
	_retry.setOrigin(_retry.getGlobalBounds().width / 2, _retry.getGlobalBounds().height / 2);
	_retry.setPosition(_retryButton.getPosition().x, _retryButton.getPosition().y - 20);

	/* exit sprite et text */
	_block = setRect(768, 896, 512, 128);
	_exitButton.setTexture(_data->assets.getTexture("Main menu button"));
	_exitButton.setTextureRect(_block);
	_exitButton.setOrigin(_exitButton.getGlobalBounds().width / 2, _exitButton.getGlobalBounds().height / 2);
	_exitButton.setPosition(_retryButton.getPosition().x, _retryButton.getPosition().y + 150);

	_exit.setFont(_data->assets.getFont("Main menu text"));
	_exit.setString("EXIT");
	_exit.setCharacterSize(88);
	_exit.setFillColor(Color::White);
	_exit.setOrigin(_exit.getGlobalBounds().width / 2, _exit.getGlobalBounds().height / 2);
	_exit.setPosition(_exitButton.getPosition().x , _exitButton.getPosition().y - 20 );
}

//fênetre qui reste ouverte tant qu'elle n'est pas fermée
void gameOverState::handleInput() {

	Event event;
	while (_data->window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			_data->window.close();
	}
}

//gere le delai, apres 3 secondes, on veut afficher la prochaine fenetre
void gameOverState::update(float dt) {
	if (_data->input.isSpriteClicked(_retryButton, Mouse::Left, _data->window)) {

		_data->machine.addState(stateRef(new characterSelectState(_data)), true);
	}
	else if (_data->input.isSpriteClicked(_exitButton, Mouse::Left, _data->window)) {
		_data->window.close();
	}
}

//clear, dessine le background et display la fenêtre. (dt n’est pas utilisé ici)
void gameOverState::draw(float dt) const {
	
	_data->window.clear();
	_data->window.draw(_background);
	_data->window.draw(_bookStats);
	_data->window.draw(_player);
	_data->window.draw(_characterName);
	_data->window.draw(_textResult);
	_data->window.draw(_scoreFinal);
	_data->window.draw(_dollardSign);
	_data->window.draw(_retryButton);
	_data->window.draw(_exitButton);
	_data->window.draw(_retry);
	_data->window.draw(_exit);
	_data->window.display();

}

/* set le block pour avec la position et la dimension dans la feuille de sprite */
IntRect gameOverState::setRect(float x, float y, int width, int height)
{
	IntRect newSprite;
	newSprite.left = x;
	newSprite.top = y;
	newSprite.width = width;
	newSprite.height = height;

	return newSprite;
}
