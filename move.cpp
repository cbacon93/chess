#include "move.hpp"
#include "board.hpp"


Move::Move(Point _from, Point _to) :
from(Point(_from.getX(), _from.getY())), to(Point(_to.getX(), _to.getY()))
{
    fromfig = 0;
    tofig = 0;
}


Move::Move(): from(Point(0, 0)), to(Point(0,0)) {
    fromfig = 0;
    tofig = 0;
}


Point Move::getFrom() {
    return from;
}


Point Move::getTo() {
    return to;
}


void Move::doMove(CBoard &board)  {
    deleteFigs();
    fromfig = board.m_board[from.getX()][from.getY()];
    tofig = board.m_board[to.getX()][to.getY()];
    
    board.m_board[from.getX()][from.getY()] = 0;
    board.m_board[to.getX()][to.getY()] = fromfig;
}


void Move::reverseMove(CBoard &board) {
    board.m_board[from.getX()][from.getY()] = fromfig;
    board.m_board[to.getX()][to.getY()] = tofig;
    
    fromfig = 0;
    tofig = 0;
}


void Move::deleteFigs() {
    /*if (fromfig != 0) {
        delete fromfig;
    }*/
    if (tofig != 0) {
        delete tofig;
    }
}

bool Move::compareTo (Move &move) {
    if (from.getX() == move.getFrom().getX() && from.getY() == move.getFrom().getY()) {
        if (to.getX() == move.getTo().getX() && to.getY() == move.getTo().getY()) {
            return true;
        }
    }
    return false;
}


Move::~Move() {
    deleteFigs();
}
