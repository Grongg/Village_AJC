#include "display.h"
#include "village.h"

void displayFullVillage(S_Village *v)
{
    displayVillageInfo(v);
    //displayChoixAction(v);
}

void displayVillageInfo(S_Village *v)
{
    printf("Jour %d\n", v->jour);
    printf("\nBatiments :\n");
    printf("   Hôtel de ville\n");
    printf("   Scirie : %d\n", v->nbScirie);
    printf("   Mine : %d\n", v->nbMine);
    printf("   Raffinerie : %d\n", v->nbRaffinerie);
    printf("   Caserne : %d\n", v->nbCaserne);
    printf("\n");
    printf("Affectation des villageois :\n");
    printf("\tHôtel de ville : %d\n", v->hdv->villageois);
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
    int choix;
    printf("[1] Deplacer un villageois depuis l'hôtel de ville\n");
    printf("[2] Deplacer un villageois depuis une scirie\n");
    printf("[3] Deplacer un villageois depuis une mine\n");
    printf("[4] Deplacer un villageois depuis une raffinerie\n");
    printf("[5] Deplacer un villageois depuis une caserne\n");

    scanf("%d", choix);

    printf("[1] Envoyer le villageois vers l'hôtel de ville\n");
    printf("[2] Envoyer le villageois vers une scirie\n");
    printf("[3] Envoyer le villageois vers une mine\n");
    printf("[4] Envoyer le villageois vers une raffinerie\n");
    printf("[5] Envoyer le villageois vers une caserne\n");
    
    scanf("%d", choix);
}

void displayConstruction(){

}

void displayEndDay(){

}

