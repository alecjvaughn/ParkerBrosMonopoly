//
//  Board.hpp
//  ParkerBrosMonopoly
//
//  Created by Alec J Vaughn on 6/17/19.
//  Copyright © 2019 VaughnSoftWorks. All rights reserved.
//

#ifndef Board_h
#define Board_h

#include "Die.hpp"
#include "Square.hpp"
#include "Property.hpp"

class Board {
    int houses;
    int hotels;
    Die dice[2];
    Square sqaures[40];
    Property deeds[28];
};

#endif /* Board_h */
