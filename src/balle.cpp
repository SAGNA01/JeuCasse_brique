#include "balle.h"
#include "listeAngles.h"

balle::balle():d_vitesse{1},d_positionX{200},d_positionY{0},d_angle{145},d_rayon{15}
{
}
int balle::getVitesse() const
{
    return d_vitesse;
}
int balle::getPositionX() const
{
    return d_positionX;
}
int balle::getPositionY() const
{
    return d_positionY;
}
int balle::getAngle() const
{
    return d_angle;
}
void balle::setVitesse(int vitesse)
{
    d_vitesse = vitesse;
}
int balle::getRayon() const
{
    return d_rayon;
}
void balle::setRayon(int rayon)
{
    d_rayon = rayon ;
}
void balle::setPositionX(int positionX)
{
    d_positionX = positionX;
}
void balle::setPositionY(int positionY)
{
    d_positionY = positionY;
}
void balle::setAngle(int angle)
{
    d_angle = angle % angles.anglePlein;
}
void balle::deplacement()
{
    int angle = this->getAngle();
    int pasDeplacement = this->getVitesse();
    int x = this->getPositionX();
    int y = this->getPositionY();

    if (angle >= angles.angleNul && angle < angles.angleDroit)
    {

        this->setPositionX(x+pasDeplacement);
        this->setPositionY(y+pasDeplacement);
    }
    if (angle > angles.angleDroit && angle < angles.anglePlat)
    {

        this->setPositionX(x-pasDeplacement);
        this->setPositionY(y+pasDeplacement);
    }
    if (angle > angles.anglePlat && angle < angles.angleRentrant)
    {

        this->setPositionX(x-pasDeplacement);
        this->setPositionY(y-pasDeplacement);
    }
    if (angle > angles.angleRentrant && angle < angles.anglePlein)
    {

        this->setPositionX(x+pasDeplacement);
        this->setPositionY(y-pasDeplacement);
    }
    if(angle == angles.angleDroit)
    {
        this->setPositionX(x);
        this->setPositionY(y+pasDeplacement);
    }
    if  (angle == angles.angleRentrant)
    {
        this->setPositionX(x);
        this->setPositionY(y-pasDeplacement);
    }
}

void balle::rebond(const terrain& _terrain,const raquette& _raquette)
{
    // Collision mur avec  la raquette
     if (this->getPositionY() - this->getRayon() == _raquette.getHauteur() && this->getPositionX()>=_raquette.getPositionX() && this->getPositionX()<=(_raquette.getPositionX()+_raquette.getLargeur()) )
     {

        if (this->getAngle() <= angles.anglePlat)
        {

            std::cout << "1 \n";
            this->setAngle(this->getAngle()-angles.angleDroit);
        }
        else
        {
              std::cout << "2
               \n";
            this->setAngle(this->getAngle()+angles.angleDroit);
        }
     }
    // Collision mur de gauche
    if(this->d_positionX   < this->getRayon() )
    {

        if (this->getAngle() <= angles.anglePlat)
        {
            this->setAngle(this->getAngle()-angles.angleDroit);
        }
        else
        {
            this->setAngle(this->getAngle()+angles.angleDroit);
        }
    }

    // Parail avec le mur de droite
    if(this->getPositionX()> _terrain.getLargeur() - this->getRayon())
    {
        if (this->getAngle() <= angles.anglePlat)
        {
            this->setAngle(this->getAngle()+angles.angleDroit);
        }
        else
        {
            this->setAngle(this->getAngle()-angles.angleDroit);
        }
    }

    // Si la collision se fait sur le mur du haut
    if(this->getPositionY() > _terrain.getHauteur() - this->getRayon())
    {
        if (this->getAngle() <= angles.angleDroit)
        {

            this->setAngle(this->getAngle()+angles.angleRentrant);
        }
        else
        {
            this->setAngle(this->getAngle()+ angles.angleDroit);
        }
    }
// Si la collision se fait sur le mur du bas
    if(this->getPositionY() < 0)
    {

    }

    // Pareil pour les colision avec ta "planche", suffit de bien faire toute les vérification

}



