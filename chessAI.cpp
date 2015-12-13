//
//  chessAI.cpp
//  chess
//
//  Created by Marcel Haupt on 12.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#include "chessAI.hpp"
#include "board.hpp"
#include "move.hpp"
#include "point.hpp"


ChessAI::ChessAI():startEbene(2)  {};


Move ChessAI::getNextMove(CBoard & board, int color) {
    startEbene = 4;
    Move move = Move();
    doAllMoves(board, color, startEbene, move);
    return move;
}



int ChessAI::playerIsCheckmateOrRemis(CBoard & board, int nextPlayerRound) {
    Move move = Move();
    int value = doAllMoves(board, nextPlayerRound, 2, move);
    
    if (value <= -8000) {
        return (nextPlayerRound==0)?0:1;
    } else if (value >= 8000) {
        return (nextPlayerRound==0)?1:0;
    }
    return -1;
}



int ChessAI::doAllMoves(CBoard & board, int color, int ebenen, Move & savemove, int alpha, int beta) {
    
    //get all moves
    std::vector< Move > moves = std::vector< Move >();
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<8; j++)
        {
            CFigure * figure = board.getFigure(i, j);
            if (figure != 0) {
                if (figure->getColor() == color) {
                    Point pt = Point(i, j);
                    figure->getMoves(pt, board, moves);
                }
            }
        }
    }
    
    //abort
    if (ebenen == 0 || moves.size() <= 0) {
        return board.evaluateBoard(color) + (int)moves.size();
    }
    
    //do every move
    int bestValue = alpha;
    for(int i=0; i< moves.size(); i++) {
        moves[i].doMove(board);
        Move move = Move();
        int value = -doAllMoves(board, (color==0)?1:0 , ebenen -1, move, -beta, -bestValue);
        moves[i].reverseMove(board);
        
        if (value > bestValue) {
            bestValue = value;
            
            if (value >= beta)
                break;
            
            //save move
            if (ebenen == startEbene) {
                savemove = moves[i];
            }
        }
    }
    
    return bestValue;
}