//
//  snackslot.h
//  Module5-9
//
//  Created by Ольга Полевик on 22.06.2021.
//

#ifndef snackslot_h
#define snackslot_h

#include <iostream>
#include <string>
#include "snack.h"

using namespace std;

class SnackSlot
{
public:    
    SnackSlot(int size);
    ~SnackSlot();
    
    void addSnack(Snack *snack);
       
private:
    int snackSlotSize;
    Snack **snackSlots;
    int snackSlotIndex;
};

#endif /* snackslot_h */
