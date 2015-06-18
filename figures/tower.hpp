#pragma once

#pragma once
#include <vector>

#include "../figure.hpp"
#include "../move.hpp"

class CFTower : public CFigure
{
    private:
    protected:
    public:
        CFTower( int color );
        std::vector<CMove> getMoves(int x, int y);
};
