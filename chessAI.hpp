//
//  chessAI.hpp
//  chess
//
//  Created by Marcel Haupt on 12.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#pragma once
#include <vector>

class Move;
class CBoard;

class ChessAI {
private:
    int startEbene;
    int doAllMoves(CBoard & board, int color, int ebenen, Move & savemove);
public:
    ChessAI();
    Move getNextMove(CBoard & board, int color);
};
