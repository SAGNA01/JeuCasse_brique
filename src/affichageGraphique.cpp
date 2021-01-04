#include "affichageGraphique.h"

const int LARGEUR_BRIQUE = 50;
const int HAUTEUR_BRIQUE = 15;
const int DIS_HORIZ_ENTRE_BRIQUE = 5;

const int LARGEUR_TERRAIN = 55;
const int HAUTEUR_TERRAIN = 17;


affichageGraphique::affichageGraphique()
{

}

affichageGraphique::~affichageGraphique()
{

}
void affichageGraphique::dessinerLaBalle(const balle& _balle)
{
    setcolor(BLUE);
    circle(_balle.getPositionX(),_balle.getPositionY(),_balle.getRayon());
    floodfill(_balle.getPositionX(),_balle.getPositionY(),BLUE);
    delay(1);
    setcolor(BLACK);
    circle(_balle.getPositionX(),_balle.getPositionY(),_balle.getRayon());
    floodfill(_balle.getPositionX(),_balle.getPositionY(),BLACK);

}
void affichageGraphique::dessinerLaRaquette(const raquette& _raquette)
{
    setcolor(YELLOW);
    rectangle(_raquette.getPositionX(),_raquette.getHauteur(),_raquette.getPositionX()+_raquette.getLargeur(),_raquette.getHauteur());
}

void affichageGraphique::miseAjourLaRaquette(const raquette& _raquette)
{

    setcolor(BLACK);
    rectangle(_raquette.getPositionX(),_raquette.getHauteur(),_raquette.getPositionX()+_raquette.getLargeur(),_raquette.getHauteur());

}
void affichageGraphique::dessinerUneBrique( brique* _brique)
{
    setcolor(YELLOW);
    rectangle(_brique->getPositionX(),_brique->getPositionY(),_brique->getPositionX()+_brique->getLargeur(),_brique->getPositionY()+_brique->getHauteur());
}
void affichageGraphique::effacerLesBriqueCasses(terrain* _terrain)
{
    for( auto& _brique: _terrain->getBriques())
    {
        if (_brique->getEtat() == false)
        {
            setcolor(BLACK);
            rectangle(_brique->getPositionX(),_brique->getPositionY(),_brique->getPositionX()+_brique->getLargeur(),_brique->getPositionY()+_brique->getHauteur());
        }
    }
}

void affichageGraphique::dessinerLeTerrain( partie* _partie )
{
    rectangle(0,_partie->getTerrain()->getHauteur(),_partie->getTerrain()->getLargeur(),0);
    int x_init = _partie->getTerrain()->getLargeur() - LARGEUR_TERRAIN;
    int y_init = _partie->getTerrain()->getHauteur() - HAUTEUR_TERRAIN;
    for (int  i = 0; i <_partie->getNbbriques(); ++i)
    {
        brique* _brique;
        _brique = new brique(x_init,y_init,LARGEUR_BRIQUE, HAUTEUR_BRIQUE);
        if (x_init >= LARGEUR_BRIQUE )
        {
            _partie->getTerrain()->ajouterUneBrique( _brique );
            x_init = x_init - (LARGEUR_BRIQUE + DIS_HORIZ_ENTRE_BRIQUE) ;
        }
        else
        {
            x_init = _partie->getTerrain()->getLargeur()- LARGEUR_TERRAIN;
            y_init = y_init - HAUTEUR_TERRAIN;
        }
        this->dessinerUneBrique(_brique);
    }
}




