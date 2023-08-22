#include "village.h"

void createVillage(S_Village *village)
{
    S_scierie scierie;
    S_mine mine;
    S_resVillage resVillage;
    createDefaultRessources(&resVillage);
    createDefaultScierie(&scierie);
    createDefaultMine(&mine);
    village->jour = 0;
    village->scierie[0] = scierie;
    village->mine[0] = mine;
    village->nbScirie++;
    village->nbMine++;
}