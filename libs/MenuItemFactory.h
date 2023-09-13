#pragma once
#include "MenuItem.h"

class MenuItemFactory {
 private:
    int id = 0;

 public:
    MenuItem* create(std::string title, void (*callback)());
};

