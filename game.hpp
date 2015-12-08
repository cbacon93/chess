//
//  game.hpp
//  chess
//
//  Created by Marcel Haupt on 08.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#pragma once
#include <iostream>

#include "board.hpp"

class CGame {
public:
    CGame();
    bool move();
    
private:
    int m_userColor;
    int m_userTurn;
    CBoard m_board;
    
};