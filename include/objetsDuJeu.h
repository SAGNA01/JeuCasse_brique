#ifndef OBJETSDUJEU_H
#define OBJETSDUJEU_H


class objetsDuJeu
{
    public:
        objetsDuJeu();
        virtual int getPositionX() const = 0;
        virtual int getPositionY() const = 0;

        virtual void setPositionX(int position_x) = 0;
        virtual void setPositionY(int position_y) = 0;

    private:
};

#endif // OBJETSDUJEU_H
