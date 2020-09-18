#include "ChaurusReaper.h"

void userInput(void* id)
{
    snake *dragon = (snake *)id;
    do
    {
        int c = getchar();
        switch (c)
        {
            case 'W': case 'w': dragon->input = UP   ; break;
            case 'S': case 's': dragon->input = DOWN ; break;
            case 'D': case 'd': dragon->input = RIGHT; break;
            case 'A': case 'a': dragon->input = LEFT ; break;
            case 27:	    dragon->input = EXIT ; break;
        }
    } while (dragon->input != EXIT && dragon->item >= 0);

//    _endthread();
    return;
}

int oppositeDirection(int input1, int input2) {
    if (input1 == LEFT && input2 == RIGHT)
        return 1;
    if (input1 == RIGHT && input2 == LEFT)
        return 1;
    if (input1 == UP && input2 == DOWN)
        return 1;
    if (input1 == DOWN && input2 == UP)
        return 1;

    return 0;
}

int main(int ac, char** av) {
    if (ac != 3) {
        std::cerr << "usage: ./race00 [width] [height]" << std::endl;
        return 1;
    }
    snake dragon;
    dragon.input = RIGHT;	//global variable to take in the user's input
    dragon.item = NOTHING;
    int delay = 50;
    dragon.height = std::stoi(av[2]);
    dragon.width = std::stoi(av[1]);

//    std::cout << dragon.height << " " << dragon.width << std::endl;
    srand(time(NULL));
//    dragon.bodyCreate(dragon.height, dragon.width);
    //dragon.bodyCreate()
    dragon.initGround();
    dragon.initSnake();
    dragon.updateFood();
    dragon.firstDraw();

    std::thread th(userInput, &dragon);
//
////    _beginthread(userInput, 0, (void*)0);
//
//    do {
//        dragon.updateSnake(delay);
//        if (dragon.item == FOOD)
//            dragon.updateFood();
//    } while (dragon.item >= 0 && dragon.input != EXIT);
//    std::cout << "\033[" << dragon.width / 2 - 5 << dragon.height / 2 - 2;
//    std::cout << "GAME OVER";
//
//    std::cout << "\033[" << dragon.width / 2 - 8 << dragon.height / 2 + 2;
//    std::cout << "Your score is " << dragon.getFoodCounter() - 1 << "!" << std::endl;
//    std::cout << "\033[" << dragon.width / 2 << dragon.height / 2;
//
////    _getch();
    return 0;
}

