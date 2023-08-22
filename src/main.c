#include "village.h"
#include "display.h"

int main()
{
    S_Village village;

    createVillage(&village);

    displayVillageInfo(&village);

    return 0;
}