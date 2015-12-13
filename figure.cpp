#include "figure.hpp"
#include "move.hpp"
#include "point.hpp"
#include "movingPrefab.hpp"
#include "board.hpp"


void CFigure::getMoves(Point & point, CBoard & board, std::vector< Move > & moves) const {
    for (int i=0; i < m_movesList.size(); i++) {
        m_movesList[i].getMoves(point, board, moves);
    }
}