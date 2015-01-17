#ifndef _TIME_H_
#define _TIME_H_

#include <ctime>
#include <string>

/**
 * Represents a time.
 */
class Time {
	friend class TimeXMLSerializer;
public:

	/**
	 * Creates a time with the current time.
	 */
	 Time();

	/**
	 * Copy constructor.
	 */
	 Time(const Time & time);

	/**
	 * Creates a time from an hour  a minute and a second.
	 *
	 * @param hour hours of the time
	 * @param minute minutes of the time
	 * @param second seconds of the time
	 */
	 Time(unsigned hour, unsigned minute, unsigned second);

	 ~Time();

	 bool operator==(const Time & time) const;

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

#endif	//_TIME_H_