#include <random>
#include <chrono>

#include "characters.h"

bool duel(Character& player) {
    // Use the current time as a seed for the random generator
    const unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine engine(seed);

    // Uniform distribution in range [0, 9]
    std::uniform_int_distribution<int> distribution(0, 9);

    const int outcome = distribution(engine); // Generates the random number

    bool win;

    if (outcome > 5) {
        win = true;
    } else {
        win = false;
    }
    return win;
}
//TODO: fix this shit
/*void result(Character& player) {
    if (duel(player)) {
        std::cout << "You win the duel.\n\n";
    } else {
        std::cout << "You lose the duel.\n\n";
        player.health = 0;
    }
}*/
