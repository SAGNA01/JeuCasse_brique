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
    delay(1);
    setcolor(BLACK);
    circle(_balle.getPositionX(),_balle.getPositionY(),_balle.getRayon());
    floodfill(_balle.getPositionX(),_balle.getPositionY(),BLACK);

}


