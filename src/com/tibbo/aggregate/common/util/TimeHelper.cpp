#include "TimeHelper.h"

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
    //int unit, long length, std::string description, int calendarField, bool secondary
    //MILLISECOND_UNIT = new TimeUnit(MILLISECOND, 1, Cres::get()->getString(u"tuMilliseconds"), CALENDAR_MILLISECOND, false);
    /*SECOND_UNIT      = new TimeUnit(SECOND, SECOND_IN_MS, Cres::get()->getString(u"tuSeconds"), Calendar::SECOND, false);
    MINUTE_UNIT      = new TimeUnit(MINUTE, MINUTE_IN_MS, Cres::get()->getString(u"tuMinutes"), Calendar::MINUTE, false);
    HOUR_UNIT        = new TimeUnit(HOUR, HOUR_IN_MS, Cres::get()->getString(u"tuHours"), Calendar::HOUR, false);
    DAY_UNIT         = new TimeUnit(DAY, DAY_IN_MS, Cres::get()->getString(u"tuDays"), Calendar::DAY_OF_MONTH, false);
    WEEK_UNIT        = new TimeUnit(WEEK, WEEK_IN_MS, Cres::get()->getString(u"tuWeeks"), Calendar::WEEK_OF_YEAR, true);
    MONTH_UNIT       = new TimeUnit(MONTH, MONTH_IN_MS, Cres::get()->getString(u"tuMonths"), Calendar::MONTH, false);
    QUARTER_UNIT     = new TimeUnit(QUARTER, QUARTER_IN_MS, Cres::get()->getString(u"tuQuarters"), 0, true);
    YEAR_UNIT        = new TimeUnit(YEAR, YEAR_IN_MS, Cres::get()->getString(u"tuYears"), Calendar::YEAR, false);*/
}

/*std::map<void*,std::string>* TimeHelper::getSelectionValues()
{
  return &SELECTION_VALUES;
}

std::std::list<std::string>* TimeHelper::getUnits()
{
  return &UNITS;
}

std::std::list<std::string>* TimeHelper::getReversedUnits()
{
  return &REVERSED_UNITS;
}

std::string TimeHelper::getUnitDescription(int unit)
{
  return SELECTION_VALUES[(void*)unit];
}

std::string TimeHelper::getUnitDescriptionPlural(int unit)
{
	return getTimeUnit(unit)->getDescription();
}

TimeUnit* TimeHelper::getTimeUnit(int unit)
{
/*
	for (auto _i = UNITS_)->iterator(); _i->hasNext(); ) {
		TimeUnit* tu = java_cast< TimeUnit* >(_i->next());
		{
			if(tu)->getUnit() == unit) {
				return tu;
			}
		}
	}
	throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Unknown time unit: "_j)->append(unit)->toString());
 */

/*  return 0;
 }

TimeUnit* TimeHelper::getTimeUnit(std::string name)
{
/*
	
	auto unit = java_cast< TimeUnit* >(NAMED_UNITS_)->get(name));
	if(unit != 0) {
		return unit;
	}
	auto num = Util::convertToNumber(name, true, false);
	return getTimeUnit(num)->intValue());
	*/
/*	  return 0;
}

long TimeHelper::convertToMillis(long period, int unit)
{
	switch (unit) {
	case MILLISECOND:
		return period;
	case SECOND:
		return period * SECOND_IN_MS;
	case MINUTE:
		return period * MINUTE_IN_MS;
	case HOUR:
		return period * HOUR_IN_MS;
	case DAY:
		return period * DAY_IN_MS;
	case WEEK:
		return period * WEEK_IN_MS;
	case MONTH:
		return period * MONTH_IN_MS;
	case QUARTER:
		return period * QUARTER_IN_MS;
	case YEAR:
		return period * YEAR_IN_MS;
   //	default:
	  //	throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Unknown time unit: "_j)->append(unit)->toString());
	}
     return 0;
}



TimeHelper::TimeHelper(void)
{
    /*SELECTION_VALUES.insert(MILLISECOND, Cres::get()->getString(u"tuMillisecond"));
	SELECTION_VALUES->put(SECOND, Cres::get()->getString(u"tuSecond"));
	SELECTION_VALUES->put(MINUTE, Cres::get()->getString(u"tuMinute"));
	SELECTION_VALUES->put(HOUR, Cres::get()->getString(u"tuHour"));
	SELECTION_VALUES->put(DAY, Cres::get()->getString(u"tuDay"));
	SELECTION_VALUES->put(WEEK, Cres::get()->getString(u"tuWeek"));
	SELECTION_VALUES->put(MONTH, Cres::get()->getString(u"tuMonth"));
	SELECTION_VALUES->put(QUARTER, Cres::get()->getString(u"tuQuarter"));
	SELECTION_VALUES->put(YEAR, Cres::get()->getString(u"tuYear"));


	UNITS->add(MILLISECOND_UNIT_));
	UNITS->add(SECOND_UNIT_));
	UNITS->add(MINUTE_UNIT_));
	UNITS->add(HOUR_UNIT_));
	UNITS->add(DAY_UNIT_));
	UNITS->add(WEEK_UNIT_));
	UNITS->add(MONTH_UNIT_));
	UNITS->add(QUARTER_UNIT_));
	UNITS->add(YEAR_UNIT_));


	NAMED_UNITS->put(NAME_MILLISECOND_, MILLISECOND_UNIT_);
	NAMED_UNITS->put(NAME_MS_, MILLISECOND_UNIT_);
	NAMED_UNITS->put(NAME_SECOND_, SECOND_UNIT_);
	NAMED_UNITS->put(NAME_SEC_, SECOND_UNIT_);
	NAMED_UNITS->put(NAME_S_, SECOND_UNIT_);
	NAMED_UNITS->put(NAME_MINUTE_, MINUTE_UNIT_);
	NAMED_UNITS->put(NAME_MIN_, MINUTE_UNIT_);
	NAMED_UNITS->put(NAME_M_, MINUTE_UNIT_);
	NAMED_UNITS->put(NAME_HOUR_, HOUR_UNIT_);
	NAMED_UNITS->put(NAME_HR_, HOUR_UNIT_);
	NAMED_UNITS->put(NAME_H_, HOUR_UNIT_);
	NAMED_UNITS->put(NAME_DAY_, DAY_UNIT_);
	NAMED_UNITS->put(NAME_D_, DAY_UNIT_);
	NAMED_UNITS->put(NAME_WEEK_, WEEK_UNIT_);
	NAMED_UNITS->put(NAME_W_, WEEK_UNIT_);
	NAMED_UNITS->put(NAME_MONTH_, MONTH_UNIT_);
	NAMED_UNITS->put(NAME_YEAR_, YEAR_UNIT_);
	NAMED_UNITS->put(NAME_Y_, YEAR_UNIT_);     */
//}



