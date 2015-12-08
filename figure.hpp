#pragma once
#include <vector>
#include <string>

#include "move.hpp"


class CFigure
{
private:
protected:
    int m_color;
    std::string m_sign;
    std::vector< CMove > m_movesList;
public:
    virtual std::vector< CMove > getMoves(int x, int y) = 0;
    virtual ~CFigure() {}
    
    std::string getFigureSign() { return m_sign; }
    int getColor() { return m_color; }
};
