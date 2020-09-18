#pragma once


#include <iostream>
#include <time.h>
#include <cstdlib>
#include <thread>

#include <unistd.h>
#include <term.h>

void ClearScreen();
int oppositeDirection(int input1, int input2);

#define MAX 100
#define WALL -2
#define SNAKE -1
#define NOTHING 0
#define INIT_SNAKE_LENGTH 4
#define SNAKE -1
#define FOOD 1

#define RIGHT 0
#define UP 1
#define LEFT 2
#define DOWN 3
//int input = RIGHT;	//global variable to take in the user's input
//int item = NOTHING;
#define EXIT -1

#define SIZE 124
static int dx[5] = { 1, 0, -1, 0 };
static int dy[5] = { 0, -1, 0, 1 };
//direction array, for use with RIGHT, UP, LEFT, DOWN constants
//(1, 0) is RIGHT
//(0, -1) is UP (because the row number increase from top to bottom)
//(-1, 0) is LEFT
//(0, 1) is DOWN

struct Coordinate {
    int x;
    int y;
};


class snake final {
    public:
//        int input;// = RIGHT;	//global variable to take in the user's input
//        int item;// = NOTHING;
//        int height;
//        int width;
        void initGround();
        void initSnake();
        void updateSnake(int delay);
        void updateFood();
        void firstDraw();
        int getFoodCounter();
//        Coordinate *bodyCreate(int heigth, int width);
    private:
        int length;
        Coordinate body[SIZE];
        int direction;
//        int ground[MAX][MAX];

        int foodCounter;
};

