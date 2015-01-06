// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/TimeHelper.java

#pragma once

//#include <Cres.h"
#include <TimeUnit.h>
//#include <Util.h"
#include <map>
#include <list>
#include <string>
class TimeHelper
{
 private:
	std::map<void*,std::string> SELECTION_VALUES;

	std::list<std::string> UNITS;
	std::list<std::string> REVERSED_UNITS;

	std::map<std::string, TimeUnit>  NAMED_UNITS;

public:

	long SECOND_IN_MS;
    long MINUTE_IN_MS;
    long HOUR_IN_MS;
    long DAY_IN_MS;
    long WEEK_IN_MS;
    long MONTH_IN_MS;
    long QUARTER_IN_MS;
    long YEAR_IN_MS;
    long MINUTE_IN_SECONDS;
    long HOUR_IN_SECONDS;
    long DAY_IN_SECONDS;
    long WEEK_IN_SECONDS;
    long MONTH_IN_SECONDS;
    long QUARTER_IN_SECONDS;
    long YEAR_IN_SECONDS;
    int MILLISECOND;
    int SECOND;
    int MINUTE;
    int HOUR;
    int DAY;
    int WEEK;
    int MONTH;
    int QUARTER;
    int YEAR;
    
	std::string NAME_MILLISECOND;
	std::string NAME_MS;
	std::string NAME_SECOND;
	std::string NAME_SEC;
	std::string NAME_S;
	std::string NAME_MINUTE;
	std::string NAME_MIN;
	std::string NAME_M;
	std::string NAME_HOUR;
	std::string NAME_HR;
	std::string NAME_H;
	std::string NAME_DAY;
	std::string NAME_D;
	std::string NAME_WEEK;
	std::string NAME_W;
	std::string NAME_MONTH;
	std::string NAME_YEAR;
	std::string NAME_Y;
	static TimeUnit* MILLISECOND_UNIT;
	static TimeUnit* SECOND_UNIT;
	static TimeUnit* MINUTE_UNIT;
	static TimeUnit* HOUR_UNIT;
	static TimeUnit* DAY_UNIT;
	static TimeUnit* WEEK_UNIT;
	static TimeUnit* MONTH_UNIT;
	static TimeUnit* QUARTER_UNIT;
	static TimeUnit* YEAR_UNIT;

	std::map<void*,std::string>* getSelectionValues();
	std::list<std::string>* getUnits();
        std::list<std::string>* getReversedUnits();
	std::string getUnitDescription(int unit);
	std::string getUnitDescriptionPlural(int unit);
	TimeUnit* getTimeUnit(int unit);
	TimeUnit* getTimeUnit(std::string name);
	long convertToMillis(long period, int unit);
	TimeHelper();
};
