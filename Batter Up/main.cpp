//
//  main.cpp
//  Batter Up
//
//  Created by Kolbjørn Kelly on 10.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    unsigned int input;
    cin >> input;
    int j = input;
    
    double sum = 0.00;
    
    for (int i = 0; i < j; i++)
    {
        double in;
        cin >> in;
        if (in != -1)
            sum += in;
        else
            input--;
    }
    
    cout << sum/input << endl;
    
    
    return 0;
}
