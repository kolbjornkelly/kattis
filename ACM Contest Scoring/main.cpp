//
//  main.cpp
//  ACM Contest Scoring
//
//  Created by Kolbjørn Kelly on 16.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

int main()
{
    int time, score = 0, solved = 0;
    char task;
    string ans;
    
    map<char, int> pens;
    
    cin >> time >> task >> ans;
    cin.ignore();
    
    while (time != -1)
    {
        if (ans == "right")
        {
            score += (time + pens[task]);
            solved++;
        }
        
        
        else if (ans == "wrong")
            pens[task] += 20;
        
        cin >> time >> task >> ans;
    }
    
    cout << solved << " " << score << endl;
    
    return 0;
}
