//
//  main.cpp
//  Soylent
//
//  Created by Kolbjørn Kelly on 16.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned int T, N;
    cin >> T;
    
    while (T--)
    {
        cin >> N;
        double out = (double) N / 400;
        cout << ceil(out) << endl;
    }
    
    return 0;
}
