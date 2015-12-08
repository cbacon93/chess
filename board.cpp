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
    m_board[3][0] = new CFQueen(0);
    m_board[3][7] = new CFQueen(1);
}




void CBoard::printBoard() {
    std::cout << "    A B C D E F G H " << std::endl << std::endl;
    
    for (int i=0; i<8; i++)
    {
        std::cout << std::to_string(i+1) << "   ";
        for (int j=0; j<8; j++)
        {
            if (m_board[j][i] != 0) {
                std::cout << m_board[j][i]->getFigureSign() << " ";
            } else {
                std::cout << "- ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}



void CBoard::userMove(int color) {
    std::string input;
    
    std::cout << "Select figure: ";
    std::cin >> input;
    
    int x,y;
    parseCoords(x,y, input);
    
    std::cout << "Input Coords: " << x << " - " << y << std::endl;
}



bool CBoard::parseCoords(int &x, int &y, std::string input) {
    std::string coords1 = "abcdefgh";
    std::string coords2 = "ABCDEFGH";
    size_t pos1 = coords1.find(input.substr(0,1));
    size_t pos2 = coords2.find(input.substr(0,1));
    
    if (pos1 == std::string::npos && pos2 == std::string::npos)
        return false;
    
    x = (int)pos1;
    if (pos1 == std::string::npos) {
        x = (int)pos2;
    }
    
    y = std::stoi(input.substr(1,1)) - 1;
    
    return true;
}


std::string CBoard::indexToCoords(int x, int y) {
    std::string coords2 = "ABCDEFGH";
    return coords2[x] + std::to_string(y+1);
}



bool CBoard::isValidField (CMove & move) {
    int x, y;
    move.getMove(x, y);
    
    if (x < 0 || y < 0)
        return false;
    
    if (x > 7 || y > 7)
        return false;
    
    return true;
}




CFigure* CBoard::getFigure(int x, int y) {
    return m_board[x][y];
}


void CBoard::moveFigure(CMove &from, CMove &to) {
    int tx, ty, fx, fy;
    to.getMove(tx, ty);
    from.getMove(fx, fy);
    
    //delete figure
    if (m_board[tx][ty] != 0) {
        delete m_board[tx][ty];
        m_board[tx][ty] = 0;
    }
    
    //move figure
    m_board[tx][ty] = m_board[fx][fy];
    m_board[fx][fy] = 0;
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
