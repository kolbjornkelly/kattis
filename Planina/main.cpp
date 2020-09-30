//
//  main.cpp
//  Planina
//
//  Created by Kolbjørn Kelly on 26.10.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int points = 9, squares = 4, N;
    cin >> N;
    N--;
    
    while (N--)
    {
        squares *= squares;
        points += squares;
    }
    
    cout << points << endl;
    
    return 0;
}
