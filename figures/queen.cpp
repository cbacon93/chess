/*
 * queen.cpp
 *
 *  Created on: 18.06.2015
 *      Author: subco_000
 */

#include "queen.hpp"



CFQueen::CFQueen(int color) {
    m_color = color;
    m_sign = 'Q';
    
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
