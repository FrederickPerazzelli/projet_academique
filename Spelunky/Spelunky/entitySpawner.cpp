#include "entitySpawner.h"

entitySpawner::entitySpawner(gameDataRef data, room* room) : _data(data) {

	_room = room;

}

entitySpawner::~entitySpawner(){
	delete _room;
}

list<item*> entitySpawner::generateItems(string sprite){

	_data->assets.loadTexture(sprite, ITEM_SHEET);

	_itItems = _items.begin();
	_items.insert(_itItems, new item(_data));

	return _items;
}

list<scoringItem*> entitySpawner::generateScoringItems(string sprite){

	_data->assets.loadTexture(sprite, ITEM_SHEET);

	_itScoringItems = _scoringItems.begin();
	_scoringItems.insert(_itScoringItems, new scoringItem(_data));

	return _scoringItems;
}

list<spider*> entitySpawner::generateSpiders(string sprite){
	_data->assets.loadTexture(sprite, ENEMY_SPIDER_SPRITE);

	_itSpiders = _spiders.begin();
	_spiders.insert(_itSpiders, new spider(_data));

	return _spiders;
}

list<bat*> entitySpawner::generateBats(string sprite){
	_data->assets.loadTexture(sprite, ENEMY_BAT_SPRITE);

	_itBats = _bats.begin();
	_bats.insert(_itBats, new bat(_data));

	for (_itBats = _bats.begin(); _itBats != _bats.end(); _itBats++) {
		(*_itBats)->setStanding();
	}
	
	return _bats;
}
