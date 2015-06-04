#pragma once

class CMove
{
    private:
        int m_modx;
        int m_mody;
    protected:
    public:
        CMove(int x, int y);
        void getMove(int & x, int & y);
};
