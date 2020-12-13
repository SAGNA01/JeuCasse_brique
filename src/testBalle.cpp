#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
//#include "doctest.h"
#include"balle.h"

/*
TEST_CASE("Teste de la classe balle")
{
    int positionX = 0;
    int positionY = 0;
    int vitesse = 15;
    int angle = 10;
    int rayon = 10;

    balle b{positionX, positionY, vitesse, angle, rayon};
    SUBCASE("le deplacement de la balle est correcte") {
		CHECK(b.getPositionX() == 0);
		CHECK(b.getPositionY() == 0);
		CHECK(b.getVitesse() == 15);
		CHECK(b.getAngle() == 10);
		CHECK(b.getRayon() == 10);
    }
}


TEST_CASE(" Teste de la classe raquette ")
{
    int pasDeplacement = 1;
    int const HAUTEUR = 50;
    int const LARGEUR = 15;
    terrain t;
    raquette r{0,0, HAUTEUR, LARGEUR, pasDeplacement};
    SUBCASE(" La raquette est bien construite "){
        CHECK(r.getPositionY() == 0);
        CHECK(r.getPositionX() == 0);
        CHECK(r.getHauteur() == HAUTEUR);
        CHECK(r.getLargeur() == LARGEUR);
    }
    SUBCASE(" Deplacement gauche "){
        CHECK(r.deplacerGauche(t&) == - pasDeplacement);
    }
    SUBCASE(" Deplacement droit "){
        CHECK(r.deplacerDroite(t&) == + pasDeplacement);
    }
}
*/
