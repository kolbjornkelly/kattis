//
//  main.cpp
//  Take Two Stones
//
//  Created by Kolbjørn Kelly on 23.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if (N%2 == 0)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
    
    
    return 0;
}
