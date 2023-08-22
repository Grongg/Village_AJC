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
        S_hotelDeVille *HDV;
    } S_Village  ;

    int prodOr(int or);

#endif