//
//  main.cpp
//  Ptice
//
//  Created by Kolbjørn Kelly on 04.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    vector<char> adrian = {'A', 'B', 'C'};
    vector<char> bruno = {'B', 'A', 'B', 'C'};
    vector<char> goran = {'C', 'C', 'A', 'A', 'B', 'B'};
    vector<char> ans;
    
    map<string, int> scores = {make_pair("Adrian", 0), make_pair("Bruno", 0), make_pair("Goran", 0)};
    
    unsigned int N;
    cin >> N;
    cin.ignore();
    
    string input;
    getline(cin, input);
    
    istringstream iss(input);
    char c;
    
    while (iss >> c)
    {
        ans.push_back(c);
    }
    
    for (int i = 0; i < N; i++)
    {
        if (ans[i] == adrian[i % 3])
            scores["Adrian"]++;
        
        if (ans[i] == bruno[i % 4])
            scores["Bruno"]++;
        
        if (ans[i] == goran[i % 6])
            scores["Goran"]++;
    }
    
    int max = 0;
    
    for (map<string, int>::iterator it = scores.begin(); it != scores.end(); it++)
    {
        if (it -> second > max)
            max = it -> second;
    }
    
    cout << max << endl;
    
    for (map<string, int>::iterator it = scores.begin(); it != scores.end(); it++)
    {
        if (it -> second == max)
            cout << it -> first << endl;
    }
    
    return 0;
}
