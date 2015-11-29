#include "bishop.hpp"



CFBishop::CFBishop(int color) {
    m_color = color;
    m_sign = 'B';
    
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

