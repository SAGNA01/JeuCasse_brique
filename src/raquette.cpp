#include "raquette.h"
#include "graphics.h"


raquette::raquette(int positionX, int positionY, int largeur, int hauteur) : formeRectangle{positionX, positionY,
            largeur, hauteur}
{

}



void raquette::deplacerGauche(const terrain& _terrain)
{
    if (this->getPositionX() > 0)
    {
        this->setPositionX( this->getPositionX()-1);
    }
}

void raquette::deplacerDroite(const terrain& _terrain)
{
    if (this->getPositionX()<  (_terrain.getLargeur()  - this->getLargeur()) )
    {
        this->setPositionX( this->getPositionX()+1) ;
    }

}
