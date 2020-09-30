//
//  main.cpp
//  Autori
//
//  Created by Kolbjørn Kelly on 24.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    string inStr;
    cin >> inStr;
    
    for (string::iterator it = inStr.begin(); it != inStr.end(); it++)
    {
        if (*it > 64 && *it < 91)
            cout << *it;
    }
    cout << endl;

    return 0;
}
