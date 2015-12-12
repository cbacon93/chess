#include "king.hpp"
#include "../movingPrefab.hpp"

CFKing::CFKing(int color) {
	this->m_color = color;
    m_figureValue = 10000;
    
    if (m_color == 0) {
        this->m_sign = "\u265A";
    } else {
        this->m_sign = "\u2654";
    }
    
    m_movesList.push_back(MovingPrefab(0, 1));
    m_movesList.push_back(MovingPrefab(0, -1));
    m_movesList.push_back(MovingPrefab(1, 1));
    m_movesList.push_back(MovingPrefab(-1, 1));
    m_movesList.push_back(MovingPrefab(1, -1));
    m_movesList.push_back(MovingPrefab(-1, -1));
    m_movesList.push_back(MovingPrefab(-1, 0));
    m_movesList.push_back(MovingPrefab(1, 0));
}



