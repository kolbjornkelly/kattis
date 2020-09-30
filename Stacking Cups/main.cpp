//
//  main.cpp
//  Stacking Cups
//
//  Created by Kolbjørn Kelly on 29.03.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
#include <map>
#include <sstream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    map<int, string> cups;
    
    while (N--)
    {
        int size;
        string colour;
        string input1, input2;
        cin >> input1 >> input2;
        
        if (isdigit(input1[0]))
        {
            size = stoi(input1) / 2;
            colour = input2;
        }
        
        else
        {
            size = stoi(input2);
            colour = input1;
        }
        
        ;
        cups.insert(make_pair(size, colour));
    }
    
    for (map<int, string>::iterator it = cups.begin(); it != cups.end(); it++)
    {
        cout << it -> second << endl;
    }
    
    
    return 0;
}
