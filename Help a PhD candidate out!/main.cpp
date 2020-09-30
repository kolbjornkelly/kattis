//
//  main.cpp
//  Help a PhD candidate out!
//
//  Created by Kolbjørn Kelly on 09.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>

using namespace std;

int main()
{
    unsigned int N;
    cin >> N;
    
    while (N--)
    {
        string in;
        cin >> in;
        
        if (in == "P=NP")
            cout << "skipped" << endl;
        
        else
        {
            int a, sum = 0;
            string c;
            istringstream iss(in);
            
            while (getline(iss, c, '+'))
            {
                a = stoi(c);
                sum += a;
            }
            cout << sum << endl;
        }
    }
    
    return 0;
}
