#include "village.h"

void createVillage(S_Village *village)
{
    S_scierie* scierie = malloc(sizeof(S_scierie));
    S_mine* mine = malloc(sizeof(S_mine));
    S_mine* raffinerie = NULL;
    S_mine* caserne = NULL;
    S_resVillage* resVillage = malloc(sizeof(S_resVillage));
    createDefaultRessources(resVillage);
    createDefaultScierie(scierie);
    createDefaultMine(mine);
    village->jour = 0;
    village->scierie = scierie;
    village->mine = mine;
    village->nbScirie++;
    village->nbMine++;
}