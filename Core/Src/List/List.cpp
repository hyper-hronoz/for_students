#include "List.h"

List::List() {
	this->length = 0;
};

void List::append(ListItem *item) {
	if (this->length == 0) {
		this->root = item;
		this->length++;
		return;
	}
	this->length++;
	this->current = root;
	while (current->getNext()) {
		this->current = current->getNext();
	}
	this->current->setNext(item);
}

void List::remove(uint64_t index) {
}

uint64_t List::getLength() {
	return this->length;
}

ListItem *List::getRoot() {
	return this->root;
}

List::Iterator List::begin() {
	return Iterator(0, this);
}

List::Iterator List::end() {
	return Iterator(this->length, this);
}

static ListItem *returnValue = 0;
ListItem &List::operator[](uint64_t index) {
	if (index >= this->length) {
		exit(0);
	}
	ListItem *current = this->root;
	for (int i = 0; i < index; i++) {
		current = current->getNext();
	}
	returnValue = current;
	return *returnValue;
}

List::Iterator &List::Iterator::operator++() {
	this->iterator++;
	return *this;
};

List::Iterator List::Iterator::operator++(int) {
	Iterator tmp = *this;
	++(*this);
	return tmp;
};

List::Iterator::Iterator(uint64_t iterator, List *parent) : iterator(iterator), parent(parent){};

ListItem& List::Iterator::operator*(){
	return (*this->parent)[iterator];
};
