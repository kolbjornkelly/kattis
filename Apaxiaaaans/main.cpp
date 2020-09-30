//
//  main.cpp
//  Apaxiaaaans
//
//  Created by Kolbjørn Kelly on 22.03.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    
    vector<char> word;
    
    string::iterator prev = input.begin();
    
    for (string::iterator curr = input.begin(); curr != input.end(); curr++)
    {
        if (*curr == *prev && curr != input.begin()) {}
        else
            word.push_back(*curr);
        
        prev = curr;
    }
    
    for (vector<char>::iterator it = word.begin(); it != word.end(); it++)
    {
        cout << *it;
    }
    
    cout << endl;
    
    return 0;
}
