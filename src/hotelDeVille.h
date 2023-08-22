# include "village.h"

# ifndef hotelDeVille_H
# define hotelDeVille_H
    
typedef struct S_hotelDeVille
{
    int villageois;
    int prodVillageois;
    int villageoisMax;
} S_hotelDeVille;

void defaultHotelDeVille(S_hotelDeVille *hotelDeVille)
{
    hotelDeVille->prodVillageois = 10;
    hotelDeVille->villageoisMax = 30;
}

#endif