//
//  main.cpp
//  Sum Kind of Problem
//
//  Created by Kolbjørn Kelly on 16.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    unsigned int P;
    cin >> P;
    cin.ignore();
    int it, in;
    
    while (P--)
    {
        cin >> it >> in;
        
        int s1 = 0, s2 = 0, s3 = 0;
        
        for (int i = 1; i <= in; i++)
        {
            s1 += i;
        }
        
        for (int i = 1; i <= in*2; i++)
        {
            if (i % 2 != 0)
                s2 += i;
            else
                s3 += i;
        }
        
        cout << it << " " << s1 << " " << s2 << " " << s3 << endl;
    }
    
    return 0;
}
