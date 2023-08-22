# include "village.h"

void displayDefaultHotelDeVille(S_hotelDeVille *hotelDeVille)
{
    printf("Nombre de villageois dans l'hotel de ville : %d\n", hotelDeVille->villageois);
    printf("Nombre de villageois produits par l'hotel de ville : %d\n", hotelDeVille->prodVillageois);
    printf("Nombre de villageois maximum dans l'hotel de ville : %d\n", hotelDeVille->villageoisMax);    
}

int main()
{
    S_hotelDeVille *hotelDeVille = malloc(sizeof(S_hotelDeVille));
    hotelDeVille->villageois = 5;
    defaultHotelDeVille(hotelDeVille);
    displayDefaultHotelDeVille(hotelDeVille);
    free(hotelDeVille);
    return 0;
}