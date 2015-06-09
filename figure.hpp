#pragma once
#include <vector>

#include "move.hpp"


class CFigure
{
    private:
    protected:
        int m_posx, m_posy;
        int m_color;
        std::vector< CMove > m_movesList;
    public:
        virtual std::vector< CMove > getMoves(int x, int y) = 0;
};
