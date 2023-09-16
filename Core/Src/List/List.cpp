#include "List.h"

List::List() {
	this->length = 0;
};

void List::append(ListItem *current, uint64_t index) {
	ListItem *next = this->root;
	ListItem *prev = this->root;

	if (index == 0 && this->length > 1) {
		current->setNext(this->root);
		this->root = current;
	}

	if (index == this->length - 1 && index != 0) {
		this->append(current);
	}

	for (uint64_t i = 0; i < index; i++) {
		if (i == index - 1) {
			prev = next;
		}
		next = next->getNext();
	}

	if (0 < index && index < this->length - 1) {
		current->setNext(next);
		prev->setNext(current);
	}

	this->length++;
}

void List::append(ListItem *item) {
	if (this->length == 0) {
		this->root = item;
		this->length++;
		return;
	}
	this->length++;
	ListItem *current = root;
	while (current->getNext()) {
		current = current->getNext();
	}
	current->setNext(item);
}

int8_t List::remove(uint64_t index) {
	ListItem *prev = root;
	ListItem *current = root;
	ListItem *next = root;

	if (index == this->length - 1) {
		delete current;
	}

	if (index == 0 && this->length > 1) {
		next = current->getNext();
		delete current;
		this->root = next;
	}

	for (uint64_t i = 0; i < index; i++) {
		if (i == index - 1) {
			prev = current;
		}
		current = current->getNext();
	}

	if (0 < index && index < this->length - 1) {
		next = current->getNext();
		delete current;
		prev->setNext(next);
	}

	this->length--;

	return 1;
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

ListItem &List::Iterator::operator*() {
	return (*this->parent)[iterator];
};

bool List::Iterator::operator==(const Iterator &rhs) {
	return this->iterator == rhs.iterator;
}

bool List::Iterator::operator!=(const Iterator &rhs) {
	return !(this->iterator == rhs.iterator);
}
