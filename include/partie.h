#ifndef PARTIE_H
#define PARTIE_H
#include"terrain.h"
#include<iostream>

class partie
{
public:
    partie(terrain * _terrain, int nombreDeBrique);
    virtual ~partie();
    bool partieEstGagner() const;
    int getNbbriques() const;
    void setEstGagner (bool gagner );
    terrain* getTerrain() const;
    void creerLesBriques();

private:
    bool d_estGangne;
    terrain* d_terrain;
    int d_nombreDeBrique;
};

#endif // PARTIE_H
