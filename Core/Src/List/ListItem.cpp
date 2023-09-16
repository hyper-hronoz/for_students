#include "ListItem.h"

ListItem::ListItem(int32_t value) {
	this->value = value;
	this->next = nullptr;
}

void ListItem::setValue(int32_t value) {
	this->value = value;
}

int32_t ListItem::getValue() {
	return this->value;
}

ListItem *ListItem::getNext() {
	return this->next;
}

void ListItem::setNext(ListItem *item) {
	this->next = item;
}
