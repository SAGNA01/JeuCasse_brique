#ifndef TERRAIN_H
#define TERRAIN_H
#include<vector>
#include"mur.h"

class terrain
{
    public:
        terrain();
        virtual ~terrain();
    private:
        std::vector<mur> m_murs;
};

#endif // TERRAIN_H
