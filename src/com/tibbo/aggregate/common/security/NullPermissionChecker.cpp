#include "security/NullPermissionChecker.h"
#include "security/DefaultPermissionChecker.h"

std::map<std::string, std::string> NullPermissionChecker::getPermissionLevels()
{
    return std::map<std::string, std::string>();
}

bool NullPermissionChecker::has(
    boost::shared_ptr<CallerController> caller,
    boost::shared_ptr<Permissions> requiredPermissions,
    boost::shared_ptr<Context> accessedContext
){
    return true;
}

bool NullPermissionChecker::canSee(Permissions perms, const std::string& context, boost::shared_ptr<ContextManager> cm)
{
    return true;
}

std::string NullPermissionChecker::getLevel(boost::shared_ptr<Permissions> perms, const std::string& context, boost::shared_ptr<ContextManager> cm)
{
    return DefaultPermissionChecker::NULL_PERMISSIONS();
}

bool NullPermissionChecker::isValid(const std::string& permissionLevel)
{
    return true;
}

std::string NullPermissionChecker::canActivate(
    boost::shared_ptr<Permissions> has,
    boost::shared_ptr<Permissions> need,
    boost::shared_ptr<ContextManager> cm
){
    return "";
}
