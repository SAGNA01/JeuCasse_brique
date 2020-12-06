#ifndef RAQUETTE_H
#define RAQUETTE_H
#include "formeRectangle.h"

class raquette : public formeRectangle
{
    public:
        raquette(int x, int y, double largeur, double hauteur);
        void deplace();
    private:

};

#endif // RAQUETTE_H
