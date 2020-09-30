//
//  kattis.cpp
//  kattis
//
//  Created by Kolbjørn Kelly on 11.01.2017.
//  Copyright © 2017 Kolbjørn Kelly. All rights reserved.
//

#include "kattis.hpp"
#include <iostream>
using namespace std;

int compass(int x, int y) {
    int try1 = x - y;
    int try2 = x + 360 - y;
    if (abs(try1)>abs(try2))
        return try2;
    else
        return try1;
}

int main() {
    cout << compass(270, 45) << endl;
}
