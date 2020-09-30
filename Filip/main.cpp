//
//  main.cpp
//  Filip
//
//  Created by Kolbjørn Kelly on 01.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int lsbNum (int x)
{
    int out = 0;
    int rem;
    while (x != 0)
    {
        rem  = x%10;
        out = out*10 + rem;
        x /= 10;
    }
    return out;
}

int main()
{
    unsigned int A, B;
    cin >> A >> B;
    
    unsigned int lsbA, lsbB;
    lsbA = lsbNum(A);
    lsbB = lsbNum(B);
    
    if (lsbA > lsbB)
        cout << lsbA << endl;
    else
        cout << lsbB << endl;
    
    
    return 0;
}


