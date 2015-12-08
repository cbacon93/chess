#pragma once

class CMove
{
private:
    int m_modx;
    int m_mody;
protected:
public:
    CMove(int x, int y);
    const void getMove(int & x, int & y);
    CMove operator +(CMove & move);
    
    const int getX() { return m_modx; }
    const int getY() { return m_mody; }
};
