#include "util/DateUtils.h"

const std::string DateUtils::DEFAULT_DATE_PATTERN = "dd.MM.yyyy";
const std::string DateUtils::DEFAULT_TIME_PATTERN = "HH:mm:ss";
const std::string DateUtils::DATATABLE_DATE_PATTERN = "yyyy-MM-dd HH:mm:ss.SSS";


std::string DateUtils::getDateTimePattern(const std::string & datePattern, const std::string & timePattern)
{
    std::string timeParent;
    timeParent += (datePattern.length() > 0) ? datePattern : DEFAULT_DATE_PATTERN;
    timeParent += " ";
    timeParent += (timePattern.length() > 0) ? timePattern : DEFAULT_TIME_PATTERN;

    return timeParent;
}
