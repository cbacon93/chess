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
    
public:
    Move(Point from, Point to);
    Move();
    ~Move();
    Point getFrom();
    Point getTo();
    
    void doMove(CBoard &board);
    void reverseMove(CBoard &board);
    bool compareTo (Move &move);
    CFigure * getMovedFig() { return fromfig; }
};
