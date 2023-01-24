#include "rock.hpp"
#include <graphics.h>
#include <stdlib.h>
#include <ctime>

Rock::Rock(int _x, int _y, int _r, int _speed, int _color, int _screenHeight)
{
    x = _x;
    y = _y;
    r = _r;
    speed = _speed;
    color = _color;
    screenHeight = _screenHeight;
}
void Rock::draw()
{
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    circle(x, y, r);
    floodfill(x, y, color);
}

int colors[] = {BLUE,GREEN,YELLOW};

void Rock::randomizeColor()
{
    int arr[] = {0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // seed the random number generator
    srand(time(0));

    // choose a random index in the array
    int randomIndex = rand() % n;

    // get the value at the chosen index
    int randomValue = arr[randomIndex];

    color = colors[randomValue];
}

void Rock::update()
{   
    if (y + r > screenHeight)
    {
        randomizeColor();
        y = 0;
    }
    else
    {
        y += speed;
    }
}
void Rock::reset()
{
	y = 0;	
}
int Rock::getX()
{
	return x;
}
int Rock::getY()
{
	return y;
}
int Rock::getR()
{
	return r;
}
int Rock::getColor()
{
   return color;
}
void Rock::setColor(int x){
    this->color =x;
}