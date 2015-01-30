#ifndef _NullPermissionChecker_H_
#define _NullPermissionChecker_H_
  #define BOOST_THREAD_USE_LIB
#include "security/PermissionChecker.h"

#include <string>
#include <map>
#include <boost/shared_ptr.hpp>

class NullPermissionChecker : public PermissionChecker
{

public:
    virtual std::map<std::string, std::string> getPermissionLevels();
    virtual bool has(CallerControllerPtr caller, PermissionsPtr requiredPermissions,
                     ContextPtr accessedContext);
    virtual bool canSee(Permissions perms, const std::string& context, ContextManagerPtr cm);
    virtual std::string getLevel(PermissionsPtr perms, const std::string& context, ContextManagerPtr cm);
    virtual bool isValid(const std::string& permissionLevel);
    virtual std::string canActivate(PermissionsPtr has, PermissionsPtr need,
                                    ContextManagerPtr cm);

    NullPermissionChecker();
};
#endif  //_NullPermissionChecker_H_
