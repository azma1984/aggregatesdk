#ifndef TimeUnitH
#define TimeUnitH

#include <string>
#include <stdint.h>

class TimeUnit
{
 private:
    int unit;
    uint64_t length;
    std::string description;
    bool secondary;
    int calendarField;

 public:
    int getUnit();
    uint64_t getLength();
    std::string getDescription();
    int getCalendarField();
    bool isSecondary();
    std::string toString();
    int hashCode();
    bool equals(AgObjectPtr obj);

    TimeUnit(int unit, uint64_t length, std::string description, int calendarField, bool secondary);
};

#endif
