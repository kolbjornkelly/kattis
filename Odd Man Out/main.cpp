//
//  main.cpp
//  Odd Man Out
//
//  Created by Kolbjørn Kelly on 18.11.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

void printVec(vector<int> *vec)
{
    vector<int>::iterator it;
    
    for (it = vec->begin(); it != vec->end(); it++)
    {
        cout << *it << endl;
    }
}

bool isInVector(vector<int> *vec, int x)
{
    vector<int>::iterator it;
    
    for (it = vec->begin(); it != vec->end(); it++)
    {
        if (*it == x)
            return true;
    }
    return false;
}

    int main()
{
    unsigned int N;
    string sa;
 
    cin >> N;
    
    int num;
    //cout << "Hello: " << sa << endl;
    
    for (int i = 0; i < N; i++)
    {
        cout << "we get here" << endl;
        unsigned int G;
        string C;
        vector<int> vec1;
        vector<int> vec2;
        
        cin >> G;
        getline(cin, C);
        
        istringstream ss(C);
        int n;
        while (getline(ss, C, ' ')) {
            cout << C << endl;
        }
        
        
    }
#ifdef BYEBYE
        {
            num = atoi(C.c_str());
            ss >> n;
            cout << n << endl;
            if (isInVector(&vec1, n))
            {
                vec2.push_back(n);
            }
            else
            {
                vec1.push_back(n);
            }
        }
        
        for (int j = 0; j < vec1.size(); j++)
        {
            if (!isInVector(&vec2, vec1[j]))
            {
                cout << "Case #" << i + 1 << ": " << vec1[j] << endl;
                break;
            }
        }
        cout << "Vec1:" << endl;
        printVec(&vec1);
        cout << "Vec2:" << endl;
        printVec(&vec2);
#endif
    
    
    
    
    return 0;
}
