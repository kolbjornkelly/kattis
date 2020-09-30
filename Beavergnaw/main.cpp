//
//  main.cpp
//  Beavergnaw
//
//  Created by Kolbjørn Kelly on 09.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double D, V;
    cin >> D >> V;
    
    while (D && V)
    {
        double d = pow((((-6) * V) / M_PI) + pow(D, 3), 1.0/3);
        
        cout << fixed;
        cout << setprecision(7) << d << endl;
        
        cin >> D >> V;
    }
    
    
    return 0;
}
