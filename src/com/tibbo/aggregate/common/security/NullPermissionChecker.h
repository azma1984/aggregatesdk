#ifndef _NullPermissionChecker_H_
#define _NullPermissionChecker_H_

#include "security/PermissionChecker.h"

#include <string>
#include <map>
#include <boost/shared_ptr.hpp>

class NullPermissionChecker : public PermissionChecker
{

public:
    virtual std::map<std::string, std::string> getPermissionLevels();
    virtual bool has(boost::shared_ptr<CallerController> caller, boost::shared_ptr<Permissions> requiredPermissions,
                     boost::shared_ptr<Context> accessedContext);
    virtual bool canSee(Permissions perms, const std::string& context, boost::shared_ptr<ContextManager> cm);
    virtual std::string getLevel(boost::shared_ptr<Permissions> perms, const std::string& context, boost::shared_ptr<ContextManager> cm);
    virtual bool isValid(const std::string& permissionLevel);
    virtual std::string canActivate(boost::shared_ptr<Permissions> has, boost::shared_ptr<Permissions> need,
                                    boost::shared_ptr<ContextManager> cm);

    // Generated
    NullPermissionChecker();
};
#endif  //_NullPermissionChecker_H_
