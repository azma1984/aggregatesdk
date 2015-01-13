#include "security/DefaultPermissionChecker.h"
#include "context/UncheckedCallerController.h"
#include "Cres.h"

DefaultPermissionChecker::DefaultPermissionChecker()
{
    boost::shared_ptr<CallerController> unchecked = new UncheckedCallerController();

    boost::shared_ptr<PermissionType> nullType = new PermissionType(0, NULL_PERMISSIONS_, Cres::get().getString("secNoPerms"));
    permissionTypes.push_back( nullType );
}

const std::string DefaultPermissionChecker::NULL_PERMISSIONS()
{
    return NULL_PERMISSIONS_;
}

void DefaultPermissionChecker::setPermissionTypes(boost::shared_ptr<PermissionType> perms)
{
    this->permissionTypes = perms;
}

boost::shared_ptr<Permissions> DefaultPermissionChecker::getNullPermissions()
{
    boost::shared_ptr<Permissions> newPermiss = new Permissions();
    return newPermiss;
}

bool DefaultPermissionChecker::has(
    boost::shared_ptr<CallerController> caller,
    boost::shared_ptr<Permissions> requiredPermissions,
    boost::shared_ptr<Context> accessedContext
) {
    try
    {
        if (caller == NULL) {
            return requiredPermissions->size() == 0;
        }

        if (!caller->isPermissionCheckingEnabled()) {
            return true;
        }

        Permissions* existingPermissions = caller->getPermissions();

        if (existingPermissions == NULL) {
            if (logger.isDebugEnabled()) {
                logger.debug("Permission level of '" + caller + "' is 'null' and allow nothing, need " + requiredPermissions);
            }
            return false;
        }

        if (requiredPermissions == NULL || requiredPermissions->size() == 0) {
            return true;
        }

        //TODO: Permissions need iterable
        /*
        for (Permission required : requiredPermissions)
        {
            std::string accessedPath = required.getContext() != null ? required.getContext() : (accessedContext != null ? accessedContext.getPath() : null);

            if (accessedPath != null)
            {
                PermissionCache cache = caller.getPermissionCache();

                String cachedLevel = cache != null ? cache.getLevel(accessedPath) : null;

                String effectiveLevel;
                if (cachedLevel != null)
                {
                    effectiveLevel = cachedLevel;
                }
                else
                {
                    effectiveLevel = getLevel(existingPermissions, accessedPath, accessedContext != null ? accessedContext.getContextManager() : null);
                    if (cache != null && accessedContext != null && Util.equals(accessedPath, accessedContext.getPath())) // Caching effective permissions for real contexts only
                    {
                        cache.cacheLevel(accessedPath, effectiveLevel);
                    }
                }

                if (!hasNecessaryLevel(effectiveLevel, required.getLevel()))
                {
                    if (logger.isDebugEnabled())
                    {
                        logger.debug("Permissions '" + existingPermissions + "' doesn't allow '" + requiredPermissions + "' (because effective level '" + effectiveLevel + "' in '" + accessedPath
                            + "' doesn't allow '" + required + "')");
                    }
                    return false;
                }
            }else {
                if (existingPermissions.size() != 1)
                {
                throw new IllegalStateException("Required permissions doesn't include context specification, so existing permissions should include exactly one element");
                }

                Permission existing = existingPermissions.iterator().next();

                if (!hasNecessaryLevel(existing.getLevel(), required.getLevel()))
                {
                if (logger.isDebugEnabled())
                {
                  logger.debug("Permissions '" + existingPermissions + "' doesn't allow '" + requiredPermissions + "' (because '" + existing + "' doesn't allow '" + required + "')");
                }
                return false;
                }
            }
        }
        */

        return true;
    }catch (Exception ex){
      Log.SECURITY.error("Error checking permissions: ", ex);
      return false;
    }
}

std::string DefaultPermissionChecker::getLevel(
    boost::shared_ptr<Permissions> perms,
    const std::string& context,
    boost::shared_ptr<ContextManager> cm
) {

}

virtual bool canSee(Permissions perms, const std::string& context, boost::shared_ptr<ContextManager> cm);
virtual std::string canActivate(boost::shared_ptr<Permissions> has, boost::shared_ptr<Permissions> need,
                                boost::shared_ptr<ContextManager> cm);
virtual bool isValid(const std::string& permissionLevel);
virtual std::map<std::string, std::string> getPermissionLevels();

private:
bool hasNecessaryLevel(const std::string& existingLevel, const std::string& requiredLevel);
int findPattern(std::string* level) /* throws(SecurityException) */;
bool contextMatches(boost::shared_ptr<Permission> existingPermission, boost::shared_ptr<Permission> requiredPermission,
                    boost::shared_ptr<Context> accessedContext);
std::list<std::string> getAllowedPaths(boost::shared_ptr<Permission> permission, boost::shared_ptr<ContextManager> cm);
