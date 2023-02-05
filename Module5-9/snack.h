//
//  snack.h
//  Module5-9
//
//  Created by Ольга Полевик on 22.06.2021.
//

#ifndef snack_h
#define snack_h

#include <iostream>
#include <string>

using namespace std;

class Snack
{
public:
    Snack(string name);
    ~Snack();
    
private:
    string snackName;
};

#endif /* snack_h */
