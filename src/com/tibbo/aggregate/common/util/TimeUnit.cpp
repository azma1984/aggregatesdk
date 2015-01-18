#include "util/TimeUnit.h"

TimeUnit::TimeUnit(int unit, uint64_t length, std::string description, int calendarField, bool secondary)
{
    this->unit = unit;
    this->length = length;
    this->description = description;
    this->calendarField = calendarField;
    this->secondary = secondary;
}

int TimeUnit::getUnit()
{
    return unit;
}

uint64_t TimeUnit::getLength()
{
    return length;
}

std::string TimeUnit::getDescription()
{
    return description;
}

int TimeUnit::getCalendarField()
{
    return calendarField;
}

bool TimeUnit::isSecondary()
{
    return secondary;
}

std::string TimeUnit::toString()
{
    return description;
}

int TimeUnit::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + unit;
    return result;
}

bool TimeUnit::equals(void* obj)
{
    if(this == obj)
    {
      return true;
    }

    if(obj == 0)
    {
     return false;
    }

    TimeUnit* other = (TimeUnit*)(obj);
    if(unit != other->unit)
    {
     return false;
    }
    return true;
}




