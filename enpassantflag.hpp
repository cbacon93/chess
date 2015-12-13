//
//  enpassantflag.hpp
//  chess
//
//  Created by Marcel Haupt on 13.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#pragma once

class CFigure;
#include "point.hpp"
#include "board.hpp"



class EnpassantFlag {
private:
    Point hitpoint;
    Point figurepoint;
    CFigure * figure;
    bool enpassantFlag = false;
    
public:
    void setEnpassantFlag(Point &hitpoint, Point & figurepoint);
    void doMove(CBoard & board);
    void reverseMove(CBoard & board);
    bool getFlag() { return enpassantFlag; }
    void resetFlag() { enpassantFlag = false; }
    ~EnpassantFlag();
    
    const Point & getHitPoint() const { return hitpoint; }
};
