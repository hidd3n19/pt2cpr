/*#include <iostream>
#include "car.hpp"
#include "coin.hpp"
#include "rock.hpp"
#include <conio.h>
#include <math.h>
#include <graphics.h>

int main()
{ 
    int screenWidth = 400;
    int screenHeight = 650;
    Car t;
    Rock r;
    Coin c;
    initwindow(screenWidth, screenHeight, "Simple Animation");

    t.car(position[1], 500, 50, 125, RED,screenWidth);
    r.rock[3] = {Rock(position[0], 0, 50, 10, WHITE, screenHeight, false), Rock(position[1], 0, 50, 5, GREEN,screenHeight, false), Rock(position[2], 0, 50, 10, YELLOW,screenHeight, true)};
    c.coin[3] = {Coin(position[0], 0, 50, 10, WHITE, screenHeight), Coin(position[1], 0, 50, 5, GREEN,screenHeight), Coin(position[2], 0, 50, 15, YELLOW,screenHeight)};


    while (true)
    {
        cleardevice();

        Car.draw();
        for (int i = 0; i < 3; i++)
        {
            rock[i].update();
            rock[i].draw();
        }
        delay(50);

        if (kbhit())
        {
            char key = getch();
            if (key == 'a')
            {
                Car.left(position[0]);
            }
            else if (key == 'd')
            {
                Car.right(position[2]);
            }
            else if (key == 'q')
            {
                break;
            }
        }
        
        for (int i = 0; i < 3; i++){
        	if(r[i].getY() + r[i].getR() > t.getY() - t.getR() && r[i].getX() == t.getX())
        	{
        		if (r[i].getType() == false)
				{
        			return 0;
				} else {
//					Adding the point after the coin met
					point++;
					std::cout << "Point: " << point << std::endl;
					r[i].reset();
				}
			} else {
				
			}
		}
    }
    closegraph();

    return 0;
}

while(!kbhit())
    {
        t.left(0);
        t.draw();
        delay(100);
        t.right(630);
        t.draw();
        delay(100);
    }

closegraph();
system("pause");
    return 0;
}
*/