#include "header.h"

int main() {
    srand(time(0));
    std::list<RabbitVampire*> rabbits;

    createRabbits(rabbits);
    print(rabbits);

    std::this_thread::sleep_for(std::chrono::seconds(1));

    while(rabbits.size() > 0 && rabbits.size() < 1000) {
        matured(rabbits);
        death(rabbits);
        multiply(rabbits);
        vampirism(rabbits);
        print(rabbits);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}