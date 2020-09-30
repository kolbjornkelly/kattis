//
//  main.cpp
//  DRM Messages
//
//  Created by Kolbjørn Kelly on 03.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int wordSum(vector<char> vec)
{
    int sum = 0;
    
    for (vector<char>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        sum += (int(*it) - 65);
    }
    return sum;
}

void rotateVec(vector<char> &vec, int sum)
{
    for (vector<char>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        *it = (*it - 'A' + sum) % 26 + 'A';
        cout << *it << endl;
    }
}

string mergeVec(vector<char> vec1, vector<char> vec2)
{
    string out;
    long size = vec1.size();
    int arr[size];
    int i = 0;
    
    for (vector<char>::iterator it = vec2.begin(); it != vec2.end(); it++)
    {
        arr[i] = int(*it);
        i++;
    }
    
    i = 0;
    
    for (vector<char>::iterator it = vec1.begin(); it != vec1.end(); it++)
    {
        *it = (*it + arr[i] - 'A') % 26 + 'A';
        out += *it;
    }
    
    return out;
}

/*

int main()
{
    string input;
    cin >> input;
    
    vector<char> vec1, vec2;
    
    
    for (int i = 0; i < input.size(); i++)
    {
        if ( i < input.size()/2)
            vec1.push_back(input[i]);
        
        else
            vec2.push_back(input[i]);
    }
    
    int sum1 = wordSum(vec1);
    int sum2 = wordSum(vec2);
    
    
    rotateVec(vec1, sum1);
    rotateVec(vec2, sum2);
    
    
    cout << mergeVec(vec1, vec2) << endl;

    return 0;
}
 
*/

