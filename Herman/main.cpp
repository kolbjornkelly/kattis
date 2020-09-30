//
//  main.cpp
//  Herman
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
    unsigned int R;
    cin >> R;

    double euclidian = M_PI * R * R;
    double minkowiskian = R * R * 2;
    
    cout << fixed;
    cout << setprecision(6) << euclidian << endl << minkowiskian << endl;
    
    return 0;
}
