#include "pch.h"

void Date::set_date(int d, int mo, int y, int h, int mi)
{
	m_day = d;
	m_month = mo;
	m_year = y;
	ClockTime(h, mi);
}

std::string Date::ToString()
{
	std::string dayZero = "0";
	if (m_day > 9) dayZero = "";
	std::string monthZero = "0";
	if (m_month > 9) monthZero = "";
	std::string retval = (dayZero + std::to_string(m_day) + "." + monthZero + std::to_string(m_month) + "." + std::to_string(m_year));
	if (isset()) {
		retval = retval + " " + toString();
	}
	return retval;
}
