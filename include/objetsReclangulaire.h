#ifndef OBJETSRECLANGULAIRE_H
#define OBJETSRECLANGULAIRE_H

class objetsReclangulaire
{
    public:
        objetsReclangulaire(int positionX, int positionY, int largeur, int hauteur);
        ~objetsReclangulaire() = default;

        virtual int getPositionX() const;
        virtual int getPositionY() const;
        virtual int getLargeur() const;
        virtual int getHauteur() const;

        virtual void setPositionX(int position_x);
        virtual void setPositionY(int position_y);
        virtual void setLargeur(int largeur);
        virtual void setHauteur(int hauteur);
    protected:
        int d_positionX;
        int d_positionY;
        int d_largeur;
        int d_hauteur;
};

#endif // OBJETSRECLANGULAIRE_H
