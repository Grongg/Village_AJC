#include "scierie.h"

void displaySc(S_scierie sc){

printf("Nombre minimun de villageois pour fonctionner est de  %d   villageois \n" , sc.nbMinVillageois);
printf("Nombre courant de villageois est de   %d   villageois \n" , sc.nbActuelVillageois);
printf("Production journaliere de bois est de   %d   bois par jour \n" , sc.prodBoisParJour);
printf("Cout de fabrication d'une scierie  %d  Or \n" , sc.ressourceOr);


}

void createDefaultScierie(S_scierie *sc){
 sc->nbMinVillageois=2;
 sc->prodBoisParJour = 20;
 sc->ressourceOr = 50;

}

// int main(){

// S_scierie newSC;
// createDefaultScierie(&newSC);
// newSC.nbActuelVillageois = 2;
// displaySc(newSC);


// }