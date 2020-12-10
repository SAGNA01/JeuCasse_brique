#ifndef MUR_H
#define MUR_H


class mur
{
    public:
        mur(int longueur, int largeur);
        int getLongueur() const;
        int getLargeur() const;
        ~mur();
    private:
        int d_longueur;
        int d_largeur;
};

#endif // MUR_H
