//
//  main.cpp
//  ICPC Awards
//
//  Created by Kolbjørn Kelly on 21.03.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <istream>
#include <string>
#include <sstream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    unsigned int N;
    cin >> N;
    
    N++;
    map<string, string> winners;
    vector<pair<string, string>> everyoneVec, winnersVec;
    
    while (N--)
    {
        string input, uni, team;
        getline(cin, input);
        istringstream iss(input);
        
        iss >> uni >> team;
        
        if (!winners.count(uni) && winners.size() <= 12)
        {
            winners.insert(make_pair(uni, team));
            winnersVec.push_back(make_pair(uni, team));
        }
    }

    for (vector<pair<string, string>>::iterator it = winnersVec.begin(); it != winnersVec.end(); it++)
    {
        cout << it -> first << " " << it -> second << endl;
    }
    
    
    return 0;
}
