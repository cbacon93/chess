//
//  point.cpp
//  chess
//
//  Created by Marcel Haupt on 09.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#include "point.hpp"



//Parse input string
Point::Point(std::string input) {
    std::string coords1 = "abcdefgh";
    std::string coords2 = "ABCDEFGH";
    size_t pos1 = coords1.find(input.substr(0,1));
    size_t pos2 = coords2.find(input.substr(0,1));
    parseSuccessful = true;
    
    if (pos1 == std::string::npos && pos2 == std::string::npos) {
        x = 0;
        y = 0;
        parseSuccessful = false;
        return;
    }
    
    x = (int)pos1;
    if (pos1 == std::string::npos) {
        x = (int)pos2;
    }
    
    y = std::stoi(input.substr(1,1)) - 1;
}





//check if point is inside field
bool Point::isValid() {
    
    if (x < 0 || y < 0)
        return false;
    
    if (x > 7 || y > 7)
        return false;
    
    return true;
}



std::string Point::toString() {
    std::string coords2 = "ABCDEFGH";
    return coords2[x] + std::to_string(y+1);
}