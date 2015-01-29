#ifndef CallerControllerH
#define CallerControllerH

#include <string>
#include <map>
#include <boost/shared_ptr.hpp>
#include "util/pointers.h"


class Permissions;
class PermissionCache;
class Date;
class CallerData;

class CallerController
{
public:
    virtual std::string getUsername() = 0;
    virtual std::string getInheritedUsername() = 0;
    virtual std::string getEffectiveUsername() = 0;
    virtual bool isPermissionCheckingEnabled() = 0;
	virtual PermissionsPtr getPermissions() = 0;
	virtual PermissionCachePtr getPermissionCache() = 0;
    virtual bool isLoggedIn()= 0;
    virtual void login(const std::string& username, const std::string& inheritedUsername, PermissionsPtr permissons) = 0;
    virtual void logout() = 0;
    virtual bool isHeadless() = 0;
    virtual std::string getType() = 0;
    virtual std::string getAddress() = 0;
    virtual DatePtr getCreationTime() = 0;
    virtual CallerDataPtr getCallerData() = 0;
    virtual std::map<std::string, std::string> getProperties() = 0;
    virtual void sendFeedback(int level, const std::string& message) = 0;
};

#endif

