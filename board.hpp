#pragma once
#include <map>
#include <vector>
#include <iostream>


#include "figure.hpp"
#include "figures/pawn.hpp"
#include "figures/king.hpp"
#include "figures/knight.hpp"
#include "figures/queen.hpp"
#include "figures/bishop.hpp"
#include "figures/rook.hpp"


class CBoard 
{
    private:
        std::map<int,  std::map< int, CFigure* > > m_board;
    protected:
    public:
		CBoard( void );
		~CBoard();
    
        void printBoard();
};
