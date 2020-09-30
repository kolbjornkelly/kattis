//
//  main.cpp
//  Skocimis
//
//  Created by Kolbjørn Kelly on 16.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    unsigned int A, B, C;
    cin >> A >> B >> C;
    
    int diff = B - A;
    
    if (diff > (C - B))
        cout << diff-1 << endl;
    else
        cout << C-B-1 << endl;
    
    return 0;
}
