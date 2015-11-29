/*
 * queen.hpp
 *
 *  Created on: 18.06.2015
 *      Author: subco_000
 */
#pragma once
#include <vector>

#include "../figure.hpp"
#include "../move.hpp"

class CFQueen : public CFigure
{
private:
protected:
public:
    CFQueen( int color );
    std::vector<CMove> getMoves(int x, int y);
    ~CFQueen() {}
};

