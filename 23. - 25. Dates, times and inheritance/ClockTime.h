#pragma once

#include <string>

class ClockTime {
private:
	bool set;
	int hour;
	int minute;
public:
	ClockTime() {
		hour = 0;
		minute = 0;
		set = false;
	}
	ClockTime(int h, int m) : hour{ h }, minute(m) { set = true; }
	~ClockTime() {};
	void setTime(int h, int m) {
		hour = h;
		minute = m;
		set = true;
	}
	int getHour() {
		return hour;
	}
	int getMinute() {
		return minute;
	}
	bool isset() {
		if (set) return true;
		return false;
	}
	std::string toString() {
		std::string hourZero = "0";
		if (hour > 9) hourZero = "";
		std::string minuteZero = "0";
		if (minute > 9) minuteZero = "";
		return hourZero + std::to_string(hour) + ":" + minuteZero + std::to_string(minute);
	}
};