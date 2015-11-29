#include "figure.hpp"


std::string CFigure::getFigureSign() {
    std::string figSign = "B";
    
    if (m_color == 1)
        figSign = "W";
    
    return figSign + m_sign;
}