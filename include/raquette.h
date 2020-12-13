#ifndef RAQUETTE_H
#define RAQUETTE_H
#include "objetsReclangulaire.h"
#include "terrain.h"

class raquette : public objetsReclangulaire
{
    public:
        raquette();
        raquette(int positionX, int positionY, int largeur, int hauteur, int pasDeplacement);
        void deplacerGauche(terrain* _terrain);
        void deplacerDroite(terrain* _terrain);
    private:
        int d_pasDeplacement;

};

#endif // RAQUETTE_H
