#ifndef MINE_H
# define MINE_H
# include <stdio.h>
# include <stdlib.h>
typedef struct S_mine
{
    int villageois;
    int coutOr;
    int coutBois;
    int villageoisMin;
    int productionOr;
} S_mine;

void createDefaultMine(S_mine *mine);
int prodOr(int orActuel);
int productionMine(int or);
void displayDefaultMine(S_mine *mine);

# endif

