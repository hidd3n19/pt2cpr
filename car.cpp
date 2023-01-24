#include "car.hpp"
#include <conio.h>
#include <graphics.h>

 Car::Car(int _left, int _top, int _right, int _bottom, int _speed, int _color)
{
    left = _left;
    top = _top ;
    right = _right;
    bottom = _bottom;
    speed = _speed;
    color = _color;
}

void Car::draw ()
{
    setcolor(color);
    setfillstyle(SOLID_FILL,color);
    rectangle(left, top, right, bottom);
    floodfill(left + 1, top +1,color);
}
void Car::move(int _amount) 
{
        left += _amount;
        right += _amount;
}

int Car::getLeft()
{
	return left;
}
int Car::getTop()
{
	return top;
}
int Car::getRight()
{
	return right;
}
int Car::getBottom()
{
	return bottom;
}