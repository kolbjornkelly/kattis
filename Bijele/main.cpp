//
//  main.cpp
//  Bijele
//
//  Created by Kolbjørn Kelly on 24.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    
    int K, Q, R, B, Kn, P;
    cin >> K >> Q >> R >> B >> Kn >> P;
    
    cout << 1-K << " " << 1-Q << " " << 2-R << " " << 2-B << " " << 2-Kn << " " << 8-P << endl;
    
    return 0;
}
