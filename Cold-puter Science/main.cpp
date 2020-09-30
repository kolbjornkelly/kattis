//
//  main.cpp
//  Cold-puter Science
//
//  Created by Kolbjørn Kelly on 24.09.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int N;
    int count = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
            count++;
    }
    
    cout << count << endl;

    return 0;
}
