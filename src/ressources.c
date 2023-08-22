#include "ressources.h"

void printRessources(S_resVillage *resVillage)
{
    printf("%d && %d && %d && %d\n", resVillage->orActuel, resVillage->boisActuel, resVillage->matNoirActuel, resVillage->nbVilActuel);
}

void updateOr(S_resVillage *resVillage, int or)
{
    resVillage->orActuel = or;
}

void addOr(S_resVillage *resVillage, int or)
{
    resVillage->orActuel += or;
}

void removeOr(S_resVillage *resVillage, int or)
{
    if (nbVil < 0)
    {
        printf("Erreur, entrer un chiffre positif svp\n");
        return;
    }
    resVillage->orActuel -= or;
}

void updateBois(S_resVillage *resVillage, int bois)
{
    resVillage->boisActuel = bois;
}

void addBois(S_resVillage *resVillage, int bois)
{
    resVillage->boisActuel += bois;
}

void removeBois(S_resVillage *resVillage, int bois)
{
    if (nbVil < 0)
    {
        printf("Erreur, entrer un chiffre positif svp\n");
        return;
    }
    resVillage->boisActuel -= bois;
}

void updateMatNoir(S_resVillage *resVillage, int matNoir)
{
    resVillage->matNoirActuel = matNoir;
}

void addMatNoir(S_resVillage *resVillage, int matNoir)
{
    resVillage->matNoirActuel += matNoir;
}

void removeMatNoir(S_resVillage *resVillage, int matNoir)
{
    if (nbVil < 0)
    {
        printf("Erreur, entrer un chiffre positif svp\n");
        return;
    }
    resVillage->matNoirActuel -= matNoir;
}

void updateNbVillageois(S_resVillage *resVillage, int nbVil)
{
    resVillage->nbVilActuel = nbVil;
}

void addVillageois(S_resVillage *resVillage, int nbVil)
{
    resVillage->nbVilActuel += nbVil;
}

void removeVillageois(S_resVillage *resVillage, int nbVil)
{
    if (nbVil < 0)
    {
        printf("Erreur, entrer un chiffre positif svp\n");
        return;
    }
    resVillage->nbVilActuel -= nbVil;
}

void  updateRessourcesVillage(S_resVillage *resVillage, int or, int bois, int matNoir, int nbVillageois)
{
    updateOr(resVillage, or);
    updateBois(resVillage, bois);
    updateMatNoir(resVillage, matNoir);
    updateNbVillageois(resVillage, nbVillageois);
}

void createDefaultRessources(S_resVillage *resVillage)
{
    resVillage->orActuel = 0;
    resVillage->boisActuel = 0;
    resVillage->matNoirActuel = 0;
    resVillage->nbVilActuel = 10;
}