#include "menuAnimationState.h"

menuAnimationState::menuAnimationState(gameDataRef data) : _data(data)
{
}

void menuAnimationState::init()
{

	/* background du menu */
	_data->assets.loadTexture("Animation background", MENU_BACKGROUND_ANIMATION);
	_background.setTexture(_data->assets.getTexture("Animation background"));

	/* tentative d'animation */
	_data->assets.loadTexture("Menu door frame", MENU_DOOR_FRAME);
	_menuDoorFrame.setTexture(_data->assets.getTexture("Menu door frame"));
	_menuDoorFrame.setOrigin(_menuDoorFrame.getGlobalBounds().width / 2, _menuDoorFrame.getGlobalBounds().height / 2);
	_menuDoorFrame.setPosition(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);

	_data->assets.loadTexture("Menu door", MENU_DOOR);
	_menuDoor.setTexture(_data->assets.getTexture("Menu door"));
	_menuDoor.setOrigin(_menuDoor.getGlobalBounds().width / 2, _menuDoor.getGlobalBounds().height / 2);
	_menuDoor.setPosition((SCREEN_WIDTH / 2), SCREEN_HEIGHT / 2);

	_data->assets.loadTexture("Menu head", MENU_DOOR_HEAD);
	_menuHead.setTexture(_data->assets.getTexture("Menu head"));
	_menuHead.setOrigin(_menuHead.getGlobalBounds().width / 2, _menuHead.getGlobalBounds().height / 2);
	_menuHead.setPosition((SCREEN_WIDTH / 2), SCREEN_HEIGHT / 2);
}

void menuAnimationState::handleInput()
{
	Event event;
	while (_data->window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			_data->window.close();
	}
}

void menuAnimationState::update(float dt)
{
	while (_clock.getElapsedTime().asSeconds() < ANIMATION_SHOW_TIME)
	{
		draw(dt);
		_menuDoorFrame.setScale(_menuDoorFrame.getScale().x + 0.008 / 60, _menuDoorFrame.getScale().y + 0.008 / 60);
		_menuDoor.setScale(_menuDoor.getScale().x + 0.007 / 60, _menuDoor.getScale().y + 0.008 / 60);
		_menuHead.setScale(_menuHead.getScale().x + 0.007 / 60, _menuHead.getScale().y + 0.008 / 60);
		_menuDoor.setRotation(_menuDoor.getRotation() + 0.01);
		_menuHead.setRotation(_menuHead.getRotation() + 0.01);
		_menuDoor.setPosition(_menuDoor.getPosition().x + 0.26, _menuDoor.getPosition().y);
		_menuHead.setPosition(_menuHead.getPosition().x + 0.26, _menuHead.getPosition().y);
	
		if (_clock.getElapsedTime().asSeconds() > ANIMATION_SHOW_TIME) {
			_data->machine.addState(stateRef(new mainMenuState(_data)), true);
		}
	}
}

void menuAnimationState::draw(float dt) const
{
	_data->window.clear();
	_data->window.draw(_background);
	_data->window.draw(_menuDoorFrame);
	_data->window.draw(_menuDoor);
	_data->window.draw(_menuHead);
	_data->window.display();
}
