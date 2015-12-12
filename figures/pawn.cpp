#include "pawn.hpp"
#include "../movingPrefab.hpp"


CFPawn::CFPawn(int color) {
	m_color = color;
    m_figureValue = 1;
    
    if (m_color == 0) {
        m_sign = "\u265F";
    } else {
        m_sign = "\u2659";
    }
    
    if (m_color == 0) {
        m_movesList.push_back(MovingPrefab(0, 1, false, false));
        m_movesList.push_back(MovingPrefab(0, 2, false, false, false, -1, 1));
        m_movesList.push_back(MovingPrefab(1, 1, false, true, true));
        m_movesList.push_back(MovingPrefab(-1, 1, false, true, true));
    } else {
        m_movesList.push_back(MovingPrefab(0, -1, false, false));
        m_movesList.push_back(MovingPrefab(0, -2, false, false, false, -1, 6));
        m_movesList.push_back(MovingPrefab(1, -1, false, true, true));
        m_movesList.push_back(MovingPrefab(-1, -1, false, true, true));
    }
}
