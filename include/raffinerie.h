#include<stdio.h>
#include<stdlib.h>

#ifndef raffinerie_H
#define  raffinerie_H

typedef struct{

int nbMinVillageois ;
int nbActuelVillageois;
int ressourceOr;
int ressouceBois;
int ressourceMN;
int prodMNParJour ;

}S_raffinerie;

void createDefaultRaffinerie(S_raffinerie *rf);
void displayRaf(S_raffinerie rf);  
#endif