#ifndef BALL_H
#define BALL_H
#include<vector>
#include <iostream>
#include "terrain.h"
#include "raquette.h"
#include "brique.h"


class balle
{
    friend class  brique;
    public:
        balle();
        balle(int positionX, int positionY, int vitesse,int angle, int rayon);
        int getPositionX()const;
        int getPositionY()const;
        int getVitesse()const;
        int getAngle() const;
        int getRayon()const;

        void setPositionX(int positionX) ;
        void setPositionY(int positionY) ;
        void setVitesse(int vitesse);
        void setAngle(int angle);
        void setRayon(int rayon);

        void deplacement();
        // rebondissement de la balle pour casser les briques
        void rebond(terrain* _terrain, const raquette& _raquette);

    private:
        int d_positionX;
        int d_positionY;
        int d_vitesse;
        int d_angle;
        int d_rayon;
};
#endif
