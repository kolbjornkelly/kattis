//
//  main.cpp
//  Death Knight Hero
//
//  Created by Kolbjørn Kelly on 28.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;


int main()
{
    unsigned int n, count;
    cin >> n;
    count = n;
    
    string input;
    char prev, curr;
    
    while (n--)
    {
        cin >> input;
        
        for (int i = 0; i < input.length(); i++)
        {
            curr = input[i];
            
            if (curr == 'D')
            {
                prev = input[i-1];
                
                if (prev == 'C')
                    count--;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
