//
//  main.cpp
//  Sibice
//
//  Created by Kolbjørn Kelly on 27.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    unsigned int N, W, H;
    cin >> N >> W >> H;

    for (int i = 0; i < N; i++)
    {
        unsigned int match;
        cin >> match;
        if (match*match > (W*W + H*H))
            cout << "NE" << endl;
        else
            cout << "DA" << endl;
    }
    return 0;
}
