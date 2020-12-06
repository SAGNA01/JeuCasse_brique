#include "formeRectangle.h"

formeRectangle::formeRectangle(int x, int y, double largeur, double hauteur) : d_x{x}, d_y{y}, d_largeur{largeur},
                                                                               d_hauteur{hauteur}
{

}

int formeRectangle::getX() const
{
    return d_x;
}

int formeRectangle::getY() const
{
    return d_y;
}

double formeRectangle::getLargeur() const
{
    return d_largeur;
}

double formeRectangle::getHauteur() const
{
    return d_hauteur;
}

