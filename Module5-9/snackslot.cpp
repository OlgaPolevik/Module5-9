//
//  snackslot.cpp
//  Module5-9
//
//  Created by Ольга Полевик on 22.06.2021.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "snackslot.h"
#include "snack.h"

using namespace std;

SnackSlot::SnackSlot(int size)
{
    snackSlotSize = size;
    snackSlots = new Snack*[size];
    snackSlotIndex = 0;
}

void SnackSlot::addSnack(Snack *snack)
{
    if (snackSlotIndex < snackSlotSize)
    {
        snackSlots[snackSlotIndex] = snack;
        snackSlotIndex++;
    }
}

SnackSlot::~SnackSlot()
{
    for(int i = 0; i < snackSlotIndex; i++)
    {
        delete snackSlots[i];
    }
    delete []snackSlots;
}
