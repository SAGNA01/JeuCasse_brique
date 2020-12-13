#ifndef AFFICHAGEGRAPHIQUE_H
#define AFFICHAGEGRAPHIQUE_H

#include"balle.h"
#include "graphics.h"
#include "raquette.h"
#include "brique.h"
#include"terrain.h"
#include"partie.h"
class affichageGraphique
{
public:
    affichageGraphique();
    virtual ~affichageGraphique();
    void dessinerLaBalle(const balle& _balle);
    void dessinerLaRaquette(const raquette& _raquette);
    void miseAjourLaRaquette(const raquette& _raquette);
    void dessinerUneBrique( brique* _brique);
    void effacerLesBriqueCasses (terrain* _terrain );
    void dessinerLeTerrain( partie* _partie );
private:
};

#endif // AFFICHAGEGRAPHIQUE_H
