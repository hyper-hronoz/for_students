#pragma once
#include "iostream"
#include <cstdint>

class MenuItem {
	private:
		std::string title;
		uint16_t id;
		void (*callback)();

	public:
		MenuItem(uint16_t id, std::string title);

		MenuItem(uint16_t id, std::string title, void (*callback)());

		std::string getTitle();

		uint16_t getId();

		void executeCallback();

		~MenuItem();
};
