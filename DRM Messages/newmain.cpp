//
//  newmain.cpp
//  DRM Messages
//
//  Created by Kolbjørn Kelly on 06.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <utility>

using namespace std;


string divideString(string in, long start, long end)
{
    string out = in.substr(start, end);
    return out;
}

string rotateString(string in)
{
    unsigned int sum = 0;
    
    for (unsigned int i = 0; i < in.size(); i++)
    {
        sum += toupper(in[i] - 'A');
    }
    
    for (unsigned int i = 0; i < in.size(); i++)
    {
        in[i] = ((in[i] - 'A' + sum) % 26) + 'A';
    }
    return in;
}

string mergeStrings(string in1, string in2)
{
    string out = "";
    for (unsigned int i = 0; i < in1.size(); i++)
    {
        out += (in1[i] - 'A' + in2[i] - 'A') % 26 + 'A';
    }
    return out;
}


int main()
{
    string input;
    
    cin >> input;
    
    string firstHalf = divideString(input, 0, input.size()/2);
    string secondHalf = divideString(input, input.size()/2, input.size());
    
    string firstRotate = rotateString(firstHalf);
    string secondRotate = rotateString(secondHalf);
    
    cout << mergeStrings(firstRotate, secondRotate) << endl;

    
    
    
    return 0;
}


