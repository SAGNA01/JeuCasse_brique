#include "balleUI.h"

balleUI::balleUI()
{

}

balleUI::~balleUI()
{

}

void balleUI::dessinerLaBalle(const balle& _balle)
{
    setcolor(BLUE);
    circle(_balle.getPositionX(),_balle.getPositionY(),_balle.getRayon());
    floodfill(_balle.getPositionX(),_balle.getPositionY(),BLUE);
    delay(200);
    setcolor(BLACK);
    circle(_balle.getPositionX(),_balle.getPositionY(),_balle.getRayon());
    floodfill(_balle.getPositionX(),_balle.getPositionY(),BLACK);

}

void balleUI::dessinerLaRaquette(const raquette& r)
{
    int x = r.getPositionX();
    int y = r.getPositionY();
    int largeur = r.getLargeur();
    int hauteur = r.getHauteur();

    rectangle(x,y,largeur, hauteur);
    floodfill(x,y,YELLOW);

}
