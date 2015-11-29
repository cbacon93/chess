#include "king.hpp"


CFKing::CFKing(int color) {
	m_color = color;
    m_sign = 'K';
    
    m_movesList.push_back(CMove(0, 1));
    m_movesList.push_back(CMove(0, -1));
    m_movesList.push_back(CMove(1, 1));
    m_movesList.push_back(CMove(-1, 1));
    m_movesList.push_back(CMove(1, -1));
    m_movesList.push_back(CMove(-1, -1));
    m_movesList.push_back(CMove(-1, 0));
    m_movesList.push_back(CMove(1, 0));
}


std::vector<CMove> CFKing::getMoves(int x, int y) {
    return m_movesList;
}

