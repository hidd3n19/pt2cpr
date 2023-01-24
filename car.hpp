#ifndef CAR_HPP
#define CAR_HPP
#include <graphics.h>

class Car
{
private :

    int left, top, right, bottom;
    int speed;
    int color;

public :

    Car(int _left, int _top, int _right, int _bottom, int _speed, int _color);
    void draw();
    void move(int _amount);
    int getLeft();
    int getTop();
    int getRight();
    int getBottom();
};

#endif
