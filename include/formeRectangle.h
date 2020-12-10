#ifndef FORMERECTANGLE_H
#define FORMERECTANGLE_H


class formeRectangle
{
    public:
        formeRectangle(int positionX, int positionY, int largeur, int hauteur);
        ~formeRectangle() = default;

        int getPositionX() const;
        int getPositionY() const;
        int getLargeur() const;
        int getHauteur() const;

        void setPositionX(int px);
        void setPositionY(int py);
        void setLargeur(int largeur);
        void setHauteur(int hauteur);
    protected:
        int d_positionX;
        int d_positionY;
        double d_largeur;
        double d_hauteur;
};

#endif // FORMERECTANGLE_H
