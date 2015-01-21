#pragma once

#include "action/EntityRelatedActionDescriptor.h"
#include "util/Cloneable.h"
#include <string>
#include <list>

class UserSettings : public Cloneable
{
private:
    const std::string datePattern;
    const std::string timePattern;
    const std::string timeZone;
    int weekStartDay;
    std::list<boost::shared_ptr<EntityRelatedActionDescriptor>>  variableActions;
    std::list<boost::shared_ptr<EntityRelatedActionDescriptor>>  eventActions;

public:
    /*
    SimpleDateFormat* createDateFormatter();
    SimpleDateFormat* createDateFormatter(const std::string & pattern, const std::string & timezone);
    */
    std::string getDatePattern();
    void setDatePattern(const std::string & datePattern);
    std::string getTimePattern();
    void setTimePattern(const std::string & timePattern);
    std::string getDateTimePattern();
    std::string getTimeZone();
    void setTimeZone(const std::string & timeZone);
    int getWeekStartDay();
    void setWeekStartDay(int weekStartDay);
    std::list<boost::shared_ptr<EntityRelatedActionDescriptor>>  getVariableActions();
    void setVariableActions(std::list<boost::shared_ptr<EntityRelatedActionDescriptor>>  variableActions);
    std::list<boost::shared_ptr<EntityRelatedActionDescriptor>>  getEventActions();
    void setEventActions(std::list<boost::shared_ptr<EntityRelatedActionDescriptor>>  eventActions);
    UserSettings* clone();
    void fill(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController) /* throws(ContextException, RemoteDeviceErrorException) */;
    void fillBasicProperties(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController) /* throws(ContextException, RemoteDeviceErrorException) */;
    void fillActions(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController);

    // Generated
    UserSettings();
    UserSettings(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController);
};
