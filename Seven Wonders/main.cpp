//
//  main.cpp
//  Seven Wonders
//
//  Created by Kolbjørn Kelly on 24.10.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    unsigned int T = 0, C = 0, G = 0, tot = 0;
    string input;
    cin >> input;
    
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'T')
            T++;
        else if (input[i] == 'C')
            C++;
        else if (input[i] == 'G')
            G++;
    }
    
    tot = T*T + C*C + G*G;
    
    while (T > 0 && C > 0 && G > 0)
    {
        tot += 7;
        T--;
        C--;
        G--;
    }
    
    cout << tot << endl;
    return 0;
}

