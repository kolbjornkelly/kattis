//
//  main.cpp
//  Cetvrta
//
//  Created by Kolbjørn Kelly on 22.03.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main() {
    
    int x_out, y_out;
    
    set<int> x_coord, y_coord;
    
    for (int i = 0; i < 3; i++)
    {
        string input;
        getline(cin, input);
        
        istringstream iss(input);
        int x, y;
        iss >> x >> y;
        
        if (x_coord.count(x))
            x_coord.erase(x);
        
        else
            x_coord.insert(x);
        
        if (y_coord.count(y))
            y_coord.erase(y);
        
        else
            y_coord.insert(y);
    }
    
    
    cout << *x_coord.begin() << " " << *y_coord.begin() << endl;
    return 0;
}
