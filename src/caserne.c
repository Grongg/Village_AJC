#include "caserne.h"

void displayCa(S_caserne ca){

printf("Nombre minimun de villageois pour fonctionner est de  %d   villageois \n" , ca.nbMinVillageois);
printf("Nombre courant de villageois est de  %d   villageois \n" , ca.nbActuelVillageois);
printf("Cout de fabrication d'une caserne  est de  %d  d'or  et de %d de bois\n" , ca.ressourceOr,ca.ressouceBois);
if(ca.nbActuelVillageois<4){
printf("Amelioration journaliere des soldats impossible.\n Merci d'ajouter %d villageois \n" , 4-ca.nbActuelVillageois);
}
else{
printf("Amelioration journaliere des soldats est    %d   puissance par jour \n" , ca.ameliorationSoldatParJour);
}

}

void createDefaultCaserne(S_caserne *ca){
 ca->nbMinVillageois=4;
 ca->ameliorationSoldatParJour = 4;
 ca->ressourceOr = 200;
 ca->ressouceBois = 50 ;

}

// int main(){

// S_caserne newCa;
// createDefaultCaserne(&newCa);
// newCa.nbActuelVillageois=2;
// displayCa(newCa);



//     return 0;
// }