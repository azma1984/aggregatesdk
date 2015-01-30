#ifndef time1H
#define time1H

#include <ctime>
#include <string>
#include <util/SString.h>


/**
 * Represents a time.
 */

//При компиляции в Visual Studio ошибка, так как уже есть заголовочный файл time.h
//поэтому переименуем в time1.h
class  Time1 {
	friend class TimeXMLSerializer;
public:

	/**
	 * Creates a time with the current time.
	 */
	 Time1();

	/**
	 * Copy constructor.
	 */
	 Time1(const Time1 & time);

	/**
	 * Creates a time from an hour  a minute and a second.
	 *
	 * @param hour hours of the time
	 * @param minute minutes of the time
	 * @param second seconds of the time
	 */
	 Time1(unsigned hour, unsigned minute, unsigned second);

	 ~Time1();

	 bool operator==(const Time1 & time) const;

	/**
	 * @return the hour of the time. range: 0-23.
	 */
	 unsigned getHour() const;

	/**
	 * Sets the hour.
	 */
	 void setHour(unsigned hour);

	/**
	 * @return the minute of the time. range: 0-59.
	 */
	 unsigned getMinute() const;

	/**
	 * Sets the minute.
	 */
	 void setMinute(unsigned minute);

	/**
	 * Gets the second. range: 0-59.
	 */
	 unsigned getSecond() const;

	/**
	 * Sets second.
	 */
	 void setSecond(unsigned second);

	/**
	 * @return a string representing the time. (e.g: "hh:mm:ss")
	 */
	 std::string toString() const;

private:
	unsigned _hour;
	unsigned _minute;
	unsigned _second;
};

#endif	//time1H
