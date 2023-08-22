#include "display.h"
#include "village.h"

void displayFullVillage(S_Village *v)
{
    //printf("Hôtel de ville : %d villageois\n", v->hdv->villageois);
}

void displayVillageInfo(S_Village *v)
{
    printf("Jour %d\n", v->jour);
    printf("\nBatiments :");
    printf("\tHôtel de ville\n");
    printf("\tScirie : %d\n", v->nbScirie);
    printf("\tMine : %d\n", v->nbMine);
    printf("\tRaffinerie : %d\n", v->nbRaffinerie);
    printf("\tCaserne : %d\n", v->nbCaserne);
    printf("\n");
    printf("Affectation des villageois :");
    //printf("\tHôtel de ville : %d\n", v->hdv->villageois);
    //printf("\tcirie : %d\n", &getNbVillagerInScirie(v));
    //printf("\tMine : %d\n", v->nbMine);
    //printf("\tRaffinerie : %d\n", v->nbRaffinerie);
    //printf("\tCaserne : %d\n", v->nbCaserne);
    //printf("\n");
}

void displayChoixAction(S_Village *v)
{
    int choix;

    printf("\n");
    
    printf("[1] Bouger un villageois.\n");
    printf("[2] Construire un bâtiment.\n");
    //printf("[3] Finir la jounée.\n");

    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        displayMouvementVillageois();
        break;
    case 2:
        displayConstruction();
        break;
    case 3:
        displayEndDay();
        break;
    
    default:
        break;
    }
}

void displayMouvementVillageois(){
    printf("[1] Deplacer un villageois depuis l'hôtel de ville");
    printf("[2] Deplacer un villageois vers l'hôtel de ville");
}

void displayConstruction(){

}

void displayEndDay(){

}

