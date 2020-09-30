//
//  main.cpp
//  Skener
//
//  Created by Kolbjørn Kelly on 04.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    unsigned int R, C, Zr, Zc;
    cin >> R >> C >> Zr >> Zc;
    cin.ignore();
    string output;
    
    for (int i = 0; i < R; i++)
    {
        string input;
        getline(cin, input);
        
        istringstream iss(input);
        char c;
        string line = "";
        
        while (iss >> c)
        {
            for (int zc = 0; zc < Zc; zc++)
            {
                line += c;
            }
        }
        
        for (int r = 0; r < Zr; r++)
        {
            output += line;
            output += "\n";
        }
    }
    cout << output;
    
    return 0;
}
