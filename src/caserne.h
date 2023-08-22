#ifndef  CASERNE_H
#define  CASERNE_H

#include<stdio.h>
#include<stdlib.h>
typedef struct{
int nbMaxVillageois ;
int nbActuelVillageois;
int ressourceOr;
int ressouceBois;
int ameliorationSoldatParJour ;

}S_caserne;

void displayCa(S_caserne ca);
void createDefaultCaserne(S_caserne *ca);

#endif