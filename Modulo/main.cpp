//
//  main.cpp
//  Modulo
//
//  Created by Kolbjørn Kelly on 01.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> distincts;
    int n = 10;
    
    while (n--)
    {
        unsigned int in;
        cin >> in;
        distincts.insert(in % 42);
    }
    
    cout << distincts.size() << endl;
    
    return 0;
}
