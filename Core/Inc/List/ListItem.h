#pragma once

#include <cstdint>
class ListItem {
	private:
		ListItem *next;
		int32_t value;

	public:
		ListItem(int32_t);

		void setValue(int32_t);

		int32_t getValue();

		ListItem *getNext();

		void setNext(ListItem *);
};
