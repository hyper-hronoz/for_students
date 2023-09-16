#include "MenuItemFactory.h"

MenuItem *MenuItemFactory::create(std::string title, void (*callback)()) {
	MenuItem *menuItem = new MenuItem{id, title, callback};
	id++;
	return menuItem;
}
