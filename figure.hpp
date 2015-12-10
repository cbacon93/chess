#pragma once
#include <vector>
#include <string>

class Move;
class MovingPrefab;
class Point;
class CBoard;


class CFigure
{
private:
protected:
    int m_color;
    std::string m_sign;
    std::vector< MovingPrefab > m_movesList;
    
public:
    std::vector< Move > getMoves(Point & point, CBoard & board);
    virtual ~CFigure() {}
    
    std::string getFigureSign() { return m_sign; }
    int getColor() { return m_color; }
};
