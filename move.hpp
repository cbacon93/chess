#pragma once

#include "point.hpp"
#include "heapitem.hpp"

class CFigure;
class CBoard;
class EnpassantFlag;

class Move : public HeapItem
{
private:
    Point from;
    Point to;
    
    CFigure * fromfig;
    CFigure * tofig;
    
    void deleteFigs();
    
    
    bool isRochade;
    int rochadeX;
    
    int moveValue1 = 0;
    int moveValue2 = 0;
    
    //enpassant
    bool flagEnpassant = false;;
    Point enpassantPoint;
    
    bool hitEnpassant = false;
public:
    Move(Point from, Point to, int _rochadeX = -1);
    Move();
    ~Move();
    const Point & getFrom() const;
    const Point & getTo() const;
    
    void doMove(CBoard &board);
    void doMove(CBoard &board, EnpassantFlag &eflag);
    void reverseMove(CBoard &board);
    void reverseMove(CBoard &board, EnpassantFlag &eflag);
    bool compareTo (Move &move);
    CFigure * getMovedFig() { return fromfig; }
    int getRochadeX() { return rochadeX; }
    
    void setEnpassantFlag(Point & pt) { flagEnpassant = true; enpassantPoint = pt; }
    void setHitEnpassant() { hitEnpassant = true; }
    
    void setMoveValues(int val1, int val2) { moveValue1 = val1; moveValue2 = val2; }
    int getMoveValue1() { return moveValue1; }
    int getMoveValue2() { return moveValue2; }
    
    int heapCompareTo(Move & mv);
};
