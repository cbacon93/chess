#pragma once

#pragma once
#include <vector>

#include "../figure.hpp"
#include "../move.hpp"

class CFKnight : public CFigure
{
private:
protected:
public:
    CFKnight( int color );
    std::vector<CMove> getMoves(int x, int y);
    ~CFKnight() {}
};
