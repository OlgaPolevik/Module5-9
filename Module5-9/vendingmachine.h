//
//  vendingmachine.h
//  Module5-9
//
//  Created by Ольга Полевик on 22.06.2021.
//

#ifndef vendingmachine_h
#define vendingmachine_h

#include <iostream>
#include <string>
#include "snackslot.h"
#include "snack.h"

using namespace std;

class VendingMachine
{
public:
    VendingMachine(int size);
    ~VendingMachine();
    
    void addSlot(SnackSlot *slot);
    int getEmptySlotsCount();
    
private:
    int slotCount;
    SnackSlot **slots;
    int slotIndex;
};

#endif /* vendingmachine_h */
