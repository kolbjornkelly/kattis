//
//  main.cpp
//  Stuck in a Time Loop
//
//  Created by Kolbjørn Kelly on 23.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "Abracadabra";
    int n;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << a << endl;
    }

    return 0;
}
