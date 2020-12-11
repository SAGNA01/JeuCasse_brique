#include "raquetteUI.h"

raquetteUI::raquetteUI()
{
    //ctor
}

raquetteUI::~raquetteUI()
{
    //dtor
}

void raquetteUI::dessinerLaRaquette(const raquette& _raquette)
{
    setcolor(YELLOW);
    rectangle(_raquette.getPositionX(),_raquette.getHauteur(),_raquette.getPositionX()+_raquette.getLargeur(),_raquette.getHauteur());
}
void raquetteUI::miseAjourLaRaquette(const raquette& _raquette)
{
     setfillstyle(SOLID_FILL,BLACK);
     rectangle(_raquette.getPositionX(),_raquette.getHauteur(),_raquette.getPositionX()+_raquette.getLargeur(),_raquette.getHauteur());
}
