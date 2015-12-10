#include "figure.hpp"
#include "move.hpp"
#include "point.hpp"
#include "movingPrefab.hpp"
#include "board.hpp"


std::vector< Move > CFigure::getMoves(Point & point, CBoard & board) {
    std::vector< Move > moves = std::vector< Move >();
    
    
    for (int i=0; i < m_movesList.size(); i++) {
        std::vector< Move > m = m_movesList[i].getMoves(point, board);
        moves.insert(moves.end(), m.begin(), m.end());
    }
    
    return moves;
}