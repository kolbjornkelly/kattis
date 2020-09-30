//
//  main.cpp
//  Estimating the Area of a Circle
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
    double r ;
    double m, c;
    
    cin >> r >> m >> c;
    
    while (r && m && c)
    {
        double trueArea = M_PI * r * r;
        double ratio = c / m;
        
        double diameter = 2 * r;
        
        double estimatedArea = ratio * pow(diameter, 2.0);
        
        cout << fixed;
        cout << setprecision(6) << trueArea << " " << estimatedArea << endl;
        
        cin >> r >> m >> c;
    }
    
    return 0;
}
