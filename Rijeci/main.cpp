//
//  main.cpp
//  Rijeci
//
//  Created by Kolbjørn Kelly on 16.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
 
    unsigned int K;
    cin >> K;
    K--;
    int arr[2] = {1,1};
    int prevArr[2] = {0,1};
    
    while (K--)
    {
        arr[0] = prevArr[1];
        arr[1] = (prevArr[0] + prevArr[1]);
        
        prevArr[0] = arr[0];
        prevArr[1] = arr[1];
    }
    
    cout << prevArr[0] << " " << prevArr[1] << endl;
    
    return 0;
}
