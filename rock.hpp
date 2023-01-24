#ifndef ROCK_HPP
#define ROCK_HPP
#include <graphics.h>
#include <stdlib.h>

class Rock
{
private:
    int x;
    int y;
    int r;
    int speed;
    int color;
    int screenHeight;

public:
    Rock(int _x, int _y, int _size, int _speed, int _color, int _screenHeight);
    
    void draw();
    void randomizeColor();
    void update();
    void reset();
    void setColor(int x);
    int getX();
    int getY();
    int getR();
    int getColor();
};

#endif
