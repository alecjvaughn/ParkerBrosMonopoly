//
//  Property.hpp
//  ParkerBrosMonopoly
//
//  Created by Alec J Vaughn on 6/17/19.
//  Copyright © 2019 VaughnSoftWorks. All rights reserved.
//

#ifndef Property_h
#define Property_h

#include "Square.hpp"
#include "Player.hpp"

class Property : public Square {
    char name[10];
    int purchaseCost;
    Player owner;
public:
    Property(int pos, char name[]) : Square(pos);
};

#endif /* Property_h */
