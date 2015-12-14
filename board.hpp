#pragma once
#include <map>
#include <vector>
#include <iostream>

#include "point.hpp"
#include "move.hpp"
#include "figure.hpp"
#include "figures/pawn.hpp"
#include "figures/king.hpp"
#include "figures/knight.hpp"
#include "figures/queen.hpp"
#include "figures/bishop.hpp"
#include "figures/rook.hpp"


typedef std::map<int,  std::map< int, CFigure* > > chessboardmap;

class CBoard 
{
    friend class Move;
    friend class EnpassantFlag;
    
private:
    chessboardmap m_board;
    
protected:
    
public:
    CBoard( void );
    ~CBoard();
    
    void printBoard();
    CFigure* getFigure(int x, int y);
    CFigure* getFigure(const Point &pt);
    
    int evaluateBoard(int color);
};
