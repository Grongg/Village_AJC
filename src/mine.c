# include "village.h"

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

int productionMine(int or)
{
    return or + 50;
}

void createDefaultMine(S_mine *mine)
{
    mine->villageoisMin = 3;
    mine->coutOr = 100;
    mine->coutBois = 20;
    mine->productionOr = 50;
}

int prodOr(int orActuel)
{
    // return orActuel = orActuel + mine->productionOr;
}

// int main()
// {
//     int jourmax = 15;
//     int or = 150;
//     S_mine *mine = malloc(sizeof(S_mine));
//     mine->villageois = 2;
//     createDefaultMine(mine);
//     or = prodOr(or, jourmax);
//     displayDefaultMine(mine); 
//     printf("Production en or au bout de %d jours : %d\n", jourmax, or);   
//     free(mine);
//     return 0;
// }