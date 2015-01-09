#ifndef _DATE_H_
#define _DATE_H_

#include <ctime>
#include <string>

/**
 * Represents a date.
 *
 * @author Philippe Bernery
 */
class Date {	
public:

	/**
	 * Creates a date with the current time.
	 */
	 Date();

	/**
	 * Copy constructor.
	 */
	 Date(const Date & date);

	/**
	 * Creates a date from a day a month and a year.
	 *
	 * @param day day of the date
	 * @param month month of the date
	 * @param year year of the date
	 */
	 Date(unsigned day, unsigned month, unsigned year);

	 ~Date();

	 bool operator==(const Date & date) const;

	/**
	 * @return the day number of the date. Day range: 1-31.
	 */
	 unsigned getDay() const;

	/**
	 * Sets the date day.
	 *
	 * @see getDay()
	 */
	 void setDay(unsigned day);

	/**
	 * @return the month number of the date. Month range: 1-12.
	 */
	 unsigned getMonth() const;

	/**
	 * Sets the date month.
	 *
	 * @see getMonth()
	 */
	 void setMonth(unsigned month);

	/**
	 * Gets the date year. Year range: 0-infinite.
	 */
	 unsigned getYear() const;

	/**
	 * Sets date year.
	 *
	 * @see getYear()
	 */
	 void setYear(unsigned year);

	/**
	 * @return a string representing the date. (e.g: "yyyy-mm-dd")
	 */
	 std::string toString() const;

private:
	unsigned _day;
	unsigned _month;
	unsigned _year;
};

#endif	//_DATE_H_
