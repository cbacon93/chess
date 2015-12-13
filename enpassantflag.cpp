//
//  enpassantflag.cpp
//  chess
//
//  Created by Marcel Haupt on 13.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#include "enpassantflag.hpp"


EnpassantFlag::EnpassantFlag(Point &pt)
: point(pt) {}


EnpassantFlag::~EnpassantFlag() {
    if (figure != 0) {
        delete figure;
    }
}


void EnpassantFlag::doMove(CBoard & board) {
    figure = board.m_board[point.getX()][point.getY()];
}


void EnpassantFlag::reverseMove(CBoard &board) {
    board.m_board[point.getX()][point.getY()] = figure;
}