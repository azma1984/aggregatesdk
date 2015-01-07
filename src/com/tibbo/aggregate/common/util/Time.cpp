#include <util/Time.h>
#include <util/String.h>

Time::Time() {
	std::time_t curTime = time(NULL);
	struct std::tm * timeinfo = std::localtime(&curTime);
	setHour(timeinfo->tm_hour);
	setMinute(timeinfo->tm_min);
	setSecond(timeinfo->tm_sec);
}

Time::Time(const Time & time) {
	setHour(time._hour);
	setMinute(time._minute);
	setSecond(time._second);
}

Time::Time(unsigned int hour, unsigned int minute, unsigned int second) {
	setHour(hour);
	setMinute(minute);
	setSecond(second);
}

Time::~Time() {
}

bool Time::operator==(const Time & time) const {
	return ((_hour == time._hour)
		&& (_minute == time._minute)
		&& (_second == time._second));
}

unsigned int Time::getHour() const {
	return _hour;
}

void Time::setHour(unsigned int hour) {
	if (hour > 23) {
		throw new std::out_of_range("hour cannot be > 23");
	}

	_hour = hour;
}

unsigned int Time::getMinute() const {
	return _minute;
}

void Time::setMinute(unsigned int minute) {
	if (minute > 59) {
		throw new std::out_of_range("minute cannot be > 59");
	}

	_minute = minute;
}

unsigned int Time::getSecond() const {
	return _second;
}

void Time::setSecond(unsigned int second) {
	if (second > 59) {
		throw new std::out_of_range("second cannot be > 59");
	}

	_second = second;
}

std::string Time::toString() const {
	std::string hour = String::fromNumber(_hour);
	std::string minute = String::fromNumber(_minute);
	std::string second = String::fromNumber(_second);

	if (hour.size() == 1) {
		hour = "0" + hour;
	}

	if (minute.size() == 1) {
		minute = "0" + minute;
	}

	if (second.size() == 1) {
		second = "0" + second;
	}

	return hour + ":" + minute + ":" + second;
}

