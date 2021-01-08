#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
//#include "doctest.h"
#include"balle.h"
#include"raquette.h"
#include "terrain.h"

/*
TEST_CASE("Test de construction de la classe balle")
{
    int positionX = 200;
    int positionY = 0;
    int vitesse = 1;
    int angle = 45;
    int rayon = 10;

    balle b{positionX, positionY, vitesse, angle, rayon};
    SUBCASE("le deplacement de la balle est correcte") {
		REQUIRE_EQ(b.getPositionX(),positionX);
		REQUIRE_EQ(b.getPositionY(),positionY);
		REQUIRE_EQ(b.getVitesse(), vitesse);
		REQUIRE_EQ(b.getAngle(), angle);
		REQUIRE_EQ(b.getRayon() ,rayon);
    }
}


TEST_CASE(" Test de la classe raquette ")
{
    int pasDeplacement = 1;
    int posX = 0;
    int posY = 0;
    int const HAUTEUR = 75;
    int const LARGEUR = 10;
    terrain t(0,0,450,350);
    raquette r{posX, posY, HAUTEUR, LARGEUR, pasDeplacement};
    SUBCASE(" La raquette est bien construite "){
        REQUIRE_EQ(r.getPositionY(), 0);
        REQUIRE_EQ(r.getPositionX(), 0);
        REQUIRE_EQ(r.getHauteur(), HAUTEUR);
        REQUIRE_EQ(r.getLargeur(), LARGEUR);
    }
    SUBCASE(" Deplacement gauche "){
        r.deplacerGauche(t);
        REQUIRE_EQ(r.getPositionX(), posX -pasDeplacement);
    }
    SUBCASE(" Deplacement droit "){
        r.deplacerDroite(t);
        REQUIRE_EQ(r.getPositionX(), posX -pasDeplacement);
    }
}

*/
