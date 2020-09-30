//
//  main.cpp
//  Kornislav
//
//  Created by Kolbjørn Kelly on 14.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    
    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    
    sort(vec.begin(), vec.end());
    cout << (vec[0] * vec[2]) << endl;
    
    return 0;
}
