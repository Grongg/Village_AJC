
#include "village.h"

void displaySc(S_scierie sc){
    printf("Nombre Maximun de villageois pour fonctionner est de  %d   villageois \n" , sc.nbMaxVillageois);
    printf("Nombre courant de villageois est de   %d   villageois \n" , sc.nbActuelVillageois);
    printf("Production journaliere de bois est de   %d   bois par jour \n" , sc.prodBoisParJour);
    printf("Cout de fabrication d'une scierie  %d  Or \n" , sc.ressourceOr);
}

void createDefaultScierie(S_scierie *sc){
    sc->nbMaxVillageois=2;
    sc->prodBoisParJour = 20;
    sc->ressourceOr = 50;
}
void collectScierie(S_resVillage *ressource ,S_scierie *sc){
    ressource->boisActuel=ressource->boisActuel+sc->prodBoisParJour;
}

void addToScierie(S_scierie *scierie, S_hotelDeVille *hdv)
{
    scierie->nbActuelVillageois++;
    hdv->villageois--;
}

void RemoveFromScierie(S_scierie *scierie, S_hotelDeVille *hdv)
{
    scierie->nbActuelVillageois--;
    hdv->villageois++;
}