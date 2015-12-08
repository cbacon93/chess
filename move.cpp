#include "move.hpp"


CMove::CMove(int x, int y) {
    m_modx = x;
    m_mody = y;
}


const void CMove::getMove(int & x, int & y) {
    x = m_modx;
    y = m_mody;
}



CMove CMove::operator+(CMove &move) {
    int x, y;
    move.getMove(x, y);
    
    return CMove(x+m_modx, y+m_mody);
}
