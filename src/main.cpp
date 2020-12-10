#include <iostream>
#include "math.h"
#include "graphics.h"
#include"balle.h"
#include"balleUI.h"
#include"formeRectangle.h"
#include"terrain.h"
#include"raquette.h"
using namespace std;

int main(int argc, char** argv)
{

    opengraphsize(500,500);
    setcolor(RED);

    balle b{};
    balleUI ui{};
    rectangle(0,450,350,0);
    while(true)
    {


        ui.dessinerLaBalle(b);
        b.rebond();
        b.deplacement();






    }


    getch();
    closegraph();
    return 0;
}
