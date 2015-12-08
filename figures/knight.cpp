#include "knight.hpp"



CFKnight::CFKnight(int color) {
    m_color = color;
    
    if (m_color == 0) {
        m_sign = "\u265E";
    } else {
        m_sign = "\u2658";
    }

    m_movesList.push_back(CMove(2, 1));
    m_movesList.push_back(CMove(2, -1));
    m_movesList.push_back(CMove(-2, 1));
    m_movesList.push_back(CMove(-2, -1));
    
    m_movesList.push_back(CMove(1, 2));
    m_movesList.push_back(CMove(-1, 2));
    m_movesList.push_back(CMove(1, -2));
    m_movesList.push_back(CMove(-1, -2));
    
}


std::vector<CMove> CFKnight::getMoves(int x, int y) {
    return m_movesList;
}

