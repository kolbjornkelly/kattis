//
//  main.cpp
//  Stand on Zanzibar
//
//  Created by Kolbjørn Kelly on 29.03.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    unsigned int N;
    cin >> N;
    
    while (N--)
    {
        int printSum = 0;
        int prev = 1, curr = 1;
        
        while (curr)
        {
            cin >> curr;
                
            if (curr > (2*prev))
                printSum += (curr - 2*prev);
                    
            prev = curr;
        }
        cout << printSum << endl;
    }
    
    return 0;
}
