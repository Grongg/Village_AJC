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

bool removeVilFromMine(S_Village *Village)
{
    for (int i = Village->nbMine - 1; i >= 0; i--)
    {
        if (Village->mine[i].villageois > 0)
        {
            Village->mine[i].villageois--;
            Village->hdv->villageois++;
            return true;
        }
    }
    return false;
}

bool addVilToMine(S_Village *Village)
{
    for (int i = 0; i != Village->nbMine; i++)
    {
        if (Village->mine[i].villageois < Village->mine[i].villageoisMin)
        {
            Village->mine[i].villageois++;
            Village->hdv->villageois--;
            return true;
        }
    }
    return false;
}