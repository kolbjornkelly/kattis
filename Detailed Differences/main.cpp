//
//  main.cpp
//  Detailed Differences
//
//  Created by Kolbjørn Kelly on 09.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    
    while (n--)
    {
        string input1, input2;
        cin >> input1 >> input2;
        cout << input1 << endl << input2 << endl;
        
        for (int i = 0; i < input1.length(); i++)
        {
            if (input1[i] == input2[i])
                cout << ".";
            else
                cout << "*";
        }
        
        cout << endl << endl;
    }
    return 0;
}
