# include "village.h"

void createDefaultMine(S_mine *mine)
{
    mine->villageoisMin = 3;
    mine->coutOr = 100;
    mine->coutBois = 20;
    mine->productionOr = 50;
}

void displayDefaultMine(S_mine *mine)
{
    printf("Nombre de villageois minimum travaillant dans la mine : %d\n", mine->villageoisMin);
    printf("Or minimum pour faire fonctionner la mine : %d\n", mine->coutOr);
    printf("Bois minimum pour faire fonctionner la mine : %d\n", mine->coutBois);
    if (mine->villageois < mine->villageoisMin) {
        printf("Nombre de villageois insuffisant pour travailler dans la mine\n");
    } else {
        printf("Nombre de villageois travaillant dans la mine : %d\n", mine->villageois);
    }
    printf("Production en or par jour : %d\n", mine->productionOr);
}

void AddVilToMine(S_mine *mine, S_hotelDeVille *hotelDeVille)
{
    mine->villageois++;
    hotelDeVille->villageois--;
}

void removeVilFromMine(S_mine *mine, S_hotelDeVille *hotelDeVille)
{
    mine->villageois--;
    hotelDeVille->villageois++;
}

void collectMine(S_resVillage *ressource, S_mine *mine)
{
    ressource->orActuel = ressource->orActuel + mine->productionOr;
}