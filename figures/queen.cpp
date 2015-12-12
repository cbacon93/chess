#include "queen.hpp"
#include "../movingPrefab.hpp"


CFQueen::CFQueen(int color) {
    m_color = color;
    m_figureValue = 9;
    
    if (m_color == 0) {
        m_sign = "\u265B";
    } else {
        m_sign = "\u2655";
    }
    
    m_movesList.push_back(MovingPrefab(0, 1, true));
    m_movesList.push_back(MovingPrefab(0, -1, true));
    m_movesList.push_back(MovingPrefab(1, 1, true));
    m_movesList.push_back(MovingPrefab(-1, 1, true));
    m_movesList.push_back(MovingPrefab(1, -1, true));
    m_movesList.push_back(MovingPrefab(-1, -1, true));
    m_movesList.push_back(MovingPrefab(-1, 0, true));
    m_movesList.push_back(MovingPrefab(1, 0, true));
}

