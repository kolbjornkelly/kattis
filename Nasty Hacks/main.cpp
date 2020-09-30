//
//  main.cpp
//  Nasty Hacks
//
//  Created by Kolbjørn Kelly on 27.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    string yes = "advertise";
    string no = "do not advertise";
    string nvm = "does not matter";
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int r, e, c;
        cin >> r >> e >> c;
        
        if (e > (r+c))
            cout << yes << endl;
        else if (e < (r+c))
            cout << no << endl;
        else
            cout << nvm << endl;
    }
    return 0;
}
