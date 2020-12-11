#ifndef RAQUETTE_H
#define RAQUETTE_H
#include "formeRectangle.h"
#include "terrain.h"

class raquette : public formeRectangle
{
    public:
        raquette();
        raquette(int positionX, int positionY, int largeur, int hauteur);
        void deplacerGauche(const terrain& _terrain);
        void deplacerDroite(const terrain& _terrain);
    private:


};

#endif // RAQUETTE_H
