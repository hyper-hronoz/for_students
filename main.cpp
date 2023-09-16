#include "List.h"
#include "ListItem.h"
#include "Menu.h"
#include "MenuItemFactory.h"
#include "iostream"

using namespace std;

int main() {
	List<int32_t> *list = new List<int32_t>();

	list->append(12);
	list->append(12);
	list->append(12);

	for (ListItem item : (*list)) {
		cout << item.getValue() << endl;
	}

	delete list;
	// for (int i = 0; i < list->getLength(); i++) {
	// 	list[i];
	// }

	// Menu *menu = new Menu();
	//
	// MenuItemFactory *menuItemFactory = new MenuItemFactory();
	//
	// menu->append(menuItemFactory->create("append", []() {
	// 	std::cout << "Fuck this world" << std::endl;
	// }));
	//
	// menu->append(menuItemFactory->create("remove", []() {
	//
	// }));
	//
	// menu->append(menuItemFactory->create("replace", []() {
	//
	// }));
	//
	// menu->awaitUserInput();
	//
	// delete menuItemFactory;
	// delete menu;
	uint32_t t;

	return 0;
}
