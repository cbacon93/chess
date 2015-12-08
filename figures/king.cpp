#include "king.hpp"


CFKing::CFKing(int color) {
	this->m_color = color;
   
    if (m_color == 0) {
        this->m_sign = "\u265A";
    } else {
        this->m_sign = "\u2654";
    }
    
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

