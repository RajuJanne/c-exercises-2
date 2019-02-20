#include "pch.h"

void Storage::push(Item item) { m_Queue.push(item); }
void Storage::pop() { m_Queue.pop(); }
bool Storage::empty() { return (m_Queue.size() == 0) ? true : false; }
int Storage::size() { return m_Queue.size(); }
std::queue<Item> Storage::get_queue() { return m_Queue; }
