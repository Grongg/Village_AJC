#include "village.h"

void createVillage(S_Village *village)
{
    S_scierie* scierie = malloc(sizeof(S_scierie));
    S_mine* mine = malloc(sizeof(S_mine));
    S_mine* raffinerie = NULL;
    S_mine* caserne = NULL;
    S_resVillage* resVillage = malloc(sizeof(S_resVillage));
    village->hdv = malloc(sizeof(S_hotelDeVille));
    createDefaultRessources(resVillage);
    createDefaultScierie(scierie);
    createDefaultMine(mine);
    village->jour = 0;
    village->scierie = scierie;
    village->mine = mine;

    village->nbCaserne = 0;
    village->nbMine = 1;
    village->nbRaffinerie = 0;
    village->nbScirie = 1;

    village->hdv->villageois = 10;

}