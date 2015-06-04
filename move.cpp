#include "move.hpp"


CMove::CMove(int x, int y) {
    m_modx = x;
    m_mody = y;
}


void CMove::getMove(int & x, int & y) {
    x = m_modx;
    y = m_mody;
}
