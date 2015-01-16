#pragma once

#include <string>

class TimeUnit
{
 private:
	int unit;
    long length;
    std::string description;
    bool secondary;
    int calendarField;

 public:
    int getUnit();
    long getLength();
    std::string getDescription();
    int getCalendarField();
    bool isSecondary();
    std::string toString();
    int hashCode();
    bool equals(void* obj);

    TimeUnit(int unit, long length, std::string description, int calendarField, bool secondary);
};
