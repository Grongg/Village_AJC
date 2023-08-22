#ifndef  SCIERIE_H
#define  SCIERIE_H

#include<stdio.h>
#include<stdlib.h>

typedef struct{

int nbMaxVillageois ;
int nbActuelVillageois;
int ressourceOr;
int prodBoisParJour ;

}S_scierie;


void displaySc(S_scierie sc);
void createDefaultScierie(S_scierie *sc);

#endif