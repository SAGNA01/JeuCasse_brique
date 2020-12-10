#ifndef TERRAIN_H
#define TERRAIN_H
#include<vector>

#include"formeRectangle.h"


class terrain : public formeRectangle
{
    public:
        terrain( int largeur, int hauteur);
      //  terrain( std::vector<formeRectangle*> briques);
        ~terrain();
    private:

        std::vector<formeRectangle*> m_briques;
};

#endif // TERRAIN_H
