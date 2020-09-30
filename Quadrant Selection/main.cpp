//
//  main.cpp
//  Quadrant Selection
//
//  Created by Kolbjørn Kelly on 24.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    
    if (x > 0 && y > 0)
        cout << "1" << endl;
    else if ( x < 0 && y > 0)
        cout << "2" << endl;
    else if (x < 0 && y < 0)
        cout << "3" << endl;
    else
        cout << "4" << endl;
    
    
    
    return 0;
}
