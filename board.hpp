#pragma once
#include <map>
#include <vector>



#include "figure.hpp"



class CBoard 
{
    private:
        std::map<int,  std::map< int, CFigure* > > m_board;
    protected:
    public:
		CBoard( void );
		~CBoard();
};
