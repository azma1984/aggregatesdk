#ifndef _DefaultPermissionChecker_H_
#define _DefaultPermissionChecker_H_

#include "security/PermissionChecker.h"
#include <vector>

class DefaultPermissionChecker : public PermissionChecker
{
private:
    static const std::string NULL_PERMISSIONS_;
    vector<PermissionType> permissionTypes;
    //::org::apache::log4j::Logger* logger;
    CallerController* unchecked;

public: /* protected */
    void setPermissionTypes(PermissionTypeArray* perms);
    static Permissions* getNullPermissions();
    bool has(::com::tibbo::aggregate::common::context::CallerController* caller, Permissions* requiredPermissions, ::com::tibbo::aggregate::common::context::Context* accessedContext);
    std::string* getLevel(Permissions* permissions, std::string* context, ::com::tibbo::aggregate::common::context::ContextManager* cm) /* throws(SecurityException) */;
    bool canSee(Permissions* permissions, std::string* context, ::com::tibbo::aggregate::common::context::ContextManager* cm);

private:
    bool hasNecessaryLevel(std::string* existingLevel, std::string* requiredLevel);
    int findPattern(std::string* level) /* throws(SecurityException) */;
    bool contextMatches(Permission* existingPermission, Permission* requiredPermission, ::com::tibbo::aggregate::common::context::Context* accessedContext);
    std::list  getAllowedPaths(Permission* permission, ::com::tibbo::aggregate::common::context::ContextManager* cm);

public:
    bool isValid(std::string* level);
    std::map getPermissionLevels();
    std::string* canActivate(Permissions* existingPermissions, Permissions* requiredPermissions, ::com::tibbo::aggregate::common::context::ContextManager* cm);    

    // Generated

public:
    DefaultPermissionChecker();

    static const std::string& NULL_PERMISSIONS();
};
