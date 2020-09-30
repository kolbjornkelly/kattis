//
//  main.cpp
//  Faktor
//
//  Created by Kolbjørn Kelly on 28.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    unsigned int A, I;
    cin >> A >> I;
    
    for (int i = 2; i < A*I; i++)
    {
        //cout << i/A << "-";
        if (i / A == I - 1)
        {
            cout << i+1 << endl;
            break;
        }
    }
    
    
    
    return 0;
}
