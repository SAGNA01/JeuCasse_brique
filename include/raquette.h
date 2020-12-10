#ifndef RAQUETTE_H
#define RAQUETTE_H
#include "formeRectangle.h"

class raquette : public formeRectangle
{
    public:
        raquette();
        raquette(int positionX, int positionY, int largeur, int hauteur);
        void deplacerGauche();
        void deplacerDroite();
    private:


};

#endif // RAQUETTE_H
