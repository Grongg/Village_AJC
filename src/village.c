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

int nbTotalVillageoisMines(S_mine *mines,S_Village *village){
  
  int nbTotalVillageoisMines=0;
  int nbTotalMines=village->nbMine;
  printf(" int nbTotalMines=village->nbMine; %d\n",nbTotalMines);
    for (int i =0; i<nbTotalMines;i++){
      printf("%d\n",mines[i].villageois);
       nbTotalVillageoisMines = nbTotalVillageoisMines + mines[i].villageois;

    }
return nbTotalVillageoisMines;
};

int nbTotalVillageoisScieries(S_scierie *scieries,S_Village *village){
  int nbTotalVillageoisScieries=0;
  int nbTotalScieries=village->nbScirie;
    for (int i =0; i<nbTotalScieries;i++){
       nbTotalVillageoisScieries =nbTotalVillageoisScieries+scieries[i].nbActuelVillageois;

    }
return nbTotalVillageoisScieries;
};

int nbTotalVillageoisRaffineries(S_raffinerie *raffineries,S_Village *village){
  int nbTotalVillageoisRaffineries=0;
  int nbTotalRaffineries=village->nbRaffinerie;
    for (int i =0; i<nbTotalRaffineries;i++){
       nbTotalVillageoisRaffineries =nbTotalVillageoisRaffineries+raffineries[i].nbActuelVillageois;

    }
return nbTotalVillageoisRaffineries;
};

int nbTotalVillageoisCasernes(S_caserne *casernes,S_Village *village){
  int nbTotalVillageoisCasernes=0;
  int nbTotalCasernes=village->nbCaserne;
    for (int i =0; i<nbTotalCasernes;i++){
      nbTotalVillageoisCasernes =nbTotalVillageoisCasernes+casernes[i].nbActuelVillageois;

    }
return  nbTotalVillageoisCasernes;
};

