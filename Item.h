//
// Created by ok on 07.01.2024.
//

#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <utility>


class Item {
    public:
    virtual ~Item() = default;

    std::string name;
    std::string description;

    Item(std::string name, std::string description) : name(std::move(name)), description(std::move(description)) {}

    virtual void use() {} // Use function can be overridden in derived classes
    virtual void drop() {} // Drop function can be overridden in derived classes

};



#endif //ITEM_H
