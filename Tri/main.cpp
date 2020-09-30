//
//  main.cpp
//  Tri
//
//  Created by Kolbjørn Kelly on 16.04.2018.
//  Copyright © 2018 Kolbjørn Kelly. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int first, sec, third;
    cin >> first >> sec >> third;
    
    if (first + sec == third)
        cout << first << "+" << sec << "=" << third << endl;
    
    else if (sec + third == first)
        cout << first << "=" << sec << "+" << third << endl;
    
    else if (first - sec == third)
        cout << first << "-" << sec << "=" << third << endl;
    
    else if (sec - third == first)
        cout << first << "=" << sec << "-" << third << endl;
    
    else if (first * sec == third)
        cout << first << "*" << sec << "=" << third << endl;
    
    else if (sec * third == first)
        cout << first << "=" << sec << "*" << third << endl;
    
    else if (first / sec == third)
        cout << first << "/" << sec << "=" << third << endl;
    
    else if (sec / third == first)
        cout << first << "=" << sec << "/" << third << endl;
    
    return 0;
}
