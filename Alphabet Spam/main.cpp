//
//  main.cpp
//  Alphabet Spam
//
//  Created by Kolbjørn Kelly on 16.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
    string in;
    getline(cin, in);
    
    istringstream iss(in);
    char c;
    double space = 0, lower = 0, upper = 0, symbols = 0, total = 0;
    
    while (iss >> c)
    {
        if (c > 32 && c < 65)
            symbols++;
        else if (c < 91)
            upper++;
        else if (c == 95)
            space++;
        else if (c < 97)
            symbols++;
        else if (c < 123)
            lower++;
        else if (c < 127)
            symbols++;
        
        total++;
    }
    cout << fixed;
    cout << setprecision(6) << space/total << endl << lower/total << endl
    << upper/total << endl << symbols/total << endl;
    
    return 0;
}
