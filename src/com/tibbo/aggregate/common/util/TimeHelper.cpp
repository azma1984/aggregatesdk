#include "TimeHelper.h"
#include "Cres.h"
#include "AggreGateException.h"

const uint64_t TimeHelper::SECOND_IN_MS = 1000;
const uint64_t TimeHelper::MINUTE_IN_MS = SECOND_IN_MS * 60;
const uint64_t TimeHelper::HOUR_IN_MS   = MINUTE_IN_MS * 60;
const uint64_t TimeHelper::DAY_IN_MS    = HOUR_IN_MS * 24;
const uint64_t TimeHelper::WEEK_IN_MS   = DAY_IN_MS * 7;
const uint64_t TimeHelper::MONTH_IN_MS  = DAY_IN_MS * 30;
const uint64_t TimeHelper::QUARTER_IN_MS  = DAY_IN_MS * 91;
const uint64_t TimeHelper::YEAR_IN_MS  = DAY_IN_MS * 365;
const uint64_t TimeHelper::MINUTE_IN_SECONDS = 60;
const uint64_t TimeHelper::HOUR_IN_SECONDS  = MINUTE_IN_SECONDS * 60;
const uint64_t TimeHelper::DAY_IN_SECONDS = HOUR_IN_SECONDS * 24;
const uint64_t TimeHelper::WEEK_IN_SECONDS  = DAY_IN_SECONDS * 7;
const uint64_t TimeHelper::MONTH_IN_SECONDS = DAY_IN_SECONDS * 30;
const uint64_t TimeHelper::QUARTER_IN_SECONDS = DAY_IN_SECONDS * 91;
const uint64_t TimeHelper::YEAR_IN_SECONDS = DAY_IN_SECONDS * 365;
const int TimeHelper::MILLISECOND = 0;
const int TimeHelper::SECOND  = 1;
const int TimeHelper::MINUTE  = 2;
const int TimeHelper::HOUR    = 3;
const int TimeHelper::DAY     = 4;
const int TimeHelper::WEEK    = 5;
const int TimeHelper::MONTH   = 6;
const int TimeHelper::QUARTER = 7;
const int TimeHelper::YEAR    = 8;

const std::string TimeHelper::NAME_MILLISECOND = "millisecond";
const std::string TimeHelper::NAME_MS = "ms";
const std::string TimeHelper::NAME_SECOND = "second";
const std::string TimeHelper::NAME_SEC = "sec";
const std::string TimeHelper::NAME_S = "s";
const std::string TimeHelper::NAME_MINUTE = "minute";
const std::string TimeHelper::NAME_MIN = "min";
const std::string TimeHelper::NAME_M = "m";
const std::string TimeHelper::NAME_HOUR = "hour";
const std::string TimeHelper::NAME_HR = "hr";
const std::string TimeHelper::NAME_H = "h";
const std::string TimeHelper::NAME_DAY = "day";
const std::string TimeHelper::NAME_D = "d";
const std::string TimeHelper::NAME_WEEK = "week";
const std::string TimeHelper::NAME_W = "w";
const std::string TimeHelper::NAME_MONTH = "month";
const std::string TimeHelper::NAME_YEAR = "year";
const std::string TimeHelper::NAME_Y = "y";

