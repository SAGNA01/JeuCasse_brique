#ifndef RAQUETTEUI_H
#define RAQUETTEUI_H
#include<iostream>
#include "graphics.h"
#include "raquette.h"

class raquetteUI
{
public:
    raquetteUI();
    virtual ~raquetteUI();
    void  dessinerLaRaquette(const raquette& _raquette);
    void  miseAjourLaRaquette(const raquette& _raquette);
protected:

private:
};

#endif // RAQUETTEUI_H
