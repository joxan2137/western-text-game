#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
    public:
        Player() : name("Player") {}  // Constructor with default name initialization
        int health = 100;  // Regular member variable, not static
        std::string name;  // Regular member variable, not static
        // Other members and functions...
    private:
        int strength = 10;  // TODO: MAKE ITEMS THAT INCREASE STRENGTH AND IT
        int attack = 10;  // Regular member variable, not static
        int damage = strength * attack;  // Regular member variable, not static
};

#endif // PLAYER_H
