#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdio.h>
#include <stdlib.h>
#include "village.h"

void displayFullVillage(S_Village *v);
void displayVillageInfo(S_Village *v);
void displayChoixAction(S_Village *v);

void displayMouvementVillageois();
void displayConstruction();
void displayEndDay();

#endif // DISPLAY_H