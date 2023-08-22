#ifndef VILLAGE_H
#define VILLAGE_H
# include <stdio.h>
# include <stdlib.h>
    
# include "hotelDeVille.h"
// # include "mine.h"

    // Mine : production or/jour
    typedef struct Village
    {
        int jour;
        S_resVillage *resVillage;
        S_hotelDeVille *hdv;
        S_raffinerie *rafinery;
        S_caserne *caserne;
        S_scierie *scierie;
    } S_Village  ;

    int prodOr(int or);

#endif