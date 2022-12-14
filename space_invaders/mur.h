/***************************
 *  Auteur :    Nicolas Garant
 *  Fichier :   mur.h
 *  Date :      13/05/2021
 *  But :
 ***************************/
#include <SFML/Graphics.hpp>

using namespace sf;

class mur {
private:
    RectangleShape _posMur;
    Texture _textureMur;
    IntRect _rectSprite;
    int _nbVies;
    const char* textMurs[13] = { "ressources/mur0.bmp", "ressources/mur1.bmp", "ressources/mur2.bmp",
                                "ressources/mur3.bmp", "ressources/mur4.bmp", "ressources/mur5.bmp",
                                "ressources/mur6.bmp", "ressources/mur7.bmp", "ressources/mur8.bmp",
                                "ressources/mur9.bmp", "ressources/mur10.bmp", "ressources/mur11.bmp", "ressources/mur12.bmp" };
    //    {"ressources/mur0.bmp", "ressources/mur1.bmp", "ressources/mur2.bmp",
    //     "ressources/mur3.bmp", "ressources/mur4.bmp", "ressources/mur5.bmp",
    //     "ressources/mur6.bmp", "ressources/mur7.bmp", "ressources/mur8.bmp",
    //     "ressources/mur9.bmp", "ressources/mur10.bmp", "ressources/mur11.bmp"};
public:
    mur();
    mur(int posX, int posY, int _w, int _h, IntRect rectSprinte, int texture);
    void init(int posX, int posY, int _w, int _h, IntRect rectSprinte, int texture);

    RectangleShape getRectangleShape() const;

    Vector2f getPosition() const;
    int getX();
    int getY();
    int getVies();

    void hit();

    IntRect getIntRect() const;

    Texture getTexture() const;

    void setRectangleShape(int posX, int posY, int _w, int _h);

    void setPosition(int posX, int posY);

    void setIntRect(IntRect intRect);

    void setTexture(int texture);

    void print(RenderWindow& window) const;
};
