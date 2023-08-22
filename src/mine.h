# include "village.h"

# ifndef mine_H
# define mine_H
    
typedef struct S_mine
{
    int villageois;
    int coutOr;
    int coutBois;
    int villageoisMin;
    int productionOr;
} S_mine;

void defaultMine(S_mine *mine)
{
    mine->villageoisMin = 3;
    mine->coutOr = 100;
    mine->coutBois = 20;
    mine->productionOr = 50;
}

int prodOr(int orActuel)
{
    return orActuel = orActuel + mine->productionOr;
}

# endif

