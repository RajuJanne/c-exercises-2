#include "pch.h"

void DateTime::set_time(int h, int mi)
{
	m_hour = h;
	m_minute = mi;
	clockset = true;
}

void DateTime::set_date(int d, int mo, int y)
{
	m_day = d;
	m_month = mo;
	m_year = y;
}

void DateTime::set_datetime(int d, int mo, int y, int h, int mi)
{
	m_day = d;
	m_month = mo;
	m_year = y;
	m_hour = h;
	m_minute = mi;
	clockset = true;
}

std::string DateTime::ToString()
{
	std::string retval;
	std::string dayZero = "0";
	if (m_day > 9) dayZero = "";
	std::string monthZero = "0";
	if (m_month > 9) monthZero = "";
	retval += dayZero + std::to_string(m_day) + "." + monthZero + std::to_string(m_month) + "." + std::to_string(m_year);
	if (clockset) {
		std::string hourZero = "0";
		if (m_hour > 9) hourZero = "";
		std::string minuteZero = "0";
		if (m_minute > 9) minuteZero = "";
		retval += " " + hourZero + std::to_string(m_hour) + ":" + minuteZero + std::to_string(m_minute);
	}
	return retval;
}
