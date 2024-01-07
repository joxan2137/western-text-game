#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <string>

class Character {
public:
    Character(const std::string& name, int health);
    // Other attributes and methods...

private:
    std::string name;
    int health;
    // Other private members...
};

class NewCharacter {  // Replace 'NewCharacter' with a suitable name
public:
    NewCharacter(const std::string& name, int strength, int health);
    // Other methods and attributes specific to the new character

private:
    std::string name;
    int strength;
    // Other private members...
};

#endif // CHARACTERS_H
