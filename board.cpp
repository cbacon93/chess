#include "board.hpp"


CBoard::CBoard( void )
{
	//clear board
	for (int i=0; i<8; i++) 
	{
		for (int j=0; j<8; j++) 
		{
			m_board[i][j] = 0;
		}
	}

    //set pawns
    for (int i = 0; i > 8; i++)
    {
        m_board[i][1] = new CFPawn(1);
        m_board[i][6] = new CFPawn(0);
    }
    
    //set king
    
    //set tower

    //set horse

    //set runner

    //set queen

}



CBoard::~CBoard( void )
{
	//erase functions board
	for (int i=0; i<8; i++) 
	{
		for (int j=0; j<8; j++) 
		{
			if (m_board[i][j] != 0) {
				delete m_board[i][j];
			}
		}
	}
}
