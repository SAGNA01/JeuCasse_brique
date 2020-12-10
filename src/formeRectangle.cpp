#include "formeRectangle.h"

formeRectangle::formeRectangle(int positionX, int positionY, int largeur, int hauteur) : d_positionX{positionX},
                                                                                         d_positionY{positionY},
                                                                                         d_largeur{largeur},
                                                                                         d_hauteur{hauteur}
{

}

int formeRectangle::getPositionX() const
{
    return d_positionX;
}

int formeRectangle::getPositionY() const
{
    return d_positionY;
}

int formeRectangle::getLargeur() const
{
    return d_largeur;
}

int formeRectangle::getHauteur() const
{
    return d_hauteur;
}

void formeRectangle::setPositionX(int position_x)
{
    d_positionX = position_x;
}

void formeRectangle::setPositionY(int position_y)
{
    d_positionY = position_y;
}
void formeRectangle::setLargeur(int largeur)
{
    d_largeur = largeur;
}

void formeRectangle::setHauteur(int hauteur)
{
    d_hauteur = hauteur;
}
