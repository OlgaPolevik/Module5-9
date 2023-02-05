//
//  main.cpp
//  Module5-9
//
//  Created by Ольга Полевик on 21.06.2021.
//

#include <iostream>
#include <string>
#include "snack.h"
#include "snackslot.h"
#include "vendingmachine.h"

using namespace std;

int main(int argc, const char * argv[])
{
    Snack *bounty = new Snack("Bounty");
    Snack *snickers = new Snack("Snickers");
    SnackSlot *slot = new SnackSlot(10);
    slot->addSnack(bounty);
    slot->addSnack(snickers);
    VendingMachine* machine = new VendingMachine(4);
    machine->addSlot(slot);
     
    cout << machine->getEmptySlotsCount() << endl; 
    delete machine;
    return 0;
}
