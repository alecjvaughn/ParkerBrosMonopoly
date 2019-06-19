//
//  Die.cpp
//  ParkerBrosMonopoly
//
//  Created by Alec J Vaughn on 6/17/19.
//  Copyright © 2019 VaughnSoftWorks. All rights reserved.
//

#include "Die.hpp"
#include <ctime>
#include <cstdlib>
Die::Die() : sides(6) {}
Die::Die(int sides) : sides(sides) {}
int Die::roll() {
    return (rand() % Die::sides) + 1;
}