TimeHelper::TimeHelper(void)
{
    MILLISECOND_UNIT = new TimeUnit(MILLISECOND, 1, Cres::get()->getString("tuMilliseconds"), CALENDAR_MILLISECOND, false);
    SECOND_UNIT      = new TimeUnit(SECOND, SECOND_IN_MS, Cres::get()->getString("tuSeconds"), CALENDAR_SECOND, false);
    MINUTE_UNIT      = new TimeUnit(MINUTE, MINUTE_IN_MS, Cres::get()->getString("tuMinutes"), CALENDAR_MINUTE, false);
    HOUR_UNIT        = new TimeUnit(HOUR, HOUR_IN_MS, Cres::get()->getString("tuHours"), CALENDAR_HOUR, false);
    DAY_UNIT         = new TimeUnit(DAY, DAY_IN_MS, Cres::get()->getString("tuDays"), CALENDAR_DAY_OF_MONTH, false);
    WEEK_UNIT        = new TimeUnit(WEEK, WEEK_IN_MS, Cres::get()->getString("tuWeeks"), CALENDAR_WEEK_OF_YEAR, true);
    MONTH_UNIT       = new TimeUnit(MONTH, MONTH_IN_MS, Cres::get()->getString("tuMonths"), CALENDAR_MONTH, false);
    QUARTER_UNIT     = new TimeUnit(QUARTER, QUARTER_IN_MS, Cres::get()->getString("tuQuarters"), CALENDAR_NULL, true);
    YEAR_UNIT        = new TimeUnit(YEAR, YEAR_IN_MS, Cres::get()->getString("tuYears"), CALENDAR_YEAR, false);

    SELECTION_VALUES.insert(std::make_pair(MILLISECOND, Cres::get()->getString("tuMilliseconds")));
    SELECTION_VALUES.insert(std::make_pair(SECOND, Cres::get()->getString("tuSeconds")));
    SELECTION_VALUES.insert(std::make_pair(MINUTE, Cres::get()->getString("tuMinutes")));
    SELECTION_VALUES.insert(std::make_pair(HOUR, Cres::get()->getString("tuHours")));
    SELECTION_VALUES.insert(std::make_pair(DAY, Cres::get()->getString("tuDays")));
    SELECTION_VALUES.insert(std::make_pair(WEEK, Cres::get()->getString("tuWeeks")));
    SELECTION_VALUES.insert(std::make_pair(MONTH, Cres::get()->getString("tuMonths")));
    SELECTION_VALUES.insert(std::make_pair(QUARTER, Cres::get()->getString("tuQuarters")));
    SELECTION_VALUES.insert(std::make_pair(YEAR, Cres::get()->getString("tuYears")));

    UNITS.push_back(MILLISECOND_UNIT);
    UNITS.push_back(SECOND_UNIT);
    UNITS.push_back(MINUTE_UNIT);
    UNITS.push_back(HOUR_UNIT);
    UNITS.push_back(DAY_UNIT);
    UNITS.push_back(WEEK_UNIT);
    UNITS.push_back(MONTH_UNIT);
    UNITS.push_back(QUARTER_UNIT);
    UNITS.push_back(YEAR_UNIT);

    NAMED_UNITS.insert(std::make_pair(NAME_MILLISECOND, MILLISECOND_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_MS, MILLISECOND_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_SECOND, SECOND_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_SEC, SECOND_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_S, SECOND_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_MINUTE, MINUTE_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_MIN, MINUTE_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_M, MINUTE_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_HOUR, HOUR_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_HR, HOUR_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_H, HOUR_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_DAY, DAY_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_D, DAY_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_WEEK, WEEK_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_W, WEEK_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_MONTH, MONTH_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_YEAR, YEAR_UNIT));
    NAMED_UNITS.insert(std::make_pair(NAME_Y, YEAR_UNIT));
}

TimeHelper::~TimeHelper()
{
    delete MILLISECOND_UNIT;
    delete SECOND_UNIT;
    delete MINUTE_UNIT;
    delete HOUR_UNIT;
    delete DAY_UNIT;
    delete WEEK_UNIT;
    delete MONTH_UNIT;
    delete QUARTER_UNIT;
    delete YEAR_UNIT;
}


std::map<int,std::string> TimeHelper::getSelectionValues()
{
    return SELECTION_VALUES;
}

std::list<TimeUnit*> TimeHelper::getUnits()
{
    return UNITS;
}

std::string TimeHelper::getUnitDescription(int unit)
{
    std::map<int, std::string>::iterator it = SELECTION_VALUES.find(unit);
    if (it == SELECTION_VALUES.end())
    {
        throw AggreGateException("Incorrect unit (TimeHelper::getUnitDescription)");
    }
    else
    {
        return SELECTION_VALUES[unit];
    }
}

std::string TimeHelper::getUnitDescriptionPlural(int unit)
{
    std::map<int, std::string>::iterator it = SELECTION_VALUES.find(unit);
    if (it == SELECTION_VALUES.end())
    {
        throw AggreGateException("Incorrect unit  (TimeHelper::getUnitDescriptionPlural)");
    }
    else
    {
        return getTimeUnit(unit)->getDescription();
    }
}

TimeUnit* TimeHelper::getTimeUnit(int unit)
{
    for (std::list<TimeUnit*>::iterator it = UNITS.begin(); it != UNITS.end(); ++it)
    {
        if ((*it)->getUnit() == unit)
        {
            return *it;
        }
    }

    throw AggreGateException("Incorrect unit description (TimeHelper::getUnitDescriptionPlural)");
    return 0;
}

uint64_t TimeHelper::convertToMillis(uint64_t period, int unit)
{
//todo
//    switch (unit)
//    {
//        case MILLISECOND:
//            return period;
//        case SECOND:
//            return period * SECOND_IN_MS;
//        case MINUTE:
//            return period * MINUTE_IN_MS;
//        case HOUR:
//            return period * HOUR_IN_MS;
//        case DAY:
//            return period * DAY_IN_MS;
//        case WEEK:
//            return period * WEEK_IN_MS;
//        case MONTH:
//            return period * MONTH_IN_MS;
//        case QUARTER:
//            return period * QUARTER_IN_MS;
//        case YEAR:
//            return period * YEAR_IN_MS;
//        default:
//            throw AggreGateException("Unknown time unit (TimeHelper::convertToMillis)");
//    }
//    return 0;
}


