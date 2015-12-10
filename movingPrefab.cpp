//
//  movingPrefab.cpp
//  chess
//
//  Created by Marcel Haupt on 09.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#include "movingPrefab.hpp"




MovingPrefab::MovingPrefab(int _dx, int _dy, bool _continuous, bool _allowBeat, bool _requireBeat, int _reqX, int _reqY) {
    dx = _dx;
    dy = _dy;
    
    continuous = _continuous;
    allowBeat = _allowBeat;
    requireBeat = _requireBeat;
    
    
    if (_reqX >= 0) {
        reqX = _reqX;
        requireXPos = true;
    }
    
    if (_reqY >= 0) {
        reqY = _reqY;
        requireYPos = true;
    }
}


std::vector< Move > MovingPrefab::getMoves(Point & point, CBoard & board) {
    std::vector< Move > moves = std::vector< Move >();
    
    for (int i=1; i<=8; i++) {
        Point pt = Point(point.getX() + i*dx, point.getY() + i*dy);
        if (!pt.isValid()) break;
        
        
        if ((requireXPos && point.getX() != reqX) || (requireYPos && point.getY() != reqY)) {
            break;
        }
        
        
        if (board.getFigure(pt) != 0) {
            if (allowBeat) {
                moves.push_back(Move(point, pt));
            }
            break;
        } else {
            if (requireBeat) {
                moves.push_back(Move(point, pt));
            }
        }
        
        
        if (!continuous) break;
    }
    
    return moves;
}






