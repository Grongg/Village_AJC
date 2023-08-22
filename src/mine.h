#ifndef MINE_H
# define MINE_H
typedef struct S_mine
{
    int villageois;
    int coutOr;
    int coutBois;
    int villageoisMin;
    int productionOr;
} S_mine;

void createDefaultMine(S_mine *mine);
int productionMine(int or);
void displayDefaultMine(S_mine *mine);
void collectMine(S_resVillage *ressource, S_mine *mine);


# endif

