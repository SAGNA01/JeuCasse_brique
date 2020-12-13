#ifndef BRIQUE_H
#define BRIQUE_H
#include"objetsReclangulaire.h"

class brique : public objetsReclangulaire
{
    public:
        brique(int positionX, int positionY, int largeur, int hauteur);
        bool getEtat() const;
        void setEtat();
    private:
        bool d_etat;
};

#endif // BRIQUE_H
