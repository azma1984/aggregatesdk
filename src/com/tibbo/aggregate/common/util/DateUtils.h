// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/DateUtils.java

#pragma once

#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/text/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::DateUtils
    
{

public:
    typedef void super;

private:
    static const std::string DEFAULT_DATE_PATTERN_;
    static const std::string DEFAULT_TIME_PATTERN_;
    static const std::string DATATABLE_DATE_PATTERN_;
    static ::java::util::TimeZone* UTC_TIME_ZONE_;
    static ::java::util::HashMap* DATE_TIME_FORMATS_;
    static ::java::util::HashMap* TIME_FORMATS_;

public:
    static ::java::text::SimpleDateFormat* createDateFormatter();
    static const std::string getDateTimePattern(std::string* datePattern, std::string* timePattern);
    static std::map dateTimeFormats();
    static std::map timeFormats();

    // Generated
    DateUtils();
protected:
    DateUtils(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& DEFAULT_DATE_PATTERN();
    static const std::string& DEFAULT_TIME_PATTERN();
    static const std::string& DATATABLE_DATE_PATTERN();
    static ::java::util::TimeZone*& UTC_TIME_ZONE();
    static ::java::util::HashMap*& DATE_TIME_FORMATS();
    static ::java::util::HashMap*& TIME_FORMATS();

private:
    ::java::lang::Class* getClass0();
};
