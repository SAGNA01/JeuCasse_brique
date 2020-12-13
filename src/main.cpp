#include <iostream>
#include <conio.h>
#include "math.h"
#include "graphics.h"
#include"balle.h"

#include"terrain.h"
#include"raquette.h"
#include"brique.h"

#include"affichageGraphique.h"
#include"partie.h"


#define KEY_UP    72
#define KEY_LEFT  113
#define KEY_RIGHT 100
#define KEY_DOWN  80
using namespace std;

int main(int argc, char** argv)
{

    opengraphsize(500,500);
    setcolor(RED);
    raquette r{0,0,75,10,4};
    affichageGraphique uI{};
    balle b{};

    terrain* t ;
    t= new terrain (300,450) ;
    partie* p;
    p = new partie(t,60);




    uI.dessinerLaRaquette(r);

    uI.dessinerLeTerrain(p);
    std::cout << "nb ->" << p->getTerrain()->getBriques().size();
    int c = 0;
    while(true)
    {
        if ( kbhit() )
        {
            c = 0;
            switch((c=getch()))
            {
            case KEY_LEFT:
                uI.miseAjourLaRaquette(r);
                r.deplacerGauche(t);
                uI.dessinerLaRaquette(r);
                break;
            case KEY_RIGHT:
                uI.miseAjourLaRaquette(r);
                r.deplacerDroite(t);
                uI.dessinerLaRaquette(r);

                break;
            default:

                break;
            }

        }

        uI.dessinerLaBalle(b);
        b.rebond(t,r);
        b.deplacement();
        uI.effacerLesBriqueCasses(t);

    }


    getch();
    closegraph();
    return 0;
}
