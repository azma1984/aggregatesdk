#ifndef AbstractCallerControllerH
#define AbstractCallerControllerH

#define BOOST_THREAD_USE_LIB
#include "context/CallerController.h"
#include "context/CallerController.h"
#include "context/CallerData.h"
#include "util/date.h"

#include <set>
#include <map>

class AbstractCallerController : public CallerController
{

private:
    static std::set<CallerController*>  CONTROLLERS;
    std::string username;
    boost::shared_ptr<CallerData> callerData;
    bool loggedIn;
    std::string type;
    std::string address;
    Date* creationTime;
	std::map<std::string, std::string> properties;

public:
    bool isLoggedIn();
    bool isPermissionCheckingEnabled();
	PermissionCache* getPermissionCache();
	boost::shared_ptr<CallerData> getCallerData();
    std::map<std::string, std::string> getProperties();


    void setLoggedIn(bool loggedIn);

    void sendFeedback(int level, const std::string & message);
    static std::list<CallerController*>  getControllers();
    std::string toString();
	Permissions *getPermissions();
    std::string getUsername();

    void setUsername(const std::string & username);

    std::string  getInheritedUsername();
    std::string  getEffectiveUsername();
    std::string  getType();
    void setType(const std::string & type);
    std::string getAddress();
    void setAddress(const std::string & address);
    void login(const std::string & username, const std::string & inheritedUsername, Permissions* permissons) ;
    Date* getCreationTime();
    void logout();

    AbstractCallerController(boost::shared_ptr<CallerData> callerData);

};

#endif
