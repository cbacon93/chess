#pragma once

#include "point.hpp"

class CFigure;
class CBoard;
class EnpassantFlag;

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
    
    bool hitEnpassant = false;
public:
    Move(Point from, Point to, int _rochadeX = -1);
    Move();
    ~Move();
    Point getFrom();
    Point getTo();
    
    void doMove(CBoard &board);
    void doMove(CBoard &board, EnpassantFlag &eflag);
    void reverseMove(CBoard &board);
    void reverseMove(CBoard &board, EnpassantFlag &eflag);
    bool compareTo (Move &move);
    CFigure * getMovedFig() { return fromfig; }
    int getRochadeX() { return rochadeX; }
    
    void setEnpassantFlag(Point & pt) { flagEnpassant = true; enpassantPoint = pt; }
    void setHitEnpassant() { hitEnpassant = true; }
};
