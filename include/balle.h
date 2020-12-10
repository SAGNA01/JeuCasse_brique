#ifndef BALL_H
#define BALL_H
#include"terrain.h"
#include <iostream>
#include"terrain.h"
class balle
{
private:
    int d_vitesse;
    int d_positionX;
    int d_positionY;
    int d_angle;
    int d_rayon;

public:
      balle();
     int getVitesse()const;
     int getPositionX()const;
     int getPositionY()const;
     int getAngle() const;
     int getRayon()const;
    void setVitesse(int vitesse);
    void setPositionX(int positionX);
    void setPositionY(int positionY);
    void setAngle(int angle);
    void setRayon(int rayon);
    void deplacement();
    void rebond(const terrain&);

};
#endif
