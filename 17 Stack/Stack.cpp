#include "pch.h"

int stack::size() { return m_size; }

void stack::pop() {
	if (m_size > 0) {
		container.pop_back();
		m_size--;
	}
	else {
		throw std::exception("Pop failed: Stack is already empty");
	}
}

void stack::empty() {
	container.empty();
	m_size = 0;
}

void stack::push(std::string s) {
	if (m_size < m_maxSize) {
		container.push_back(s);
		m_size++;
	}
	else {
		throw std::exception("Push failed: Stack is full");
	}
}

std::string stack::top() {
	return container.back();
}
