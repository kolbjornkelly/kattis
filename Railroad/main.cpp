//
//  main.cpp
//  Railroad
//
//  Created by Kolbjørn Kelly on 04.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    unsigned int X, Y;
    cin >> X >> Y;
    
    if (Y % 2 == 0 || Y == 0)
        cout << "possible" << endl;
    else
        cout << "impossible" << endl;
    
    return 0;
}
