#include "pawn.hpp"


CFPawn::CFPawn(int color) {
	m_color = color;
    
    if (m_color == 0) {
        m_sign = "\u265F";
    } else {
        m_sign = "\u2659";
    }
    
    if (m_color == 0) {
        m_movesList.push_back(CMove(0, 1));
    } else {
        m_movesList.push_back(CMove(0, -1));
    }
}


std::vector<CMove> CFPawn::getMoves(int x, int y) {
    std::vector<CMove> ret;
    ret = m_movesList;

    //pawn at the beginning
    if (y==1) {
        if (m_color == 0) {
            ret.push_back(CMove(0, 2));
        } else {
            ret.push_back(CMove(0, -2));
        }
    }

    return ret;
}
