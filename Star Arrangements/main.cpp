//
//  main.cpp
//  Star Arrangements
//
//  Created by Kolbjørn Kelly on 13.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

bool check(int a, int b, int sum)
{
    int count = 0;
    
    for (int i = 0; i < sum/2; i++)
    {
        count += a;
        
        if (count == sum)
            cout << a << "," << b << endl;
        
        count += b;
        
        if (count == sum)
            cout << a << "," << b << endl;
    }
    
    return 0;
}


int main()
{
    unsigned int input;
    cin >> input;
    
    cout << input << ":" << endl;
    
    for (int i = 2; i <= input/2 + 1; i++)
    {
        for (int j = i-1; j <= i; j++)
        {
            check(i, j, input);
        }
    }
    
    return 0;
}
