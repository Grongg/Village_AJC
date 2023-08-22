#include "ressources.h"

void updateOr(S_resVillage *resVillage, int or)
{
    resVillage->orActuel = or;
}

void update(S_resVillage *resVillage, int or)
{
    resVillage->orActuel = or;
}

void  updateRessourcesVillage(S_resVillage *resVillage, int or, int bois, int matNoir, int nbVillageois)
{
    resVillage->orActuel = or;
    resVillage->boisActuel = bois;
    resVillage->matNoirActuel = matNoir;
    resVillage->nbVilActuel = nbVillageois;
}


void createDefaultRessources(S_resVillage *resVillage)
{
    resVillage->orActuel = 0;
    resVillage->boisActuel = 0;
    resVillage->matNoirActuel = 0;
    resVillage->nbVilActuel = 10;
}