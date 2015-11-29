#include "knight.hpp"



CFKnight::CFKnight(int color) {
    m_color = color;
    m_sign = 'H';

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

