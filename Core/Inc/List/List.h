#pragma once
#include "ListItem.h"
#include <cstdlib>

class List {
	private:
		ListItem *root;

		ListItem *prev;

		uint32_t *pointers;
		uint64_t length;

		class Iterator {
			private:
				uint64_t iterator;
				List *parent;

			public:
				Iterator(uint64_t, List *);

				Iterator &operator++();

				Iterator operator++(int);

				ListItem &operator*();

				bool operator==(const Iterator &);

				bool operator!=(const Iterator &);
		};

	public:
		Iterator begin();
		Iterator end();

		ListItem &operator[](uint64_t);

		explicit List();

		void append(ListItem *);

		int8_t remove(uint64_t);

		void clear();

		ListItem *getRoot();

		uint64_t getLength();
};
