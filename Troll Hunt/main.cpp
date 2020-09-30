//
//  main.cpp
//  Troll Hunt
//
//  Created by Kolbjørn Kelly on 11.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double b, k, g;
    cin >> b >> k >> g;
    
    
    
    int groups = floor(k/g);
    
    int days = floor(b/groups);
    
    cout << days << endl;
    
    return 0;
}
