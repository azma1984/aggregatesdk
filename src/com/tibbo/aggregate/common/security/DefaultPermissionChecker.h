#ifndef _DefaultPermissionChecker_H_
#define _DefaultPermissionChecker_H_

#include "security/PermissionType.h"
#include "security/PermissionChecker.h"
#include <vector>

class DefaultPermissionChecker : public PermissionChecker
{
private:
    static const std::string NULL_PERMISSIONS_;
    std::vector<boost::shared_ptr<PermissionType>> permissionTypes;
    //::org::apache::log4j::Logger* logger;
    boost::shared_ptr<CallerController> unchecked;

public:
    DefaultPermissionChecker();

    static const std::string NULL_PERMISSIONS();

    void setPermissionTypes(std::vector<boost::shared_ptr<PermissionType> > perms);
    static boost::shared_ptr<Permissions> getNullPermissions();
    virtual bool has(boost::shared_ptr<CallerController> caller, boost::shared_ptr<Permissions> requiredPermissions,
                     boost::shared_ptr<Context> accessedContext);
    virtual std::string getLevel(boost::shared_ptr<Permissions> perms, const std::string& context, boost::shared_ptr<ContextManager> cm);
    virtual bool canSee(Permissions perms, const std::string& context, boost::shared_ptr<ContextManager> cm);
    virtual std::string canActivate(boost::shared_ptr<Permissions> has, boost::shared_ptr<Permissions> requiredPermissions,
                                    boost::shared_ptr<ContextManager> cm);
    virtual bool isValid(const std::string& permissionLevel);
    virtual std::map<std::string, std::string> getPermissionLevels();

private:
    bool hasNecessaryLevel(const std::string& existingLevel, const std::string& requiredLevel);
    int findPattern(const std::string& level) /* throws(SecurityException) */;
    bool contextMatches(boost::shared_ptr<Permission> existingPermission, boost::shared_ptr<Permission> requiredPermission,
                        boost::shared_ptr<Context> accessedContext);
    std::list<std::string> getAllowedPaths(boost::shared_ptr<Permission> permission, boost::shared_ptr<ContextManager> cm);
};
#endif  //_DefaultPermissionChecker_H_
