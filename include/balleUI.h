#ifndef BALLEUI_H
#define BALLEUI_H
#include"balle.h"
#include "graphics.h"
#include "raquette.h"
class balleUI
{
    public:
        balleUI();
        virtual ~balleUI();
        void  dessinerLaBalle(const balle& _balle);
        void  dessinerLaRaquette(const raquette& r);
    protected:

    private:
};

#endif // BALLEUI_H
