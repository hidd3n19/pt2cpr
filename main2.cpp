#include <iostream>
#include "car.hpp"
#include "coin.hpp"
#include "rock.hpp"
#include <conio.h>
#include <math.h>
#include <graphics.h>
#include <stdlib.h>
#include<string>
#include <ctime>

int main()
{ 
    int getRandom( int randomness[3][3]);
    int screenWidth = 400;
    int screenHeight = 650;
    int colors[] = { BLUE, GREEN, YELLOW};
    int point = 0;
    int position[] = {75, 200, 325};
    initwindow(screenWidth, screenHeight, "Simple Animation");

    Car car( 200, 400, 300, 600, 50, WHITE);
    
    
    
int randomness[3][3]={ {BLUE,GREEN,YELLOW},
                       {GREEN,YELLOW,BLUE}, 
                       {YELLOW,BLUE,GREEN},
};                       
        

    int random = getRandom(randomness);

        randomness[random][3];
    
//Generates random number between 0 and 4
    Rock rock[3] = {Rock(position[0], 0 , 50, 10, randomness[random][0], screenHeight), Rock(position[1], 0, 50, 10,randomness[random][1], screenHeight), Rock(position[2], 0, 50, 10,randomness[random][random], screenHeight)};
    //Coin coin[3] = {coin(position[0], 0, 50, 10, WHITE, screenHeight), coin(position[1], 0, 50, 5, GREEN,screenHeight), coin(position[2], 0, 50, 15, YELLOW,screenHeight)};

    while (true)
    {
        cleardevice();

        car.draw();
        
        for (int i = 0; i < 3; i++)
        {
            // rock[i].setColor(random);
            rock[i].draw();
            rock[i].update();
            
        }
        
        delay(100);

        if (kbhit()) {
            char key = getch();
            if (key == KEY_LEFT) {
                if (car.getLeft() > 0) {
                    car.move(-50);
                }
            } else if (key == KEY_RIGHT) {
                if (car.getRight() < screenWidth) {
                    car.move(50);
                }
            } else if (key == 'q') {
                break;
            }
        }
        
        for (int i = 0; i < 3; i++)
        {
            if((rock[i].getX() >= car.getLeft() && rock[i].getX() <= car.getRight()) && (rock[i].getY() >= car.getTop() && rock[i].getY() <= car.getBottom()))

            {
                if (rock[i].getColor() != YELLOW)
                {
                    return 0;
                } else {
                    point++;
                    std::cout << "Point: " << point << std::endl;
                    rock[i].reset();
                }
            }
        }
    }
    
    closegraph();
    

    return 0;
}
int getRandom( int randomness[3][3]){
    srand(time(0));
    int randomIndex = rand() % 3;
    return randomIndex;
    }

