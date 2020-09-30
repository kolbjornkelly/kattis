//
//  main.cpp
//  FizzBuzz
//
//  Created by Kolbjørn Kelly on 01.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    unsigned int X, Y, N;
    cin >> X >> Y >> N;
    
    for (int i = 1; i <= N; i++)
    {
        if (i%X == 0)
            cout << "Fizz";
        if (i%Y == 0)
            cout << "Buzz";
        if (i%X != 0 && i%Y != 0)
            cout << i;
        
        cout << endl;
    }
    
    return 0;
}
