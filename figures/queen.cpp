/*
 * queen.cpp
 *
 *  Created on: 18.06.2015
 *      Author: subco_000
 */

#include "queen.hpp"



CFQueen::CFQueen(int color) {
    m_color = color;
    
    if (m_color == 0) {
        m_sign = "\u265B";
    } else {
        m_sign = "\u2655";
    }
    
    for (int i=1; i<= 9; i++) {
        m_movesList.push_back(CMove(0, i));
        m_movesList.push_back(CMove(0, -i));
        m_movesList.push_back(CMove(i, i));
        m_movesList.push_back(CMove(-i, i));
        m_movesList.push_back(CMove(i, -i));
        m_movesList.push_back(CMove(-i, -i));
        m_movesList.push_back(CMove(-i, 0));
        m_movesList.push_back(CMove(i, 0));
    }
}


std::vector<CMove> CFQueen::getMoves(int x, int y) {
    return m_movesList;
}
