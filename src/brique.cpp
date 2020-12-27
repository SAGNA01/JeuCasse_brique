#include "brique.h"

brique::brique(int positionX, int positionY, int largeur, int hauteur) : objetsReclangulaire{positionX,
                                                                         positionY, largeur, hauteur}, d_etat{true}
{

}

bool brique::getEtat() const
{
   return  d_etat ;
}

void brique::setEtat()
{
    d_etat  = false ;
}

