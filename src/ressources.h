#ifndef RESSOURCES_H
#define RESSOURCES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
    typedef struct Ressources
    {
        int orActuel;
        int boisActuel;
        int matNoirActuel;
        int nbVilActuel;

    } S_resVillage  ;

    void createDefaultRessources(S_resVillage *resVillage);
    void  updateRessourcesVillage(S_resVillage *resVillage, int or, int bois, int matNoir, int nbVillageois);
    void updateNbVillageois(S_resVillage *resVillage, int nbVil);
    void updateMatNoir(S_resVillage *resVillage, int matNoir);
    void updateBois(S_resVillage *resVillage, int bois);
    void updateOr(S_resVillage *resVillage, int or);
    void printRessources(S_resVillage *resVillage);


#endif