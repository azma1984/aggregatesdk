// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/data/TimeZones.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::data::TimeZones
    
{

public:
    typedef void super;

private:
    static const std::string DEFAULT_TIME_ZONE_ID_;
    static std::map ZONES_;
    static std::map SELECTION_VALUES_;

public:
    static std::map getTimeZones();

private:
    static const std::string getZoneDesc(std::string* zoneId);

public: /* package */
    static const std::string getZoneDescSimple(int offset);

public:
    static std::map getSelectionValues(bool allowNotSelected);
    static const std::string getDefaultTimezoneId();

    // Generated
    TimeZones();
protected:
    TimeZones(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& DEFAULT_TIME_ZONE_ID();

private:
    static std::map& ZONES();
    static std::map& SELECTION_VALUES();
    ::java::lang::Class* getClass0();
};
