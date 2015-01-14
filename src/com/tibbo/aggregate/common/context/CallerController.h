#pragma once

#include "context/CallerData.h"
#include "security/Permissions.h"
#include "security/PermissionCache.h"
#include "util/Date.h"
#include <string>
#include <boost/shared_ptr.hpp>


class CallerController : public CallerData
{	
    virtual std::string getUsername() = 0;
    virtual std::string getInheritedUsername() = 0;
    virtual std::string getEffectiveUsername() = 0;
    virtual bool isPermissionCheckingEnabled() = 0;
    virtual boost::shared_ptr<Permissions> getPermissions() = 0;
    virtual boost::shared_ptr<PermissionCache> getPermissionCache() = 0;
    virtual bool isLoggedIn() = 0;
    virtual void login(const std::string& username, const std::string& inheritedUsername, boost::shared_ptr<Permissions> permissons) = 0;
    virtual void logout() = 0;
    virtual bool isHeadless() = 0;
    virtual std::string getType() = 0;
    virtual std::string getAddress() = 0;
    virtual boost::shared_ptr<Date> getCreationTime() = 0;
    virtual boost::shared_ptr<CallerData> getCallerData() = 0;
    virtual std::map<std::string, std::string> getProperties() = 0;
    virtual void sendFeedback(int level, const std::string& message) = 0;
};
