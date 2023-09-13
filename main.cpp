#include "iostream"
#include "Menu.h"
#include "MenuItemFactory.h"

using namespace std;

int main() {
  Menu *menu = new Menu();

  MenuItemFactory *menuItemFactory = new MenuItemFactory();

  menu->append(menuItemFactory->create("append", [](){
        std::cout << "Fuck this world" << std::endl;
  }));

  return 0;
}
