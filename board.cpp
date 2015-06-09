#include "board.hpp"


CBoard::CBoard( void )
{
	//clear board
	for (int i=0; i<8; i++) 
	{
		for (int j=0; j<8; j++) 
		{
			m_board[i][j] == 0;
		}
	}
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