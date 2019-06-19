//
//  Player.hpp
//  ParkerBrosMonopoly
//
//  Created by Alec J Vaughn on 6/17/19.
//  Copyright © 2019 VaughnSoftWorks. All rights reserved.
//

#ifndef Player_h
#define Player_h
#include "Board.hpp"

class Player {
    int money;
    int rolls;
    int rollAgain;
    bool inJail;
public:
    Player();
    bool roll(Die dice[]);
    bool manage(Property list[]);
    bool trade(Player p, Property list[]);
    bool postBail(bool card);
};

#endif /* Player_h */
