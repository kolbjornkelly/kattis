//
//  main.cpp
//  Encoded Message
//
//  Created by Kolbjørn Kelly on 09.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned int N;
    cin >> N;
    
    while (N--)
    {
        string in;
        cin >> in;
        
        int length = sqrt(in.length());
        char mat1[length][length];
        
        int count = 0;
        
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                mat1[i][j] = in[count];
                count++;
            }
        }

        for (int i = (length - 1); i >= 0; i--)
        {
            for (int j = 0; j < length; j++)
            {
                cout << mat1[j][i];
            }
        }
        cout << endl;
    }
    
    return 0;
}
