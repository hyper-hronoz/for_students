#include "List.h"
#include "ListItem.h"
#include "Menu.h"
#include "MenuItemFactory.h"
#include "iostream"

using namespace std;

int main() {
	List *list = new List();

	list->append(new ListItem(12));
	list->append(new ListItem(13));
	list->append(new ListItem(14));
	list->append(new ListItem(-14));
	list->append(new ListItem(-11));
	list->append(new ListItem(-10));
	list->append(new ListItem(-9));
	list->append(new ListItem(-8));

	// list->remove(0);
	// cout << list->getLength() << endl;
	list->remove(1);
	list->remove(1);
	// list->remove(0);
	cout << list->getLength() << endl;
	// list->remove(2);

	// ListItem value = (*list)[3];
	// cout << value.getValue() << endl;

	// auto i = (*list).begin();
	// auto b = (*list).end();

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
