#pragma once

#pragma once
#include <vector>

#include "../figure.hpp"
#include "../move.hpp"

class CFKing : public CFigure
{
private:
protected:
public:
    CFKing( int color );
    std::vector<CMove> getMoves(int x, int y);
    ~CFKing() {}
};
