#ifndef DateUtilsH
#define DateUtilsH

#include <string>

class DateUtils
{
private:
    static TimeZone* UTC_TIME_ZONE_;
    static HashMap* DATE_TIME_FORMATS_;
	static ::java::util::HashMap* TIME_FORMATS_;

public:

    static SimpleDateFormat* createDateFormatter();
    static std::map dateTimeFormats();
    static std::map timeFormats();
	static TimeZone UTC_TIME_ZONE();


    std::string getDateTimePattern(const std::string & datePattern, const std::string & timePattern);

    static std::map DATE_TIME_FORMATS();
    static std::map TIME_FORMATS();
    static const std::string DEFAULT_DATE_PATTERN;
    static const std::string DEFAULT_TIME_PATTERN;
    static const std::string DATATABLE_DATE_PATTERN;
};

#endif
