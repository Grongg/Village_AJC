#include "village.h"

void createVillage(S_Village *village)
{
    S_scierie scierie;
    S_mine mine;
    createDefaultScierie(&scierie);
    createDefaultMine(&mine);
    village->jour = 0;
    village->scierie = &scierie;
}