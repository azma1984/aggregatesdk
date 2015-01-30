#ifndef UserSettingsH
#define UserSettingsH

#include "action/EntityRelatedActionDescriptor.h"
#include "util/Cloneable.h"
#include <string>
#include <list>

class UserSettings : public Cloneable
{
private:
	std::string datePattern;
	std::string timePattern;
	std::string timeZone;
    int weekStartDay;
	std::list< EntityRelatedActionDescriptorPtr >  variableActions;
	std::list< EntityRelatedActionDescriptorPtr >  eventActions;

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
	std::list< EntityRelatedActionDescriptorPtr >  getVariableActions();
	void setVariableActions(std::list <EntityRelatedActionDescriptorPtr>  variableActions);
	std::list< EntityRelatedActionDescriptorPtr >  getEventActions();
	void setEventActions(std::list< EntityRelatedActionDescriptorPtr >  eventActions);
    UserSettingsPtr clone();
	void fill(ContextManagerPtr cm, CallerControllerPtr callerController);
    void fillBasicProperties(ContextManagerPtr cm, CallerControllerPtr callerController);
    void fillActions(ContextManagerPtr cm, CallerControllerPtr callerController);

	UserSettings();
    UserSettings(ContextManagerPtr cm, CallerControllerPtr callerController);
};

#endif
