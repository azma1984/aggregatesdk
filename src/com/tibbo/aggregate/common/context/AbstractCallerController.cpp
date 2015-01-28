#include "context/AbstractCallerController.h"

 std::set<CallerControllerPtr>  AbstractCallerController::CONTROLLERS;

AbstractCallerController::AbstractCallerController(CallerDataPtr callerData):CallerController()
{  
 loggedIn = false;
 creationTime = new Date();

  this->callerData = callerData;

 //  synchronized (CONTROLLERS);//todo
    {
      CONTROLLERS.insert(this);
    }
}


bool AbstractCallerController::isLoggedIn()
{
    return loggedIn;
}

bool AbstractCallerController::isPermissionCheckingEnabled()
{
    return true;
}

PermissionCachePtr AbstractCallerController::getPermissionCache()
{
	return 0;
}

CallerDataPtr AbstractCallerController::getCallerData()
{
    return callerData;
}

std::map<std::string, std::string> AbstractCallerController::getProperties()
{
    return properties;
}

void AbstractCallerController::setLoggedIn(bool loggedIn)
{
    this->loggedIn = loggedIn;
}

void AbstractCallerController::sendFeedback(int level, const std::string & message)
{
}

std::list<CallerControllerPtr> AbstractCallerController::getControllers()
{
   std::list<CallerControllerPtr>  list;
  // synchronized (CONTROLLERS)//todo
   //  {
   std::set<CallerControllerPtr>::iterator it;
   
   for(it = CONTROLLERS.begin(); it != CONTROLLERS.end(); it++) 
	 {
	  CallerControllerPtr cc =  *it;
      list.push_front(cc);
     }
   //  }
  return list;
}

std::string AbstractCallerController::toString()
{
 std::string str1 = (loggedIn ? "logged in" : "not logged in");
 std::string str2 = " (" + str1 + ")";
 return (type.empty() ==false)? type : "name_class"/*getClass().getName()*/ + str2 ;
}

PermissionsPtr AbstractCallerController::getPermissions()
{
	return 0;
}

std::string AbstractCallerController::getUsername()
{
    return username;
}

void AbstractCallerController::setUsername(const std::string & username)
{
    this->username = username;
}

std::string AbstractCallerController::getInheritedUsername()
{
    return 0;
}

std::string AbstractCallerController::getEffectiveUsername()
{
   std::string inheritedUsername = getInheritedUsername();
   return inheritedUsername.empty() == false ? inheritedUsername : getUsername();
}

std::string AbstractCallerController::getType()
{
    return type;
}

void AbstractCallerController::setType(const std::string & type)
{
    this->type = type;
}

std::string AbstractCallerController::getAddress()
{
    return address;
}

void AbstractCallerController::setAddress(const std::string & address)
{
    this->address = address;
}

void AbstractCallerController::login(const std::string & username, const std::string & inheritedUsername, PermissionsPtr permissons)
{
    setUsername(username);
}

DatePtr AbstractCallerController::getCreationTime()
{
    return creationTime;
}

void AbstractCallerController::logout()
{
}



