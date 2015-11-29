#pragma once
#include <vector>
#include <string>

#include "move.hpp"


class CFigure
{
    private:
    protected:
        int m_posx, m_posy;
        int m_color;
        char m_sign;
        std::vector< CMove > m_movesList;
    public:
        virtual std::vector< CMove > getMoves(int x, int y) = 0;
        virtual ~CFigure() {}
    
        std::string getFigureSign();
};
