//
//  main.cpp
//  Datum
//
//  Created by Kolbjørn Kelly on 22.03.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

int main() {
    
    // Take input and convert to date and month:
    string input;
    getline(cin, input);
    istringstream iss(input);
    
    int d, m;
    iss >> d >> m;
    
    // Convert to day:
    int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = d;
    
    for (int i = 0; i < m - 1; i++)
    {
        days += daysInMonths[i];
    }
    
    int day = (days + 2) % 7 ; // +2 because thursday was the first day of 2009 (and monday = 0)
    
    switch (day) {
        case 0:
            cout << "Monday" << endl;
            break;
            
        case 1:
            cout << "Tuesday" << endl;
            break;
            
        case 2:
            cout << "Wednesday" << endl;
            break;
            
        case 3:
            cout << "Thursday" << endl;
            break;
        
        case 4:
            cout << "Friday" << endl;
            break;
            
        case 5:
            cout << "Saturday" << endl;
            break;
            
        case 6:
            cout << "Sunday" << endl;
            break;
    }
    
    
    return 0;
}
