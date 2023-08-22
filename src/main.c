#include "village.h"
#include "display.h"

int main()
{
    S_Village village;

    createVillage(&village);

    displayFullVillage(&village);

    return 0;
}