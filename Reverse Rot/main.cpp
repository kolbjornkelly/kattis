//
//  main.cpp
//  Reverse Rot
//
//  Created by Kolbjørn Kelly on 17.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string reverseString(string str)
{
    string out;
    
    for (string::iterator it = str.end(); it != (str.begin() - 1); it--)
    {
        out += *it;
    }
    return out;
}

string shiftString(int N, string str)
{
    string out = str;
    
    while (N--)
    {
        string oldOut = "";
        
        for (string::iterator it = out.begin(); it != out.end(); it++)
        {
            if (*it == 'Z')
                oldOut += '_';
            
            else if (*it == '_')
                oldOut += '.';
            
            else if (*it == '.')
                oldOut += 'A';
            
            else
                oldOut += char(*it + 1);
        }
        out = oldOut;
    }
    
    return out;
}



int main()
{
    unsigned int N;
    cin >> N;
    
    while (N)
    {
        string in;
        cin >> in;
        
        string reversed = reverseString(in);
        cout << reversed << endl;
        string shifted = shiftString(N, reversed);
        
        cout << shifted << endl;
        
        cin >> N;
    }
    return 0;
}
