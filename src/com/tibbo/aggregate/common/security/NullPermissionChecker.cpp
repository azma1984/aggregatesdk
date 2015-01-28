#include "security/NullPermissionChecker.h"
#include "security/DefaultPermissionChecker.h"

std::map<std::string, std::string> NullPermissionChecker::getPermissionLevels()
{
    return std::map<std::string, std::string>();
}

bool NullPermissionChecker::has(
    CallerControllerPtr caller,
    PermissionsPtr requiredPermissions,
    ContextPtr accessedContext
){
    return true;
}

bool NullPermissionChecker::canSee(Permissions perms, const std::string& context, ContextManagerPtr cm)
{
    return true;
}

std::string NullPermissionChecker::getLevel(PermissionsPtr perms, const std::string& context, ContextManagerPtr cm)
{
    return DefaultPermissionChecker::NULL_PERMISSIONS();
}

bool NullPermissionChecker::isValid(const std::string& permissionLevel)
{
    return true;
}

std::string NullPermissionChecker::canActivate(
    PermissionsPtr has,
    PermissionsPtr need,
    ContextManagerPtr cm
){
    return "";
}
