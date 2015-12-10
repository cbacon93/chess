//
//  movingPrefab.hpp
//  chess
//
//  Created by Marcel Haupt on 09.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#pragma once
#include <vector>

#include "point.hpp"
#include "move.hpp"
#include "board.hpp"


class MovingPrefab {
private:
    int dx, dy;
    
    bool continuous;
    bool allowBeat;
    bool requireBeat;
    
    bool requireXPos;
    bool requireYPos;
    int reqX;
    int reqY;
public:
    MovingPrefab(int _dx, int _dy, bool _continuous = false, bool _allowBeat = true, bool _requireBeat = false, int _reqX = -1, int _reqY = -1);
    
    std::vector< Move > getMoves(Point & point, CBoard & board);
};
