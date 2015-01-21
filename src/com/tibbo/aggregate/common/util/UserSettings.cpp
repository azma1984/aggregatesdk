#include "util/UserSettings.h"
#include "context/Contexts.h"
#include "context/ContextUtils.h"
#include "data/User.h"
#include "server/EditableChildContextConstants.h"
#include "util/DateUtils.h"

UserSettings::UserSettings()
{
     weekStartDay = 2;//Calendar.MONDAY
}

UserSettings::UserSettings(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController)
{
    weekStartDay = 2;//Calendar.MONDAY
    fill(cm, callerController);
}

void UserSettings::fill(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController) /* throws(ContextException, RemoteDeviceErrorException) */
{
    fillBasicProperties(cm, callerController);
    fillActions(cm, callerController);
}

void UserSettings::fillBasicProperties(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController) /* throws(ContextException, RemoteDeviceErrorException) */
{
    if (callerController == NULL) {
        return;
    }

    // Distributed: ok, getting info from directly connected server
    boost::shared_ptr<Context> userContext = cm->get(ContextUtils::userContextPath(callerController->getUsername()), callerController);

    if (userContext == NULL) {
        return;
    }

    DataRecord* userInfo = userContext->getVariable(EditableChildContextConstants::V_CHILD_INFO, callerController)->rec();

    setDatePattern(userInfo->getString(User::FIELD_DATEPATTERN));
    setTimePattern(userInfo->getString(User::FIELD_TIMEPATTERN));
    setTimeZone(userInfo->getString(User::FIELD_TIMEZONE));

    if (userInfo->getFormat()->hasField(User::FIELD_WEEK_START)) {
        setWeekStartDay(userInfo->getInt(User::FIELD_WEEK_START));
    }
}

void UserSettings::fillActions(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> callerController)
{
    try
    {
      // Distributed: ok, getting data from directly connected server
       boost::shared_ptr<Context> utilities = cm->get(Contexts::CTX_UTILITIES, callerController);

      if (utilities != NULL) {
        DataTable* variableActions = utilities->callFunction(UtilitiesContextConstants::F_VARIABLE_ACTIONS, callerController);
        setVariableActions(DataTableConversion::beansFromTable(variableActions, EntityRelatedActionDescriptor.class, EntityRelatedActionDescriptor.FORMAT, false));

        DataTable eventActions = utilities.callFunction(UtilitiesContextConstants.F_EVENT_ACTIONS, callerController);
        setEventActions(DataTableConversion::beansFromTable(eventActions, EntityRelatedActionDescriptor.class, EntityRelatedActionDescriptor.FORMAT, false));
      }
    }
    catch (Exception ex)
    {
      Log.CLIENTS.error("Error retrieving entity-related actions", ex);
    }
}

std::string UserSettings::getDatePattern()
{
    return (datePattern.length() > 0) ? datePattern : DateUtils::DEFAULT_DATE_PATTERN;
}

void UserSettings::setDatePattern(const std::string & datePattern)
{
    this->datePattern = datePattern;
}

std::string UserSettings::getTimePattern()
{
    return timePattern;
}

void UserSettings::setTimePattern(const std::string & timePattern)
{
    this->timePattern = timePattern;
}

std::string UserSettings::getDateTimePattern()
{
    return DateUtils::getDateTimePattern(getDatePattern(), getTimePattern());
}

std::string UserSettings::getTimeZone()
{
    return timeZone;
}

void UserSettings::setTimeZone(const std::string & timeZone)
{
    this->timeZone = timeZone;
}

int UserSettings::getWeekStartDay()
{
    return weekStartDay;
}

void UserSettings::setWeekStartDay(int weekStartDay)
{
    this->weekStartDay = weekStartDay;
}

std::list<boost::shared_ptr<EntityRelatedActionDescriptor>>  UserSettings::getVariableActions()
{
    return variableActions;
}

void UserSettings::setVariableActions(std::list<boost::shared_ptr<EntityRelatedActionDescriptor>>  variableActions)
{
    this->variableActions = variableActions;
}

std::list<boost::shared_ptr<EntityRelatedActionDescriptor>>  UserSettings::getEventActions()
{
    return eventActions;
}

void UserSettings::setEventActions(std::list<boost::shared_ptr<EntityRelatedActionDescriptor>>  eventActions)
{
    this->variableActions = variableActions;
}

UserSettings* UserSettings::clone()
{
//    try
//    {
        UserSettings* clone = new UserSettings();

        /*
         * TODO: копирование списка
        if (variableActions != NULL)
            clone->variableActions = new ArrayList<EntityRelatedActionDescriptor>(variableActions);

        if (eventActions != NULL)
            clone->eventActions = new ArrayList<EntityRelatedActionDescriptor>(eventActions);
        */

        return clone;
//    }catch (CloneNotSupportedException ex) {
//        throw new IllegalStateException(ex);
//    }
}

