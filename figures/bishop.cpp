#include "bishop.hpp"



CFBishop::CFBishop(int color) {
    m_color = color;
    
    if (m_color == 0) {
        m_sign = "\u265D";
    } else {
        m_sign = "\u2657";
    }
    
    for (int i=1; i<= 9; i++) {
        m_movesList.push_back(CMove(i, i));
         m_movesList.push_back(CMove(-i, i));
         m_movesList.push_back(CMove(i, -i));
         m_movesList.push_back(CMove(-i, -i));
    }
}


std::vector<CMove> CFBishop::getMoves(int x, int y) {
    return m_movesList;
}

