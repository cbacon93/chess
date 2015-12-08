//
//  game.cpp
//  chess
//
//  Created by Marcel Haupt on 08.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#include "game.hpp"


CGame::CGame() {
    std::cout << "Which color do you want to play as (B/W): ";
    
    std::string inp_color;
    std::cin >> inp_color;
    
    m_userColor = 0;
    if (inp_color.compare("w") == 0 || inp_color.compare("W") == 0) {
        m_userColor = 1;
    }
    
    //print board for the first time
    m_board.printBoard();
}



bool CGame::move() {
    //display turn color
    if (m_userTurn == 0) {
        std::cout << "Black players turn" << std::endl;
    } else {
        std::cout << "White players turn" << std::endl;
    }
    
    
    
    //players turn
    if (m_userTurn == m_userColor) {
        while(true) {
            std::cout << "Select a figure: ";
    
            std::string inp_figure;
            std::cin >> inp_figure;
            
            int x, y;
            if (!m_board.parseCoords(x, y, inp_figure)) {
                std::cout << "Error: invalid input. Example (A5)." << std::endl;
                continue;
            }
            std::cout << "You selected " << m_board.indexToCoords(x, y);
        
            //get figure from board
            CFRook* nfigure = (CFRook*)m_board.getFigure(x, y);
            if (nfigure == 0) {
                std::cout << std::endl << "There is no figure!" << std::endl;
                continue;
            }
            if (nfigure->getColor() != m_userTurn) {
                std::cout << std::endl << "Invalid figure!" << nfigure->getColor() << std::endl;
                continue;
            }
            std::cout << " - " << nfigure->getFigureSign() << std::endl;
            
            //display possible movements for figure
            std::cout << "Possible target fields: ";
            std::vector< CMove > moves = nfigure->getMoves(x, y);
            CMove curr_field = CMove(x,y);
            for (int i=0; i < moves.size(); i++) {
                CMove move = moves[i]+curr_field;
                if (m_board.isValidField(move)) {
                    int tmpx, tmpy;
                    move.getMove(tmpx, tmpy);
                    std::cout << m_board.indexToCoords(tmpx, tmpy) << ", ";
                }
            }
            
            
            //get target field
            std::cout << std::endl << "Select target field: ";
            
            std::string inp_field;
            std::cin >> inp_field;
            int tx, ty;
            if (!m_board.parseCoords(tx, ty, inp_field)) {
                std::cout << "Error: invalid input. Example (A5)." << std::endl;
                continue;
            }
            
            //move figure
            CMove c1 = CMove(x, y);
            CMove c2 = CMove(tx, ty);
            m_board.moveFigure(c1, c2);
            
            break;
        }
    }
    
    
    //computers turn
    else {
        std::cout << "Calculating..." << std::endl;
    }
    
    
    
    //print board after user turn
    m_board.printBoard();
    
    //other users turn
    m_userTurn = (m_userTurn==0)?1:0;
    return true;
}