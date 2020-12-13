#ifndef OBJETSRECLANGULAIRE_H
#define OBJETSRECLANGULAIRE_H
#include "objetsDuJeu.h"

class objetsReclangulaire : public objetsDuJeu
{
    public:
        objetsReclangulaire(int positionX, int positionY, int largeur, int hauteur);
        ~objetsReclangulaire() = default;

        virtual int getPositionX() const override;
        virtual int getPositionY() const override;
        virtual int getLargeur() const;
        virtual int getHauteur() const;

        virtual void setPositionX(int position_x) override;
        virtual void setPositionY(int position_y) override;
        void setLargeur(int largeur);
        void setHauteur(int hauteur);
    protected:
        int d_positionX;
        int d_positionY;
        double d_largeur;
        double d_hauteur;
};

#endif // OBJETSRECLANGULAIRE_H
