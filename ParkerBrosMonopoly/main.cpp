//
//  main.cpp
//  ParkerBrosMonopoly
//
//  Created by Alec J Vaughn on 6/17/19.
//  Copyright © 2019 VaughnSoftWorks. All rights reserved.
//

#include <iostream>
#include "Die.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int roll = 0;
    Die die;
    do {
        cout << "you rolled: " << die.roll() << endl;
        cout << "roll again? ";
        cin >> roll;
    } while (roll == 1);
    return 0;
}
