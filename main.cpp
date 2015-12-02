#include "board.hpp"


int main(int argv, char * argc[]) 
{
    CBoard board;
    board.printBoard();
    board.userMove(0);
    return 1;
}
