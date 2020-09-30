//
//  main.cpp
//  Kemija
//
//  Created by Kolbjørn Kelly on 09.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    string in;
    getline(cin, in);
    
    string vovels = "aeiou";
    
    for (int i = 0; i < in.length(); i++)
    {
        cout << in[i];
        
        for (int j = 0; j < vovels.length(); j++)
        {
            if (vovels[j] == in[i])
            {
                i += 2;
            }
        }
    }
    cout << endl;
    return 0;
}
