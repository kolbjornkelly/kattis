//
//  main.cpp
//  Spavanac
//
//  Created by Kolbjørn Kelly on 27.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;
    
    M -= 45;
    if (M < 0)
    {
        M = 60 + M;
        
        H--;
        
        if (H < 0)
            H = 24 + H;
    }
    
    cout << H << " " << M;
    
    
    return 0;
}
