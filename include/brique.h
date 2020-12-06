#ifndef BRIQUE_H
#define BRIQUE_H
#include"formeRectangle.h"

class brique : public formeRectangle
{
    public:
        brique(int x, int y, double largeur, double hauteur);
        //void collusion(balle& balle);
    private:
        bool d_etat;
};

#endif // BRIQUE_H
