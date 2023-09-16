#include "Menu.h"
#include "MenuItemFactory.h"
#include "iostream"
#include "ListItem.h"
#include "List.h"

using namespace std;

int main() {
	List *list = new List();

	list->append(new ListItem(12));
	list->append(new ListItem(13));
	list->append(new ListItem(14));
	list->append(new ListItem(-14));

	ListItem *root = list->getRoot();
	ListItem *first = root->getNext();
	ListItem *second = first->getNext();
	ListItem *third = second->getNext();

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
