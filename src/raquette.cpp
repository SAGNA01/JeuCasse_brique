#include "raquette.h"
#include "graphics.h"


raquette::raquette(int positionX, int positionY, int largeur, int hauteur, int pasDeplacement) : objetsReclangulaire{positionX,
                                                                                                 positionY, largeur, hauteur},
                                                                                                 d_pasDeplacement{pasDeplacement}

{

}

void raquette::deplacerGauche(terrain* _terrain)
{
    if (this->getPositionX() > _terrain->getPositionX())
    {
        this->setPositionX( this->getPositionX() - d_pasDeplacement);
    }
}

void raquette::deplacerDroite( terrain* _terrain)
{
    if (this->getPositionX() <  (_terrain->getLargeur() - this->getLargeur()) )
    {
        this->setPositionX( this->getPositionX() + d_pasDeplacement) ;
    }

}
