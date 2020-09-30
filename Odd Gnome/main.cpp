//
//  main.cpp
//  Odd Gnome
//
//  Created by Kolbjørn Kelly on 04.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    
    while (n--)
    {
        unsigned int g;
        cin >> g;
        
        int size;
        vector<int> group;
        
        for (int i = 0; i < g; i++)
        {
            cin >> size;
            group.push_back(size);
        }
        
        int count = 2;
        
        for (vector<int>::iterator it = (group.begin() + 1); it != (group.end() - 1); it++)
        {
            if (*it > (*(it-1) + 1) || *it < *(it-1))
            {
                cout << count << endl;
                break;
            }
            
            count++;
        }
    }
    
    return 0;
}
