//
//  main.cpp
//  Pot
//
//  Created by Kolbjørn Kelly on 26.10.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    int N, P;
    long tot = 0;
    cin >> N;
    
    while (N--)
    {
        cin >> P;
        tot += pow(P/10,P%10);
    }
    
    cout << tot << endl;
    return 0;
}
