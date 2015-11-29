#pragma once

#pragma once
#include <vector>

#include "../figure.hpp"
#include "../move.hpp"

class CFRook : public CFigure
{
    private:
    protected:
    public:
        CFRook( int color );
        std::vector<CMove> getMoves(int x, int y);
        ~CFRook() {}
};
