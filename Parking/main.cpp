//
//  main.cpp
//  Parking
//
//  Created by Kolbjørn Kelly on 04.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    unsigned int t, n;
    cin >> t;
    
    while (t--)
    {
        cin >> n;
        unsigned int x;
        unsigned int max = 0, min = 99;
        
        for (int i = 0; i < n; i ++)
        {
            cin >> x;
            if (x > max)
                max = x;
            if (x < min)
                min = x;
        }
        
        cout << (max - min) * 2 << endl;
    }
    
    
    return 0;
}
