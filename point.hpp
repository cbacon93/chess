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
    Point() { x = 0; y = 0; }
    
    int getX() const { return x; }
    int getY() const { return y; }
    void setX(int _x) { x = _x; }
    void setY(int _y) { y = _y; }
    
    bool isValid() const;
    bool parsedValid() const { return parseSuccessful; }
    bool compateTo(Point & pt) const;
    std::string toString() const;
};
