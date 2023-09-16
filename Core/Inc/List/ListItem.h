#pragma once

#include <cstdint>
class ListItem {
	private:
		ListItem *next;
		int32_t value;

	public:
		ListItem(int32_t value);

		void setValue(int32_t value);

		int32_t getValue();

		ListItem* getNext();

		void setNext(ListItem *item);
};
