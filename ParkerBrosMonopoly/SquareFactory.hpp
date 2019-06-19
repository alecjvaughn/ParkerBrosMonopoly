//
//  SquareFactory.hpp
//  ParkerBrosMonopoly
//
//  Created by Alec J Vaughn on 6/18/19.
//  Copyright © 2019 VaughnSoftWorks. All rights reserved.
//

#ifndef SquareFactory_hpp
#define SquareFactory_hpp

#include "Square.hpp"

class SquareFactory {
    Square square;
public:
    Square * createSquare(int pos) {
        switch (pos) {
            case 1:
            case 3:
            
                <#statements#>
                break;
                
            default:
                break;
        }
        return null;
    }
};

#endif /* SquareFactory_hpp */
