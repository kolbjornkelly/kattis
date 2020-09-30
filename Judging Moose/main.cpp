//
//  main.cpp
//  Judging Moose
//
//  Created by Kolbjørn Kelly on 27.10.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int main()
{
    unsigned int l, r;
    cin >> l >> r;
    
    if ( l == 0 && r == 0)
    {
        cout << "Not a moose" << endl;
        return 0;
    }
    
    else if (l == r)
    {
        cout << "Even " << l+r << endl;
    }
    
    else
    {
        cout << "Odd " << max(l,r) * 2 << endl;
    }
    return 0;
}
