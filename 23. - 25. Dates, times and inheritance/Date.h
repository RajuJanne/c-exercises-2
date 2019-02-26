#pragma once
#include "ClockTime.h"

//simple datetime class using the DD.MM.YYYY HH:MM format.
class Date : public ClockTime {
private:
	int m_day;
	int m_month;
	int m_year;
public: // constructors
	Date() : ClockTime() {
		m_day = 1;
		m_month = 1;
		m_year = 1970;
	}
	Date(int d, int mo, int y)
		: m_day(d), m_month(mo), m_year(y) {
	}
	Date(int d, int mo, int y, int h, int mi)
		: ClockTime(h, mi), m_day(d), m_month(mo), m_year(y)
		{}
	~Date() {}
public: // setter
	void set_date(int, int, int, int, int);
public: // getters for d/m/y
	std::string get_date() { return std::to_string(m_day) + "." + std::to_string(m_month) + "." + std::to_string(m_year); }
	int get_day() { return m_day; }
	int get_month() { return m_month; }
	int get_year() { return m_year; }
public:
	std::string ToString();
};
