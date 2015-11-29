#pragma once

#pragma once
#include <vector>

#include "../figure.hpp"
#include "../move.hpp"

class CFBishop : public CFigure
{
private:
protected:
public:
    CFBishop( int color );
    std::vector<CMove> getMoves(int x, int y);
    ~CFBishop() {}
};
