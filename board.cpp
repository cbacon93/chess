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
    
    
    //#####_SETUP_BOARD_######

    //set pawns
    for (int i = 0; i < 8; i++)
    {
        m_board[i][1] = new CFPawn(0);
        m_board[i][6] = new CFPawn(1);
    }
    
    //set king
    m_board[4][0] = new CFKing(0);
    m_board[4][7] = new CFKing(1);
    
    //set rook
    m_board[0][0] = new CFRook(0);
    m_board[7][0] = new CFRook(0);
    m_board[0][7] = new CFRook(1);
    m_board[7][7] = new CFRook(1);

    //set knight
    m_board[1][0] = new CFKnight(0);
    m_board[6][0] = new CFKnight(0);
    m_board[1][7] = new CFKnight(1);
    m_board[6][7] = new CFKnight(1);

    //set bishop
    m_board[2][0] = new CFBishop(0);
    m_board[5][0] = new CFBishop(0);
    m_board[2][7] = new CFBishop(1);
    m_board[5][7] = new CFBishop(1);

    //set queen
    m_board[3][0] = new CFBishop(0);
    m_board[3][7] = new CFBishop(0);
}




void CBoard::printBoard() {
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<8; j++)
        {
            if (m_board[j][i] != 0) {
                std::cout << m_board[j][i]->getFigureSign() << " ";
            } else {
                std::cout << "__ ";
            }
        }
        std::cout << std::endl;
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
                m_board[i][j] = 0;
            }
		}
	}
}
