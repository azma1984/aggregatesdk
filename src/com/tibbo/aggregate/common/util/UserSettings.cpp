#include "util/UserSettings.h"


UserSettings();
UserSettings(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController);

void fill(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController) /* throws(ContextException, RemoteDeviceErrorException) */;
void fillBasicProperties(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController) /* throws(ContextException, RemoteDeviceErrorException) */;
void fillActions(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController);

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

