#include "objetsReclangulaire.h"


objetsReclangulaire::objetsReclangulaire(int positionX, int positionY, int largeur, int hauteur) : d_positionX{positionX},
                                                                                                   d_positionY{positionY},
                                                                                                   d_largeur{largeur},
                                                                                                   d_hauteur{hauteur}
{

}

int objetsReclangulaire::getPositionX() const
{
    return d_positionX;
}

int objetsReclangulaire::getPositionY() const
{
    return d_positionY;
}

int objetsReclangulaire::getLargeur() const
{
    return d_largeur;
}

int objetsReclangulaire::getHauteur() const
{
    return d_hauteur;
}

void objetsReclangulaire::setPositionX(int position_x)
{
    d_positionX = position_x;
}

void objetsReclangulaire::setPositionY(int position_y)
{
    d_positionY = position_y;
}

void objetsReclangulaire::setLargeur(int largeur)
{
    d_largeur = largeur;
}

void objetsReclangulaire::setHauteur(int hauteur)
{
    d_hauteur = hauteur;
}

