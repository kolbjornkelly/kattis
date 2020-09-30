//
//  main.cpp
//  Bela
//
//  Created by Kolbjørn Kelly on 20.12.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <map>
#include <sstream>

using namespace std;


int main()
{
    
    int values[] = {11, 4, 3, 2, 10, 0, 0, 0};
    int trump_values[] = {11, 4, 3, 20, 10, 14, 0, 0};
    
    int N, sum = 0;
    char trump;
    
    string input;
    getline(cin, input);
    
    istringstream iss(input);
    
    iss >> N >> trump;
    
    for (int i = 0; i < 4 * N; i++)
    {
        string input;
        getline(cin, input);
        
        string::iterator it = input.begin();
        char value = *it++;
        char suit = *it;
        
        int index;
        
        switch (value) {
            case 'A':
                index = 0;
                break;
            case 'K':
                index = 1;
                break;
            case 'Q':
                index = 2;
                break;
            case 'J':
                index = 3;
                break;
            case 'T':
                index = 4;
                break;
            case '9':
                index = 5;
                break;
            case '8':
                index = 6;
                break;
            case '7':
                index = 7;
                break;
                
            default:
                break;
        }
        
        if (suit == trump)
            sum += trump_values[index];
        else
            sum += values[index];
    }
    
    cout << sum << endl;
    
    return 0;
}
