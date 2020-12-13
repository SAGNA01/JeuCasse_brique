#ifndef BALL_H
#define BALL_H
#include<vector>
#include <iostream>
#include "terrain.h"
#include "raquette.h"
#include "brique.h"
#include "objetsDuJeu.h"


class balle : public objetsDuJeu
{
    friend class  brique;
    public:
        balle();
        balle(int positionX, int positionY, int vitesse,int angle, int rayon);
        virtual int getPositionX()const override;
        virtual int getPositionY()const override;
        int getVitesse()const;
        int getAngle() const;
        int getRayon()const;

        virtual void setPositionX(int positionX) override;
        virtual void setPositionY(int positionY) override;
        void setVitesse(int vitesse);
        void setAngle(int angle);
        void setRayon(int rayon);

        void deplacement();
        // rebondissement de la balle pour casser les briques
        void rebond( terrain* _terrain, const raquette& _raquette);

    private:
        int d_positionX;
        int d_positionY;
        int d_vitesse;
        int d_angle;
        int d_rayon;
};
#endif
