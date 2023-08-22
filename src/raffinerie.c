#include "raffinerie.h"

void displayRaf(S_raffinerie rf){

printf("Nombre maximun de villageois pour fonctionner est de %d   villageois \n" , rf.nbMaxVillageois);
printf("Cout de fabrication d'une raffinerie est de  %d en  Or , %d en  Bois et de  %d  en matiere noire\n" , rf.ressourceOr,rf.ressouceBois,rf.ressourceMN);
printf("Nombre courant de villageois est de  %d   villageois \n" , rf.nbActuelVillageois);
if(rf.nbActuelVillageois<5){
   printf(" La production journaliere de matiere  noire est   impossible par manque de villageois \nMerci d'ajouter au moins %d \n" ,  5-rf.nbActuelVillageois); 
}
else {
    printf("Production journaliere de mine noire est    %d   matiere noire par jour \n" , rf.prodMNParJour);
}


}

void createDefaultRaffinerie(S_raffinerie *rf){
 rf->nbMaxVillageois=5;
 rf->prodMNParJour = 10;
 rf->ressourceOr = 500;
 rf->ressouceBois =100;
 rf->ressourceMN = 500;

}

// int main(){

//     S_raffinerie newrf;
//     createDefaultRaffinerie(&newrf);
    
//     newrf.nbActuelVillageois=4;
//     displayRaf(newrf);

//     return 0;
// }