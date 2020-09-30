//
//  main.cpp
//  Speed Limit
//
//  Created by Kolbjørn Kelly on 24.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    bool yes = true;
    
    while (yes)
    {
        int n;
        cin >> n;
        if (n < 0)
            break;
        
        int diff;
        int dist = 0;
        int v = 0;
        int t = 0;
        
        for (int i = 0; i < n; i++)
        {
            int oldT = t;
            cin >> v >> t;
            
            diff = t - oldT;
            dist += diff * v;
        }
        cout << dist << " miles" << endl;
    }

    return 0;
}
