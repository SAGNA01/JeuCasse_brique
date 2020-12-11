#include <iostream>
#include <conio.h>
#include "math.h"
#include "graphics.h"
#include"balle.h"
#include"balleUI.h"
#include"formeRectangle.h"
#include"terrain.h"
#include"raquette.h"
#include"raquetteUI.h"



#define KEY_UP    72
#define KEY_LEFT  113
#define KEY_RIGHT 100
#define KEY_DOWN  80
using namespace std;

int main(int argc, char** argv)
{

    opengraphsize(500,500);
    setcolor(RED);
    raquette r{0,0,75,10};
    raquetteUI rUI{};
    balle b{};
    balleUI ui{};
    terrain t{300,450} ;
    rectangle(0,450,300,0);
    rUI.dessinerLaRaquette(r);
    int c = 0;
    while(true)
    {

     if ( kbhit() )
     {


        c = 0;
        switch((c=getch()))
        {
        case KEY_LEFT:
            rUI.miseAjourLaRaquette(r);
            r.deplacerGauche(t);
            rUI.dessinerLaRaquette(r);
            break;
        case KEY_RIGHT:
            rUI.miseAjourLaRaquette(r);
            r.deplacerDroite(t);
            rUI.dessinerLaRaquette(r);

            break;
        default:

            break;
        }

    }

        ui.dessinerLaBalle(b);
        b.rebond(t,r);
        b.deplacement();






    }


    getch();
    closegraph();
    return 0;
}
