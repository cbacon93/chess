//
//  enpassantflag.hpp
//  chess
//
//  Created by Marcel Haupt on 13.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#pragma once
#include "point.hpp"
#include "board.hpp"

class EnpassantFlag {
private:
    Point point;
    CFigure * figure;
    
public:
    EnpassantFlag(Point &pt);
    void doMove(CBoard & board);
    void reverseMove(CBoard & board);
    ~EnpassantFlag();
};
