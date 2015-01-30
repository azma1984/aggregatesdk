
#include <util/Time1.h>


Time1::Time1() {
	std::time_t curTime = time(NULL);
	struct std::tm * timeinfo = std::localtime(&curTime);
	setHour(timeinfo->tm_hour);
	setMinute(timeinfo->tm_min);
	setSecond(timeinfo->tm_sec);
}

Time1::Time1(const Time1 &time) {
	setHour(time._hour);
	setMinute(time._minute);
	setSecond(time._second);
}

Time1::Time1(unsigned int hour, unsigned int minute, unsigned int second) {
	setHour(hour);
	setMinute(minute);
	setSecond(second);
}

Time1::~Time1() {
}

bool Time1::operator==(const Time1 & time) const {
	return ((_hour == time._hour)
		&& (_minute == time._minute)
		&& (_second == time._second));
}

unsigned int Time1::getHour() const {
	return _hour;
}

void Time1::setHour(unsigned int hour) {
	if (hour > 23) {
		throw new std::out_of_range("hour cannot be > 23");
	}

	_hour = hour;
}

unsigned int Time1::getMinute() const {
	return _minute;
}

void Time1::setMinute(unsigned int minute) {
	if (minute > 59) {
		throw new std::out_of_range("minute cannot be > 59");
	}

	_minute = minute;
}

unsigned int Time1::getSecond() const {
	return _second;
}

void Time1::setSecond(unsigned int second) {
	if (second > 59) {
		throw new std::out_of_range("second cannot be > 59");
	}

	_second = second;
}

std::string Time1::toString() const {
	std::string hour = SString::fromNumber(_hour);
	std::string minute = SString::fromNumber(_minute);
	std::string second = SString::fromNumber(_second);

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

