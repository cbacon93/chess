#include "rook.hpp"



CFRook::CFRook(int color) {
	m_color = color;
    m_sign = 'R';

	for (int i=1; i<= 9; i++) {
		m_movesList.push_back(CMove(0, i));
		m_movesList.push_back(CMove(0, -i));
		/*m_movesList.push_back(CMove(i, i));
		m_movesList.push_back(CMove(-i, i));
		m_movesList.push_back(CMove(i, -i));
		m_movesList.push_back(CMove(-i, -i));*/
		m_movesList.push_back(CMove(-i, 0));
		m_movesList.push_back(CMove(i, 0));
	}
}


std::vector<CMove> CFRook::getMoves(int x, int y) {
    return m_movesList;
}

