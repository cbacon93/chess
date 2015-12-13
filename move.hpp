#pragma once

#include "point.hpp"

class CFigure;
class CBoard;


class Move
{
private:
    Point from;
    Point to;
    
    CFigure * fromfig;
    CFigure * tofig;
    
    void deleteFigs();
    
    
    bool isRochade;
    int rochadeX;
    
    
    //enpassant
    bool flagEnpassant = false;;
    Point enpassantPoint;
public:
    Move(Point from, Point to, int _rochadeX = -1);
    Move();
    ~Move();
    Point getFrom();
    Point getTo();
    
    void doMove(CBoard &board);
    void reverseMove(CBoard &board);
    bool compareTo (Move &move);
    CFigure * getMovedFig() { return fromfig; }
    int getRochadeX() { return rochadeX; }
    
    void setEnpassantFlag(Point & pt) { flagEnpassant = true; enpassantPoint = pt; }
};
