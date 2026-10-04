#pragma once
#include <iostream>
class Time
{
private:
	int hours;
	int minutes;
	int seconds;

	void normalize();
public:
	Time(int hours = 0, int minutes = 0, int seconds = 0);

	Time operator+(const Time& other) const;
	Time operator-(const Time& other) const;

	friend std::ostream& operator<<(std::ostream& out, const Time& t);
	friend std::istream& operator>>(std::istream& in, Time& t);
};

