//
//  main.cpp
//  Number Fun
//
//  Created by Kolbjørn Kelly on 21.03.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;


int main()
{
    int N;
    cin >> N;
    
    while (N--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a + b == c || a - b == c || b - a == c || a * b == c || (a % b == 0 && a / b == c) || (b % a == 0 && b / a == c))
            cout << "Possible" << endl;
        
        else
            cout << "Impossible" << endl;
    }
    

    return 0;
}
