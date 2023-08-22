#include "ressources.h"
#include "caserne.h"
#include "scierie.h"
#include "raffinerie.h"
int main()
{
    #include "ressources.h"
    S_Village village;

    createDefaultRessources(&village);
 
    printf("test struture batiment\n");
        S_scierie newSC;
        createDefaultScierie(&newSC);
        newSC.nbActuelVillageois = 2;
        displaySc(newSC);

        S_raffinerie newrf;
        createDefaultRaffinerie(&newrf);
        newrf.nbActuelVillageois=4;
        displayRaf(newrf);

        S_caserne newCa;
        createDefaultCaserne(&newCa);
        newCa.nbActuelVillageois=2;
        displayCa(newCa);


    return 0;
}