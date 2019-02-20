#pragma once

#include <queue>

typedef struct Item {
private:
	int m_Value = 0;
public:
	Item(int i)
		: m_Value(i)
	{}
public:
	int get_value() const { return m_Value; }
	void set_value(int i) { m_Value = i; }
}Item;

class Storage {
private:
	std::queue<Item> m_Queue;
public:
	void push(Item);
	void pop();
	std::queue<Item> get_queue();
	bool empty();
	int size();
};
