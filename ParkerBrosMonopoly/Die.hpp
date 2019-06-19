//
//  Die.hpp
//  ParkerBrosMonopoly
//
//  Created by Alec J Vaughn on 6/17/19.
//  Copyright © 2019 VaughnSoftWorks. All rights reserved.
//

#ifndef Die_h
#define Die_h
#pragma once

class Die {
    int sides;
    int faceValue;
public:
    Die();
    Die(int sides);
    int roll();
};

#endif /* Die_h */
