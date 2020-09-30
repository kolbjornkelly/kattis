//
//  main.cpp
//  I've been everywhere, man
//
//  Created by Kolbjørn Kelly on 27.10.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <set>

using namespace std;

int main()
{
    unsigned int T, n;
    set<string> cities;
    
    cin >> T;
    
    while (T--)
    {
        cin >> n;
        
        while (n--)
        {
            string city;
            cin >> city;
            
            cities.insert(city);
        }
        
        cout << cities.size() << endl;
        cities.clear();
    }
    
    return 0;
}
