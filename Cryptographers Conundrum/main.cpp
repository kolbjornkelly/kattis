//
//  main.cpp
//  Cryptographers Conundrum
//
//  Created by Kolbjørn Kelly on 22.03.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    unsigned int count = 0;
    
    string input;
    cin >> input;
    
    for (int i = 0; i < input.length(); i++)
    {
        if (i % 3 == 0 && input[i] == 'P') {}
            
        else if (i % 3 == 1 && input[i] == 'E') {}
            
        else if (i % 3 == 2 && input[i] == 'R') {}
            
        else
            count++;
    }
    
    cout << count << endl;
    
    return 0;
}
