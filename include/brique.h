#ifndef BRIQUE_H
#define BRIQUE_H
#include"formeRectangle.h"

class brique : public formeRectangle
{
    public:

        brique(int positionX, int positionY, int largeur, int hauteur);

    private:
        bool d_etat;
};

#endif // BRIQUE_H
