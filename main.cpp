#include "List.h"
#include "ListItem.h"
#include "Menu.h"
#include "MenuItemFactory.h"
#include "iostream"

using namespace std;

int main() {
	List<int32_t> *list = new List<int32_t>();

	list->append(1);
	list->remove(0);
	list->append(2);
	list->remove(0);
	list->append(3);
	list->remove(0);
	list->append(4);
	list->remove(0);
	list->append(5);
	list->remove(0);

	list->append(100, 0);
	list->append(1000, 0);
	list->append(10000, 0);
	list->append(100000, 0);
	list->append(1000000, 1);
	// list->append(1000000, 1);
	// list->append(15);
	cout << list->getLength() << endl;

	for (ListItem item : (*list)) {
		cout << item.getValue() << endl;
	}

	// for (int i = 0; i < list->getLength(); i++) {
	// 	list[i];
	// }

	Menu *menu = new Menu();

	MenuItemFactory *menuItemFactory = new MenuItemFactory();

	menu->append(menuItemFactory->create("append", [&]() {
		uint32_t newValue = 0;
		cout << "Input newValue: "; cin >> newValue; cout << endl;
		list->append(newValue);
	}));

	menu->append(menuItemFactory->create("remove", [&]() {
		uint32_t index = 0;
		cout << "Input index to be removed: "; cin >> index; cout << endl;
		list->remove(index);
	}));

	menu->append(menuItemFactory->create("replace", [list]() {
		uint32_t newValue = 0;
		uint32_t index = 0;
		cout << "Input index to be removed: "; cin >> index; cout << endl;
		cout << "Input newValue: "; cin >> newValue; cout << endl;
		list->remove(index);
		list->append(newValue, index);
	}));

	menu->append(menuItemFactory->create("print", [list]() {
		for (ListItem item : (*list)) {
			cout << item.getValue() << endl;
		}
	}));

	menu->awaitUserInput();

	delete menuItemFactory;
	delete menu;
	delete list;
	uint32_t t;

	return 0;
}
