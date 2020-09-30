//
//  main.cpp
//  No Duplicates
//
//  Created by Kolbjørn Kelly on 21.03.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <set>
using namespace std;


int main ()
{
    string input;
    getline(cin, input);
    
    istringstream iss(input);
    string word;
    
    set<string> wordSet;
    
    bool wordsRepeated = false;
    
    while (iss >> word)
    {
        if (wordSet.count(word))
            wordsRepeated = true;
        else
            wordSet.insert(word);
    }

    
    if (wordsRepeated)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
    
    return 0;
}
