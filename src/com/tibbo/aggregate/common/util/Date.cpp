#include "util/Date.h"
#include "util/SString.h"

Date::Date() {
	std::time_t curTime = time(NULL);
	struct std::tm * timeinfo = std::localtime(&curTime);
	setDay(timeinfo->tm_mday);
	setMonth(timeinfo->tm_mon + 1);
	setYear(timeinfo->tm_year + 1900);
}

Date::Date(const Date & date) {
	setDay(date._day);
	setMonth(date._month);
	setYear(date._year);
}

Date::Date(unsigned day, unsigned month, unsigned year) {
	setDay(day);
	setMonth(month);
	setYear(year);
}

Date::~Date() {
}

bool Date::operator==(const Date & date) const {
	return ((_day == date._day)
		&& (_month == date._month)
		&& (_year == date._year));
}

unsigned Date::getDay() const {
	return _day;
}

void Date::setDay(unsigned day) {
	if (day < 1) {
		throw std::out_of_range("day cannot be < 1");
	} else if (day > 31) {
		throw std::out_of_range("day cannot be > 31");
	}

	_day = day;
}

unsigned Date::getMonth() const {
	return _month;
}

void Date::setMonth(unsigned month) {
	if (month < 1) {
		throw std::out_of_range("month cannot be < 1");
	} else if (month > 12) {
		throw std::out_of_range("month cannot be > 12");
	}

	_month = month;
}

unsigned Date::getYear() const {
	return _year;
}

void Date::setYear(unsigned year) {
	_year = year;
}

std::string Date::toString() {
    std::string month = SString::fromNumber(_month);
    std::string day = SString::fromNumber(_day);

	if (month.size() == 1) {
		month = "0" + month;
	}

	if (day.size() == 1) {
		day = "0" + day;
	}

    return SString::fromNumber(_year) + "-" + month + "-" + day;
}
