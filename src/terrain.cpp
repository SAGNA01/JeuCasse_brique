#include "terrain.h"
#include"iostream"
terrain::terrain(int largeur, int hauteur) : objetsReclangulaire{0, 0, largeur, hauteur}
{

}

terrain::~terrain()
{

}

int terrain::nombreDeBriques() const
{
    return  d_briques.size();
}

void terrain::ajouterUneBrique( brique* _brique)
{
    d_briques.push_back(_brique);


}

int terrain::nombreDeBriquesNonCassee() const
{
    int nb=0;
    for(const auto& brique: this->getBriques())
    {
        if (brique->getEtat())
        {
            nb++;
        }
    }
    return nb;
}

std::vector <brique*> terrain::getBriques() const
{
    return d_briques ;
}
