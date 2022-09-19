#include "camera.h"

camera::camera(gameDataRef data) : _data(data) {
	setCamera();
}

void camera::setCamera(){
	_view.setSize(_data->window.getSize().x, _data->window.getSize().y);
}

void camera::updateCamera(Vector2f characterLocation){
	_view.setCenter(characterLocation);
	_data->window.setView(_view);
}
