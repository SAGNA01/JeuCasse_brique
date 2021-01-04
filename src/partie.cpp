#include "partie.h"
#include "brique.h"
partie::partie( terrain* _terrain,int  nombreDeBrique):d_terrain{_terrain},d_nombreDeBrique{nombreDeBrique}
{

}
partie::~partie()
{

}

bool partie::partieEstGagner() const
{
   return d_estGangne ;
}
int partie::getNbbriques() const
{
    return d_nombreDeBrique;
}
void partie::setEstGagner(bool gagner)
{
   d_estGangne  = gagner ;
}
terrain* partie::getTerrain() const
{
    return this->d_terrain;
}

void partie::creerLesBriques()
{
    int x_init = this->getTerrain()->getLargeur();
    int y_init = this->getTerrain()->getHauteur() -15;

    for (int  i = 0; i <this->getNbbriques(); i++)
    {
       brique _brique{x_init,y_init,50,15};
       if (x_init > 50 )
      {
       this->getTerrain()->ajouterUneBrique(&_brique );
       x_init = x_init - 50 ;

      } else
      {
        x_init = this->getTerrain()->getLargeur();
        y_init =y_init +15 ;
      }
    }
}


