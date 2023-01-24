#ifndef COIN_HPP
#define COIN_HPP
#include <graphics.h>

class Coin
{
private:
    int x;
    int y;
    int r;
    int speed;
    int color;
    int screenHeight;
    bool type;

public:
    Coin(int _x, int _y, int _size, int _speed, int _color, int screenWidth, bool _type);
    
    void draw();
    void update();
    void reset();
    int getX();
    int getY();
    int getR();
    bool getType();

};

#endif
