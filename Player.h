#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Item.h"  // Include the Item header

class Player {
public:
    static Player* getInstance() {
        if (instance == nullptr) {
            instance = new Player();
        }
        return instance;
    }
    Player() : name("Player") {}

    int health = 100;
    std::string name;
    std::vector<Item*> inventory;  // Inventory to store items

    void addItem(Item* item) {
        inventory.push_back(item);
    }

    void useItem(const std::string& itemName) {
        // Implement logic to use an item from inventory
    }

private:
    int strength = 10;
    int attack = 10;
    int damage = strength * attack;
    static Player* instance;  // Static instance pointer
};

#endif // PLAYER_H
