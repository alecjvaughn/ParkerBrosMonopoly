//
//  Square.hpp
//  ParkerBrosMonopoly
//
//  Created by Alec J Vaughn on 6/17/19.
//  Copyright © 2019 VaughnSoftWorks. All rights reserved.
//

#ifndef Square_h
#define Square_h
#pragma once

#include "Player.hpp"

class Square {
    int pos;
public:
    Square(int pos);
    bool doSomething(Player p);
};

#endif /* Square_h */
