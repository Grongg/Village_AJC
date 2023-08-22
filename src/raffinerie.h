#ifndef  RAFFINERIE_H
#define  RAFFINERIE_H
#include<stdio.h>
#include<stdlib.h>
typedef struct{

int nbMaxVillageois ;
int nbActuelVillageois;
int ressourceOr;
int ressouceBois;
int ressourceMN;
int prodMNParJour ;

}S_raffinerie;

void createDefaultRaffinerie(S_raffinerie *rf);
void displayRaf(S_raffinerie rf);  

#endif