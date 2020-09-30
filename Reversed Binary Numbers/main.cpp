//
//  main.cpp
//  Reversed Binary Numbers
//
//  Created by Kolbjørn Kelly on 28.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

char toBinary(int x)
{
    char out = x;
    unsigned int menth;
    
    while (x != 0)
    {
        menth = x%10;
        x /= 10;
    }
    
    return out;
}

int revBinary(int x)
{
    unsigned int out;
    
    return out;
}

int toDecimal(string x)
{
    int out = 0;
    
    for (iterator<char, string> it = x.begin(); it != x.end(); it++)
    {
        
    }
    
    return out;
}

int main()
{
    unsigned int N;
    cin >> N;
    
    
    
    return 0;
}
