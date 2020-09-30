//
//  main.cpp
//  Pet
//
//  Created by Kolbjørn Kelly on 24.02.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include <set>

using namespace std;


int main()
{
    unsigned int lines = 5;
    int best[2];
    best[1] = 0;
    
    for (int i = 0; i < lines; i++)
    {
        unsigned int a, b, c, d;
        cin  >> a >> b >> c >> d;
        
        int sum = a+b+c+d;
        if (sum > best[1])
        {
            best[0] = i+1;
            best[1] = sum;
        }
    }
    
    cout << best[0] << " " << best[1] << endl;
    
    return 0;
}
