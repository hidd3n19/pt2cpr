#include "coin.hpp"
#include <graphics.h>
Coin::Coin(int _x, int _y, int _r, int _speed, int _color, int _screenHeigh, bool _type)
{
    x = _x;
    y = _y;
    r = _r;
    speed = _speed;
    color = _color;
    screenHeight = _screenHeigh;
    type = _type;
}
void Coin::draw()
{
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    circle(x, y, r);
    floodfill(x, y, color);
}
void Coin::update()
{
    if (y + r > screenHeight)
    {
        y = 0;
    }
    else
    {
        y += speed;
    }
}
void Coin::reset()
{
	y = 0;	
}
int Coin::getX()
{
	return x;
}
int Coin::getY()
{
	return y;
}
int Coin::getR()
{
	return r;
}
bool Coin::getType()
{
	return type;
}
