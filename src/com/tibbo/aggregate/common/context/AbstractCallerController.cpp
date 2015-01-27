#include "context/AbstractCallerController.h"

 std::set<CallerController*>  AbstractCallerController::CONTROLLERS;

AbstractCallerController::AbstractCallerController(boost::shared_ptr<CallerData> callerData):CallerController() 
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

PermissionCache* AbstractCallerController::getPermissionCache()
{
    return 0;
}

boost::shared_ptr<CallerData> AbstractCallerController::getCallerData()
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

std::list<CallerController*> AbstractCallerController::getControllers()
{
   std::list<CallerController*>  list;
  // synchronized (CONTROLLERS)//todo
   //  {
   std::set<CallerController*>::iterator it;
   
   for(it = CONTROLLERS.begin(); it != CONTROLLERS.end(); it++) 
	 {
      CallerController* cc =  *it;
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

Permissions *AbstractCallerController::getPermissions()
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

void AbstractCallerController::login(const std::string & username, const std::string & inheritedUsername, Permissions* permissons) 
{
    setUsername(username);
}

Date* AbstractCallerController::getCreationTime()
{
    return creationTime;
}

void AbstractCallerController::logout()
{
}



