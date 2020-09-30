//
//  main.cpp
//  Odities
//
//  Created by Kolbjørn Kelly on 26.10.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    
    while (n--)
    {
        int x;
        cin >> x;
        if (x%2 == 0)
            cout << x << " is even" << endl;
        else
            cout << x << " is odd" << endl;
    }
    
    return 0;
}
