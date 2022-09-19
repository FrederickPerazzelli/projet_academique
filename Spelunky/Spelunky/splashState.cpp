#include "splashState.h"
//le constructeur utilise les : pour initialiser _data avant même l'execution du contenu{}
splashState::splashState(gameDataRef data) : _data(data) {
}

//load l’image du background à l’aide du assetManager ds _data et la set au Sprite
void splashState::init() {
	_data->assets.loadTexture("logo state background", LOGO_STATE_BACKGROUND);
	_background.setTexture(_data->assets.getTexture("logo state background"));

	/* view */
	//_viewLogo.setSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	//_viewLogo.setCenter(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
	//_viewLogo.setViewport(FloatRect(0.10, 0.10, 0.75, 0.75));
	//_data->window.setView(_viewLogo);
}

//fênetre qui reste ouverte tant qu'elle n'est pas fermée
void splashState::handleInput() {
	Event event;
	while (_data->window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			_data->window.close();
	}
}

//gere le delai, apres 3 secondes, on veut afficher la prochaine fenetre
void splashState::update(float dt) {
	
	if (_clock.getElapsedTime().asSeconds() > LOGO_SHOW_TIME)
	{
		//todo call the menu state
		_data->machine.addState(stateRef(new menuAnimationState(_data)), true);
		//cout << "go to the main menu" << endl;
	}
}

//clear, dessine le background et display la fenêtre. (dt n’est pas utilisé ici)
void splashState::draw(float dt) const {
	_data->window.clear();
	_data->window.draw(_background);
	_data->window.display();
}