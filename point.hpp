//
//  point.hpp
//  chess
//
//  Created by Marcel Haupt on 09.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#pragma once
#include <string>

class Point {
private:
    int x, y;
    bool parseSuccessful = true;
    
public:
    Point(int _x, int _y) { x = _x; y = _y; }
    Point(std::string);
    int getX() { return x; }
    int getY() { return y; }
    void setX(int _x) { x = _x; }
    void setY(int _y) { y = _y; }
    
    bool isValid();
    bool parsedValid() { return parseSuccessful; }
    std::string toString();
};
