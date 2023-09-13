#pragma once
#include "iostream"

class MenuItem {
	private:
		std::string title;
		int id;
		void (*callback)();

	public:
		MenuItem(int id, std::string title);

		MenuItem(int id, std::string title, void (*callback)());

		std::string getTitle();

		int getId();

		void executeCallback();

		~MenuItem();
};
