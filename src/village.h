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
        int nbRaffinerie;
        S_raffinerie *rafinery;
        int nbCaserne;
        S_caserne *caserne;
        int nbScirie;
        S_scierie *scierie;
        int nbMine;
        S_mine *mine;
    } S_Village  ;

    int prodOr(int or);
    void createVillage(S_Village *village);

#endif