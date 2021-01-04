#ifndef TERRAIN_H
#define TERRAIN_H
#include<vector>
#include"objetsReclangulaire.h"
#include"brique.h"



class terrain : public objetsReclangulaire
{
    public:
        terrain(int positionX, int positionY,int largeur, int hauteur);
        int nombreDeBriques () const;
        void ajouterUneBrique( brique* _brique);
        std::vector<brique*> getBriques () const;
        int nombreDeBriquesNonCassee() const;
    private:
        std::vector<brique*> d_briques;
};

#endif // TERRAIN_H
