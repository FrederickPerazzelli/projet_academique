#include "collision.h"

bool collision::checkTopCollision(RectangleShape collisionBoxPart, Sprite terrain) const {
	Rect<float> rect1 = collisionBoxPart.getGlobalBounds();
	Rect<float> rect2 = terrain.getGlobalBounds();

	rect2.height *= -1;
	rect2.top = terrain.getGlobalBounds().height + terrain.getPosition().y;

	return rect1.intersects(rect2); 
}

bool collision::checkBottomCollision(RectangleShape collisionBoxPart, Sprite terrain) const{
	Rect<float> rect1 = collisionBoxPart.getGlobalBounds();
	Rect<float> rect2 = terrain.getGlobalBounds();
	
	return rect1.intersects(rect2);
}

bool collision::checkLeftCollision(RectangleShape collisionBoxPart, Sprite terrain) const {
	Rect<float> rect1 = collisionBoxPart.getGlobalBounds();
	Rect<float> rect2 = terrain.getGlobalBounds();

	rect1.width = -20;
	rect2.width *= -1;

	rect2.left = terrain.getPosition().x + terrain.getGlobalBounds().width;

	return rect1.intersects(rect2);
}

bool collision::checkRightCollision(RectangleShape collisionBoxPart, Sprite terrain) const{
	Rect<float> rect1 = collisionBoxPart.getGlobalBounds();
	Rect<float> rect2 = terrain.getGlobalBounds();

	rect1.width = 20;
	rect2.width *= 1;

	return rect1.intersects(rect2);
}

void collision::checkCollision(entity* entity, room* room) const {

    Vector2f posEntity;
    vector<tiles*> tilesSprites;
    int collidingTile;
    posEntity = (entity->getPosition());                    // position en pixel
    posEntity.y -= entity->getSprite().getOrigin().y / 2;   // deplace le point ou l'on regarde a la place des pieds du personnage
    posEntity.x = posEntity.x / 128;                        // met la coordonne en tuiles 
    posEntity.y = posEntity.y / 128;                        // met la coordonne en tuiles 

    tilesSprites = room->collision(posEntity);             // va chercher le vecteur de tuiles autour de l'entity

    if (tilesSprites.size() > 0) {

        if (tilesSprites[1]->isValid()) // deuxieme tuile du vecteur est toujours celle a gauche ou a droite de l'entity
        {
            if (checkLeftCollision(entity->getCollisionBox()[2], tilesSprites[1]->getSpriteTiles())) {
                collidingTile = checkLeftCollision(entity->getCollisionBox()[2], tilesSprites[1]->getSpriteTiles());
                entity->collidingLeft(entity->getType(), tilesSprites[1]->getSpriteTiles());
            }
            else if (checkRightCollision(entity->getCollisionBox()[3], tilesSprites[1]->getSpriteTiles())) {
                collidingTile = checkRightCollision(entity->getCollisionBox()[3], tilesSprites[1]->getSpriteTiles());
                entity->collidingRight(entity->getType(), tilesSprites[1]->getSpriteTiles());
            }
        }
        else {
            for (int i = 2; i < tilesSprites.size(); i++) // troisieme et quatrieme tuiles du vecteur sont toujours    
            {                                             // ceux en haut ou en bas de l'entity
                if (tilesSprites[i]->isValid())
                {
                    if (checkTopCollision(entity->getCollisionBox()[0], tilesSprites[i]->getSpriteTiles())) {
                        entity->collidingTop(entity->getType(), tilesSprites[i]->getSpriteTiles());
                    }
                    else if (checkBottomCollision(entity->getCollisionBox()[1], tilesSprites[i]->getSpriteTiles())) {
                        entity->collidingBottom(entity->getType(), tilesSprites[i]->getSpriteTiles());
                    }
                }
            }
        }
    }
    tilesSprites.clear();
}

bool collision::checkWhipCollision(Sprite whip, Sprite entity){
	Rect<float> whipRect = whip.getGlobalBounds();
	Rect<float> entityRect = entity.getGlobalBounds();

	return whipRect.intersects(entityRect);
	
}

bool collision::checkScoringItemCollision(Sprite item, Sprite entity){
	Rect<float> itemRect = item.getGlobalBounds();
	Rect<float> entityRect = entity.getGlobalBounds();

	return itemRect.intersects(entityRect);
}


bool collision::checkSpriteCollision(Sprite sprite1, float scale1, Sprite sprite2, float scale2)const {
	sprite1.setScale(scale1, scale1);
	sprite2.setScale(scale2, scale2);
	
	Rect<float> rect1 = sprite1.getGlobalBounds();
	Rect<float> rect2 = sprite2.getGlobalBounds();

	return rect1.intersects(rect2);
}