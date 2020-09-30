//
//  main.cpp
//  Racing Around the Alphabet
//
//  Created by Kolbjørn Kelly on 23.04.2018.
//  Copyright © 2018 kellykolly. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main()
{
    double r = 30.0;
    double o = 2 * M_PI * r;
    double dist = o / 28; // Maybe divide by 27 here
    
    unsigned int N;
    cin >> N;
    cin.ignore();
    
    while (N--)
    {
        double distance = 0.0;
        int pickuptime = 0;
        string in;
        getline(cin, in);
        istringstream iss(in);
        char c, prev;
        bool flag = false;
        
        while (iss >> c)
        {
            if (flag == false) // Start at init position
            {
                flag = true;
            }
            
            else if (c == ' ')
            {
                distance += (abs(prev-91));
                pickuptime++;
            }
            
            else if (int(c) == 39)
            {
                distance += (abs(prev-92));
                pickuptime++;
            }
            
            else
            {
                distance += (abs(prev-c));
                pickuptime++;
            }
            
            prev = c;
            cout << c;
        }
        
        double time = (dist * distance) / 15.0 + pickuptime;
        cout << endl << time << endl;
    }
    
    return 0;
}
