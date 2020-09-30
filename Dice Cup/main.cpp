//
//  main.cpp
//  Dice Cup
//
//  Created by Kolbjørn Kelly on 22.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int dice1, dice2;
    cin >> dice1 >> dice2;
    int diff;
    int smaller;
    
    if (dice1 > dice2)
    {
        diff = dice1 - dice2;
        smaller = dice2;
    }
    else
    {
        diff = dice2 - dice1;
        smaller = dice1;
    }
    
    for (int i = 1; i <= diff + 1; i++)
    {
        cout << smaller + i << endl;
    }
    
    return 0;
}
