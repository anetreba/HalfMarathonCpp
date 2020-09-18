#include "ChaurusReaper.h"

void snake::initGround() {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++)
            ground[i][j] = 0;
    }
    for (int i = 0; i <= width + 1; i++) {
        ground[0][i] = WALL;
        ground[height + 1][i] = WALL;
    }
    for (int i = 0; i <= height + 1; i++) {
        ground[i][0] = WALL;
        ground[i][width + 1] = WALL;
    }
}

void snake::initSnake() {
    length = INIT_SNAKE_LENGTH;
    std::cout << "hdfhd" << std::endl;
    body[0].x = width / 2;
    body[0].y = height / 2;
    std::cout << height << " " << width << std::endl;
    direction = input;
    foodCounter = 0;

    for (int i = 0; i < length; i++) {
        body[i].x = body[i - 1].x - dx[direction];
        body[i].y = body[i - 1].y - dx[direction];
    }
    //let the ground know the snake's position
    for (int i = 0; i < length; i++)
        ground[body[i].y][body[i].x] = SNAKE;
}

void snake::updateFood() {
    int x;
    int y;

    do {
        x = rand() % width + 1;
        y = rand() % height + 1;
    } while (ground[y][x] != NOTHING);
    ground[x][y] = FOOD;
    foodCounter++;
//    moveCursor(, x, y);
//    gotoxy(x, y);
    std::cout << "\033[" << x << y;
    std::cout << "\u2022";
}

//void ClearScreen() {
//    if (!cur_term) {
//        int result;
//        setupterm( NULL, STDOUT_FILENO, &result );
//        if (result <= 0) return;
//    }
//    char str[] = "clear";
//    putp( tigetstr( str ) );
//}

void snake::firstDraw() {
//    ClearScreen();
//    system("CLS");
    for (int i = 0; i <= height + 1; i++) {
        for (int j = 0; j <= width + 1; j++) {
            if (ground[i][j] == NOTHING)
                std::cout << " ";
            else if (ground[i][j] == WALL) {
                if ((i == 0 && j == 0) || (i == 0 && j == width + 1)
                    || (i == height + 1 && j == 0)
                    || (i == height + 1 && j == width + 1))
                    std::cout << "+";
                else {
                    if (i == body[0].y && j == body[0].x)
                        std::cout << "0";
                    else
                        std::cout << "+";
                }
            } else
                std::cout << "\\u2022";
        }
        std::cout << std::endl;
    }
}

int snake::getFoodCounter() {
    return foodCounter;
}

//Coordinate* snake::bodyCreate(int heigth, int width) {
////    Coordinate *body = new Coordinate [heigth * width];
//    Coordinate *body = (Coordinate *)malloc(sizeof(Coordinate) * (heigth * width));
//    return body;
//}

void snake::updateSnake(int delay)
{
    Coordinate prev[width*height];
    for (int i = 0; i < length; i++) {
        prev[i].x = body[i].x;
        prev[i].y = body[i].y;
    }

    if (input != EXIT && !oppositeDirection(direction, input))
        direction = input;

    body[0].x = prev[0].x + dx[direction];		//head of snake
    body[0].y = prev[0].y + dy[direction];		//follows the direction

    if (ground[body[0].y][body[0].x] < NOTHING) {
        item = -1;
        return;
    }
    if (ground[body[0].y][body[0].x] == FOOD) {
        length++;		//length of snake increases when it eats food
        item = FOOD;
    }
    else {
        ground[body[length - 1].y][body[length - 1].x] = NOTHING;
        item = NOTHING;
        std::cout << "\033[" << body[length - 1].x << body[length - 1].y;
//        gotoxy(body[length - 1].x, body[length - 1].y);		// if snake does not get food,
        std::cout << " ";						// erase last part because the snake is moving
    }

    for (int i = 1; i < length; i++) {
        body[i].x = prev[i - 1].x;	//body follows the previous
        body[i].y = prev[i - 1].y;	//location that it was from
    }

    std::cout << "\033[" << body[1].x << body[1].y;
//    gotoxy(body[1].x, body[1].y);
    std::cout << "+";
    std::cout << "\033[" << body[0].x << body[0].y;
    //change the previous head to a body
//    gotoxy(body[0].x, body[0].y);
    std::cout << "O";					//add a head to the snake

    //let the ground know the snake's position
    for (int i = 0; i < length; i++)
        ground[body[i].y][body[i].x] = SNAKE;

    sleep(delay);
    return;
}
