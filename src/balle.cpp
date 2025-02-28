#include "balle.h"
#include "listeAngles.h"

balle::balle(): d_positionX{200}, d_positionY{0}, d_vitesse{1}, d_angle{45}, d_rayon{10}
{
}

balle::balle(int positionX, int positionY, int vitesse, int angle, int rayon) : d_positionX{positionX},
                                                                                d_positionY{positionY},
                                                                                d_vitesse{vitesse},
                                                                                d_angle{angle},
                                                                                d_rayon{rayon}

{

}

int balle::getPositionX() const
{
    return d_positionX;
}
int balle::getPositionY() const
{
    return d_positionY;
}
int balle::getVitesse() const
{
    return d_vitesse;
}
int balle::getAngle() const
{
    return d_angle;
}
int balle::getRayon() const
{
    return d_rayon;
}
void balle::setPositionX(int positionX)
{
    d_positionX = positionX;
}
void balle::setPositionY(int positionY)
{
    d_positionY = positionY;
}
void balle::setVitesse(int vitesse)
{
    d_vitesse = vitesse;
}
void balle::setAngle(int angle)
{
    d_angle = angle % angles.anglePlein;
}
void balle::setRayon(int rayon)
{
    d_rayon = rayon ;
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
    if (angle == angles.angleDroit)
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

void balle::rebond(terrain * _terrain, const raquette& _raquette)
{
    for( auto& _brique: _terrain->getBriques())
    {
        if (_brique->getEtat()== true)
        {
            if (this->getPositionX()+this->getRayon() >= _brique->getPositionX() &&
                this->getPositionX()+this->getRayon() <=  _brique->getPositionX() +
                _brique->getLargeur())
            {
                // Collision de la balle avec la prtie bas de la brique
                if ( this->getPositionY()-this->getRayon() == _brique->getPositionY())
                {
                    std::cout << " Collision de la balle avec la prtie bas de la brique \n";
                    _brique->setEtat();
                    if (this->getAngle() <= angles.anglePlat)
                    {
                        this->setAngle(this->getAngle()+angles.angleDroit);
                    }
                    else
                    {
                        this->setAngle(this->getAngle()-angles.angleDroit);
                    }
                }

                // Collision de la balle avec la prtie haute de la brique
                if ( this->getPositionY() - this->getRayon() == _brique->getPositionY()+_brique->getHauteur())
                {
                     std::cout << " Collision de la balle avec la prtie haute de la brique \n";
                    _brique->setEtat();
                    if (this->getAngle() >= angles.anglePlat && this->getAngle() <=angles.angleRentrant)
                    {
                        this->setAngle(this->getAngle()-angles.angleDroit);
                    }
                    else
                    {
                        this->setAngle(this->getAngle()+angles.angleDroit);
                    }
                }
            }

            if (this->getPositionY()+this->getRayon() >= _brique->getPositionY() && this->getPositionY()+this->getRayon()<= _brique->getPositionY()+_brique->getHauteur())
              {
                // Collision de la balle avec la prtie gauche de la brique

                if ( this->getPositionX()+this->getRayon() == _brique->getPositionX())
                {
                    _brique->setEtat();
                    std::cout << "  Collision de la balle avec la prtie gauche de la brique\n";
                    if (this->getAngle() <= angles.anglePlat)
                    {
                        this->setAngle(this->getAngle()+angles.angleDroit);
                    }
                    else
                    {
                        this->setAngle(this->getAngle()-angles.angleDroit);
                    }
                }
              }
        }
    }

    // Collision mur avec la raquette
    if (this->getPositionY() - this->getRayon() == _raquette.getHauteur() && this->getPositionX()>=_raquette.getPositionX() && this->getPositionX()<=(_raquette.getPositionX()+_raquette.getLargeur()) )
    {
        if (this->getAngle() >= angles.anglePlat && this->getAngle() <= angles.angleRentrant)
        {
            this->setAngle(this->getAngle()-angles.angleDroit);
        }
        else
        {
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

    // Pareil avec le mur de droite
    if(this->getPositionX()> _terrain->getLargeur() - this->getRayon())
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
    if(this->getPositionY() > _terrain->getHauteur() - this->getRayon())
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
}



