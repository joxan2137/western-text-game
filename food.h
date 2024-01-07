//
// Created by ok on 07.01.2024.
//

#ifndef FOOD_H
#define FOOD_H
#include "Item.h"
#include "player.h"

#endif //FOOD_H
class Food : public Item {
    int healthValue;

public:
    Food(std::string name, std::string description, int healthValue)
        : Item(name, description), healthValue(healthValue) {}

};
