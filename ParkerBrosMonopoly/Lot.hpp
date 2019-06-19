//
//  Lot.hpp
//  ParkerBrosMonopoly
//
//  Created by Alec J Vaughn on 6/19/19.
//  Copyright © 2019 VaughnSoftWorks. All rights reserved.
//

#ifndef Lot_hpp
#define Lot_hpp

#include "Property.hpp"

class Lot : public Property {
public:
    Lot() : Property(int pos, char name);
};

#endif /* Lot_hpp */
