#ifndef CallerControllerH
#define CallerControllerH

#include "context/CallerData.h"
#include "security/Permission.h"
#include "util/Date.h"
#include <string>
#include <boost/shared_ptr.hpp>

class CallerController : public CallerData
{
    virtual std::string getUsername();
    virtual std::string getInheritedUsername();
    virtual std::string getEffectiveUsername();
    virtual bool isPermissionCheckingEnabled();
    virtual boost::shared_ptr<Permissions> getPermissions();
    virtual boost::shared_ptr<PermissionCache> getPermissionCache();
    virtual bool isLoggedIn();
    virtual void login(const std::string& username, const std::string& inheritedUsername, boost::shared_ptr<Permissions> permissons);
    virtual void logout();
    virtual bool isHeadless();
    virtual std::string getType();
    virtual std::string getAddress();
    virtual boost::shared_ptr<Date> getCreationTime();
    virtual boost::shared_ptr<CallerData> getCallerData();
    virtual std::map<std::string, std::string> getProperties();
    virtual void sendFeedback(int level, const std::string& message);
};
#endif
