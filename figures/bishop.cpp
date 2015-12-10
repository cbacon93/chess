#include "bishop.hpp"
#include "../movingPrefab.hpp"


CFBishop::CFBishop(int color) {
    m_color = color;
    
    if (m_color == 0) {
        m_sign = "\u265D";
    } else {
        m_sign = "\u2657";
    }
    
    m_movesList.push_back(MovingPrefab(1, 1, true));
    m_movesList.push_back(MovingPrefab(-1, 1, true));
    m_movesList.push_back(MovingPrefab(1, -1, true));
    m_movesList.push_back(MovingPrefab(-1, -1, true));
}


