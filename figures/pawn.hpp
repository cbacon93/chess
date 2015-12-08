#pragma once
#include <vector>

#include "../figure.hpp"
#include "../move.hpp"

class CFPawn : public CFigure
{
private:
protected:
public:
    CFPawn( int color );
    std::vector<CMove> getMoves(int x, int y);
    ~CFPawn() {}
};
