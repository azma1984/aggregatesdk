#pragma once

//#include <Cres.h"
#include "util/TimeUnit.h"
//#include <Util.h"
#include <map>
#include <list>
#include <string>
#include <stdint.h>

class TimeHelper
{
 /*private:
	std::map<void*,std::string> SELECTION_VALUES;

	std::list<std::string> UNITS;
	std::list<std::string> REVERSED_UNITS;

    std::map<std::string, TimeUnit>  NAMED_UNITS;*/

private:
    TimeHelper();
    TimeHelper(TimeHelper const&);
    void operator=(TimeHelper const&);

    TimeUnit* MILLISECOND_UNIT;
    TimeUnit* SECOND_UNIT;
    TimeUnit* MINUTE_UNIT;
    TimeUnit* HOUR_UNIT;
    TimeUnit* DAY_UNIT;
    TimeUnit* WEEK_UNIT;
    TimeUnit* MONTH_UNIT;
    TimeUnit* QUARTER_UNIT;
    TimeUnit* YEAR_UNIT;

public:

    static const uint64_t SECOND_IN_MS;
    static const uint64_t MINUTE_IN_MS;
    static const uint64_t HOUR_IN_MS;
    static const uint64_t DAY_IN_MS;
    static const uint64_t WEEK_IN_MS;
    static const uint64_t MONTH_IN_MS;
    static const uint64_t QUARTER_IN_MS;
    static const uint64_t YEAR_IN_MS;
    static const uint64_t MINUTE_IN_SECONDS;
    static const uint64_t HOUR_IN_SECONDS;
    static const uint64_t DAY_IN_SECONDS;
    static const uint64_t WEEK_IN_SECONDS;
    static const uint64_t MONTH_IN_SECONDS;
    static const uint64_t QUARTER_IN_SECONDS;
    static const uint64_t YEAR_IN_SECONDS;
    static const int MILLISECOND;
    static const int SECOND;
    static const int MINUTE;
    static const int HOUR;
    static const int DAY;
    static const int WEEK;
    static const int MONTH;
    static const int QUARTER;
    static const int YEAR;
    
    static const std::string NAME_MILLISECOND;
    static const std::string NAME_MS;
    static const std::string NAME_SECOND;
    static const std::string NAME_SEC;
    static const std::string NAME_S;
    static const std::string NAME_MINUTE;
    static const std::string NAME_MIN;
    static const std::string NAME_M;
    static const std::string NAME_HOUR;
    static const std::string NAME_HR;
    static const std::string NAME_H;
    static const std::string NAME_DAY;
    static const std::string NAME_D;
    static const std::string NAME_WEEK;
    static const std::string NAME_W;
    static const std::string NAME_MONTH;
    static const std::string NAME_YEAR;
    static const std::string NAME_Y;

    enum { CALENDAR_NULL, CALENDAR_MILLISECOND, CALENDAR_SECOND, CALENDAR_MINUTE, CALENDAR_HOUR,
           CALENDAR_DAY_OF_MONTH, CALENDAR_WEEK_OF_YEAR, CALENDAR_MONTH, CALENDAR_YEAR };

    static TimeHelper& getInstance()
    {
        static TimeHelper instance;
        return instance;
    }

    /*

	std::map<void*,std::string>* getSelectionValues();
	std::list<std::string>* getUnits();
        std::list<std::string>* getReversedUnits();
	std::string getUnitDescription(int unit);
	std::string getUnitDescriptionPlural(int unit);
	TimeUnit* getTimeUnit(int unit);
	TimeUnit* getTimeUnit(std::string name);
	long convertToMillis(long period, int unit);
    TimeHelper();*/
};
