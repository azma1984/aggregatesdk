// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/UserSettings.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/text/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"



class com::tibbo::aggregate::common::util::UserSettings
    
    , public ::java::lang::Cloneable
{

public:
    typedef void super;

private:
    const std::string & datePattern;
    const std::string & timePattern;
    const std::string & timeZone;
    int weekStartDay;
    std::list  variableActions;
    std::list  eventActions;
protected:
    void ctor();
    void ctor(ContextManager* cm, CallerController* callerController) /* throws(ContextException, RemoteDeviceErrorException) */;

public:
    ::java::text::SimpleDateFormat* createDateFormatter();
    ::java::text::SimpleDateFormat* createDateFormatter(const std::string & pattern, const std::string & timezone);
    const std::string & getDatePattern();
    void setDatePattern(const std::string & datePattern);
    const std::string & getTimePattern();
    void setTimePattern(const std::string & timePattern);
    const std::string & getDateTimePattern();
    const std::string & getTimeZone();
    void setTimeZone(const std::string & timeZone);
    int getWeekStartDay();
    void setWeekStartDay(int weekStartDay);
    std::list  getVariableActions();
    void setVariableActions(std::list  variableActions);
    std::list  getEventActions();
    void setEventActions(std::list  eventActions);
    UserSettings* clone();
    void fill(ContextManager* cm, CallerController* callerController) /* throws(ContextException, RemoteDeviceErrorException) */;
    void fillBasicProperties(ContextManager* cm, CallerController* callerController) /* throws(ContextException, RemoteDeviceErrorException) */;
    void fillActions(ContextManager* cm, CallerController* callerController);

    // Generated
    UserSettings();
    UserSettings(ContextManager* cm, CallerController* callerController);
protected:
    UserSettings(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
