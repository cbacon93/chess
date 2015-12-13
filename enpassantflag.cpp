//
//  enpassantflag.cpp
//  chess
//
//  Created by Marcel Haupt on 13.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#include "enpassantflag.hpp"
#include "figure.hpp"


void EnpassantFlag::setEnpassantFlag(Point &_hitpoint, Point & _figurepoint) {
    hitpoint = _hitpoint;
    figurepoint = _figurepoint;
    enpassantFlag = true;
}


EnpassantFlag::~EnpassantFlag() {
    if (figure != 0) {
        delete figure;
    }
}


void EnpassantFlag::doMove(CBoard & board) {
    if (figure != 0) {
        delete figure;
    }
    
    figure = board.m_board[figurepoint.getX()][figurepoint.getY()];
    board.m_board[figurepoint.getX()][figurepoint.getY()] = 0;
    enpassantFlag = false;
}


void EnpassantFlag::reverseMove(CBoard &board) {
    board.m_board[figurepoint.getX()][figurepoint.getY()] = figure;
    figure = 0;
    enpassantFlag = true;
}