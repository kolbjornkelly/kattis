//
//  main.cpp
//  Hissing Microphone
//
//  Created by Kolbjørn Kelly on 28.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    string output = "no hiss";
    cin >> input;
    
    char curr;
    char prev;
    
    for (int i = 0; i < input.length(); i++)
    {
        curr = input[i];
        
        if (curr == 's')
        {
            prev = input[i-1];
            if (curr == prev)
                output = "hiss";
        }
    }
    
    cout << output << endl;

    return 0;
}
