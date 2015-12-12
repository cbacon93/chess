#include "rook.hpp"
#include "../movingPrefab.hpp"



CFRook::CFRook(int color) {
	m_color = color;
    m_figureValue = 5;
    
    if (m_color == 0) {
        m_sign = "\u265C";
    } else {
        m_sign = "\u2656";
    }

    m_movesList.push_back(MovingPrefab(1, 0, true));
    m_movesList.push_back(MovingPrefab(0, 1, true));
    m_movesList.push_back(MovingPrefab(-1, 0, true));
    m_movesList.push_back(MovingPrefab(0, -1, true));
}


