#pragma once
#include <map>
#include <vector>



#include "figure.hpp"



class CBoard 
{
    private:
        std::map< std::vector< std::vector<int> >, CFigure > m_board;
    protected:
    public:
};
