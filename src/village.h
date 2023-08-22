#ifndef VILLAGE_H
#define VILLAGE_H
# include <stdio.h>
# include <stdlib.h>
# include "scierie.h"
# include "caserne.h"
# include "ressources.h"
# include "raffinerie.h"
# include "hotelDeVille.h"
# include "mine.h"
    typedef struct Village
    {
        int jour;
        S_resVillage *resVillage;
        S_hotelDeVille *hdv;
        S_raffinerie *rafinery;
        S_caserne *caserne;
        S_scierie *scierie;
        S_mine *mine;
    } S_Village  ;

    int prodOr(int or);
    void createVillage(S_Village *village);

#endif