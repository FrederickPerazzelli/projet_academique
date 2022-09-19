#include "inputManager.h"
//v�rifie si on a cliqu� sur le sprite de la fen�tre re�us en param�tre
bool inputManager::isSpriteClicked(const Sprite& object, Mouse::Button button, RenderWindow& window) {
	if (Mouse::isButtonPressed(button)) {
		IntRect tempRect(object.getPosition().x, object.getPosition().y, object.getGlobalBounds().width, object.getGlobalBounds().height);
		if (tempRect.contains(Mouse::getPosition(window))) {
			return true;
		}
	}
	return false;
}

//retourne la position de la souris de la fen�tre recue en param�tre
Vector2i inputManager::getMousePosition(RenderWindow& window) const {
	return Mouse::getPosition(window);
}

bool inputManager::isInteractKeyPressed(){
	if (Mouse::isButtonPressed(Mouse::Left)){
		return true;
	}
	else
		return false;
}

bool inputManager::isThrowKeyPressed() {
	if (Mouse::isButtonPressed(Mouse::Right)) {
		return true;
	}
	else
		return false;
}

bool inputManager::isMovementKeyPressed(){

	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		return true;
	}

	else if (Keyboard::isKeyPressed(Keyboard::S))
	{
		return true;
	}

	else if (Keyboard::isKeyPressed(Keyboard::D))
	{
		return true;
	}

	else if (Keyboard::isKeyPressed(Keyboard::Space))
	{
		return true;
	}

	else if (Mouse::isButtonPressed(Mouse::Left))
	{
		return true;
	}
	
}

Vector2f inputManager::direction(bool isOnGround) const{

	//peut seulement sauter si au sol
	if (Keyboard::isKeyPressed(Keyboard::A) && Keyboard::isKeyPressed(Keyboard::Space) && isOnGround == true) {
		return Vector2f(-1.f, -1.f);
	}

	//peut seulement sauter si au sol
	else if (Keyboard::isKeyPressed(Keyboard::D) && Keyboard::isKeyPressed(Keyboard::Space) && isOnGround == true) {
		return Vector2f(1.f, -1.f);
	}

	else if (Keyboard::isKeyPressed(Keyboard::Space) && isOnGround == true) {
		return Vector2f(0.f, -1.f);
	}

	else if (Keyboard::isKeyPressed(Keyboard::S) && Keyboard::isKeyPressed(Keyboard::D)) {
		return Vector2f(1.f, 1.f);
	}

	else if (Keyboard::isKeyPressed(Keyboard::S) && Keyboard::isKeyPressed(Keyboard::A)) {
		return Vector2f(-1.f, 1.f);
	}

	else if (Keyboard::isKeyPressed(Keyboard::A)) {
		return Vector2f(-1.f, 0.f);
	}

	else if (Keyboard::isKeyPressed(Keyboard::S)) {
		return Vector2f(0.f, 1.f);
	}

	else if (Keyboard::isKeyPressed(Keyboard::D)) {
		return Vector2f(1.f, 0.f);
	}
	else
		return Vector2f(0.f, 0.f);
	//devrait pas avoir besoin de �a, mais �a cause des access violations sinon.
	//Le input n'est pas detect� � CHAQUE frame, ce qui veut dire que si on entre dans cette methode pendant un frame ou l'input n'est
	//pas detect�, aucune condition ne sera rempli et �a plante
	

}
