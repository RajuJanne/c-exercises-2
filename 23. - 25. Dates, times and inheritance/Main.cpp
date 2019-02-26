/*
	Janne Rajuvaara
	NTK17SP

	23.	Declare a class that represents a date. A date includes the day of the year, the month of the year and the year itself.
	24.	Include the ClockTime class (presented on lectures) into the date class.
	25.	Make Date extend Time. Is this a better approach than composing one to the other?
			-- I'm way too tired to answer anything that requires reasoning.

*/

#include "pch.h"
#include <iostream>

int main()
{
	DateTime today = { 27, 2, 2019 };
	DateTime lunchtoday = { 27, 2, 2019, 11, 0 };
	std::cout << "DateTime with 3 MILs: "<< today.ToString() << std::endl;
	std::cout << "DateTime with 5 MILs: " << lunchtoday.ToString() << std::endl;

	Date nextyear = { 28, 2, 2020 };
	Date letshavelunchsometime = { 28, 2, 2035, 11, 45 };

	std::cout << "Date with 3 initializors: " << nextyear.ToString() << std::endl;
	std::cout << "Date with 3 initializors: " << letshavelunchsometime.ToString() << std::endl;
}
