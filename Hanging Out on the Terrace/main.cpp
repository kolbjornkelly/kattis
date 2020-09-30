//
//  main.cpp
//  Hanging Out on the Terrace
//
//  Created by Kolbjørn Kelly on 09.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    unsigned int L, x, total = 0, denied = 0;
    cin >> L >> x;
    
    while (x--)
    {
        string action;
        unsigned int amount;
        cin >> action >> amount;
        
        if (action == "leave")
            total -= amount;
        
        
        else if (action == "enter")
        {
            if ((total + amount) <= L)
                total += amount;
            
            else
                denied++;
        }
    }
    
    cout  << denied << endl;
    
    return 0;
}
