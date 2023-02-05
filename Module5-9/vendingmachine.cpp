//
//  vendingmachine.cpp
//  Module5-9
//
//  Created by Ольга Полевик on 22.06.2021.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "vendingmachine.h"
#include "snackslot.h"
#include "snack.h"

using namespace std;

VendingMachine::VendingMachine(int size)
{
    slotCount = size;
    slots = new SnackSlot *[size];
    slotIndex = 0;
}

void VendingMachine::addSlot(SnackSlot *slot)
{
    if (slotIndex < slotCount)
    {
        slots[slotIndex] = slot;
        slotIndex++;
    }    
}

int VendingMachine::getEmptySlotsCount()
{
    return slotCount - slotIndex;
}

VendingMachine::~VendingMachine()
{
    for(int i = 0; i < slotIndex; i++)
    {
        delete slots[i];
    }
    delete []slots;
}
