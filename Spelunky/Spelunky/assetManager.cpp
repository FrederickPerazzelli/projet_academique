#include "assetManager.h"
//load la texture et la met dans la map
void assetManager::loadTexture(string name, string fileName) {
	Texture tex;

	if (tex.loadFromFile(fileName))
	{
		_textures[name] = tex;
	}
}

//retourne la texture de la map correspondant au nom re�u
Texture& assetManager::getTexture(string name) {
	return _textures.at(name);
}

//load le font et le met dans la map
void assetManager::loadFont(string name, string fileName) {
	Font font;

	if (font.loadFromFile(fileName))
	{
		_fonts[name] = font;
	}
}

//retourne le font de la map correspondant au nom re�u
Font& assetManager::getFont(string name) {
	return _fonts.at(name);
}
