#include<stdio.h>
#include<stdlib.h>

#ifndef caserne_H
#define  caserne_H

    

typedef struct{
int nbMinVillageois ;
int nbActuelVillageois;
int ressourceOr;
int ressouceBois;
int ameliorationSoldatParJour ;

}S_caserne;

void displayCa(S_caserne ca);
void createDefaultCaserne(S_caserne *ca);
#endif