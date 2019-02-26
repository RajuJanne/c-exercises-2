#pragma once

#include <string>

//simple datetime class using the DD.MM.YYYY HH:MM format.
class DateTime {
private:
	bool clockset = false;
	int m_day;
	int m_month;
	int m_year;
	int m_hour;
	int m_minute;
public: // constructors
	DateTime() {
		m_day = 1;
		m_month = 1;
		m_year = 1970;
		m_hour = 0;
		m_minute = 0;
	}
	DateTime(int d, int mo, int y)
		: m_day(d), m_month(mo), m_year(y) {}
	DateTime(int d, int mo, int y, int h, int mi)
		: m_day(d), m_month(mo), m_year(y), m_hour{ h }, m_minute(mi) 
	{ clockset = true; }
	~DateTime() {}
public: // setter
	void set_time(int, int);
	void set_date(int, int, int);
	void set_datetime(int,int,int,int,int);
public: // getters for d/m/y
	int get_day() { return m_day; }
	int get_month() { return m_month; }
	int get_year() { return m_year;}
	int get_hour() { return m_hour;	}
	int get_minute() { return m_minute;	}
public:
	std::string ToString();
};
