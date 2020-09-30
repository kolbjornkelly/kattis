//
//  main.cpp
//  Tarifa
//
//  Created by Kolbjørn Kelly on 22.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int X, N;
    cin >> X >> N;
    int tot = X;
    
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x;
        y = X - x;
        tot += y;
    }
    
    cout << tot << endl;
    

    return 0;
}
