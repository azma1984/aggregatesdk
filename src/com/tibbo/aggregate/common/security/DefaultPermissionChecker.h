#ifndef DefaultPermissionCheckerH
#define DefaultPermissionCheckerH

 #define BOOST_THREAD_USE_LIB
#include "security/PermissionType.h"
#include "security/PermissionChecker.h"
#include <vector>

class DefaultPermissionChecker : public PermissionChecker
{
private:
    static const std::string NULL_PERMISSIONS_;
	std::vector< PermissionTypePtr > permissionTypes;
    //::org::apache::log4j::Logger* logger;
    CallerControllerPtr unchecked;

public:
    DefaultPermissionChecker();

    static const std::string NULL_PERMISSIONS();

    void setPermissionTypes(std::vector<PermissionTypePtr > perms);
    static PermissionsPtr getNullPermissions();
    virtual bool has(CallerControllerPtr caller, PermissionsPtr requiredPermissions,
                     ContextPtr accessedContext);
    virtual std::string getLevel(PermissionsPtr perms, const std::string& context, ContextManagerPtr cm);
    bool canSee(PermissionsPtr perms, const std::string& context, ContextManagerPtr cm);
    virtual std::string canActivate(PermissionsPtr has, PermissionsPtr requiredPermissions,
                                    ContextManagerPtr cm);
    virtual bool isValid(const std::string& permissionLevel);
    virtual std::map<std::string, std::string> getPermissionLevels();

private:
    bool hasNecessaryLevel(const std::string& existingLevel, const std::string& requiredLevel);
	int findPattern(const std::string& level);
    bool contextMatches(PermissionPtr existingPermission, PermissionPtr requiredPermission,
                        ContextPtr accessedContext);
    std::list<std::string> getAllowedPaths(PermissionPtr permission, ContextManagerPtr cm);
};
#endif  //DefaultPermissionCheckerH
