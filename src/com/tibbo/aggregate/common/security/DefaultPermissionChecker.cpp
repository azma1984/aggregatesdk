#include "security/DefaultPermissionChecker.h"
#include "context/UncheckedCallerController.h"
#include "context/ContextUtils.h"
#include "Cres.h"

DefaultPermissionChecker::DefaultPermissionChecker()
{
    CallerControllerPtr unchecked = new UncheckedCallerController();

    PermissionTypePtr nullType = new PermissionType(0, NULL_PERMISSIONS_, Cres::get().getString("secNoPerms"));
    permissionTypes.push_back( nullType );
}

const std::string DefaultPermissionChecker::NULL_PERMISSIONS()
{
    return NULL_PERMISSIONS_;
}

void DefaultPermissionChecker::setPermissionTypes(std::vector<PermissionTypePtr> perms)
{
    this->permissionTypes = perms;
}

PermissionsPtr DefaultPermissionChecker::getNullPermissions()
{
    PermissionsPtr newPermiss = new Permissions();
    return newPermiss;
}

bool DefaultPermissionChecker::has(
    CallerControllerPtr caller,
    PermissionsPtr requiredPermissions,
    ContextPtr accessedContext
) {
    try
    {
        if (caller == NULL) {
            return requiredPermissions->size() == 0;
        }

        if (!caller->isPermissionCheckingEnabled()) {
            return true;
        }

        PermissionsPtr existingPermissions = caller->getPermissions();

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
      //Log.SECURITY.error("Error checking permissions: ", ex);
      return false;
    }
}

std::string DefaultPermissionChecker::getLevel(
    PermissionsPtr permissions,
    const std::string& context,
    ContextManagerPtr cm
) {
    try
    {
        std::string level;

        if (permissions == NULL)
        {
            return NULL_PERMISSIONS_;
        }

        //TODO: Permissions need iterable
        /*
        for (Permission permission : permissions) {
            if (permission->getContext() == ТГДД) {
                return permission.getLevel() != null ? permission.getLevel() : NULL_PERMISSIONS;
            }

            List<String> allowedPaths = getAllowedPaths(permission, cm);

            for (String allowedPath : allowedPaths) {
                if (ContextUtils.matchesToMask(allowedPath, context, true, false)) {
                    return permission.getLevel() != null ? permission.getLevel() : NULL_PERMISSIONS;
                }
            }
        }
        */

        return NULL_PERMISSIONS_;
    }
    catch (Exception ex)
    {
        throw new SecurityException("Error getting permission type of '" + permissions + "' in '" + context + "': ", ex);
    }
}

bool DefaultPermissionChecker::canSee(Permissions permissions, const std::string& context, ContextManagerPtr cm)
{
    try {
        if (permissions == NULL) {
            return false;
        }

        //TODO: Permissions need iterable
//        for (Permission* permission : permissions) {
//            if (permission.getLevel().equals(NULL_PERMISSIONS)) {
//                continue;
//            }

//            if (permission->getContext() == NULL) {
//               return true;
//            }

//            List<String> allowedPaths = getAllowedPaths(permission, cm);

//            for (String allowedPath : allowedPaths) {
//                if (ContextUtils.matchesToMask(allowedPath, context, false, false)) {
//                    return false;
//                }

//                if (ContextUtils.matchesToMask(allowedPath, context, false, true)) {
//                    return true;
//                }
//            }
//        }

        return false;
        //TODO: exception
    }catch (Exception ex) {
        //TODO: Log
        //Log.SECURITY.error("Error checking permissions: ", ex);
        return false;
    }
}

virtual std::string DefaultPermissionChecker::canActivate(
    PermissionsPtr existingPermissions,
    PermissionsPtr requiredPermissions,
    ContextManagerPtr cm
) {
    //TODO: Permissions need iterable
//    for (Permission requiredPermission : requiredPermissions) {
//        for (Permission existingPermission : existingPermissions) {
//            if (contextMatches(existingPermission, requiredPermission, NULL)) {
//                if (!hasNecessaryLevel(existingPermission.getLevel(), requiredPermission.getLevel())) {
//                    if (!hasNecessaryLevel(getLevel(existingPermissions, requiredPermission.getContext(), cm), requiredPermission.getLevel())) {
//                        return "Cannot set permissions for '" + requiredPermission.getContext() + "' to '" + requiredPermission.getLevel() + "' because your own permission level for '"
//                            + existingPermission.getContext() + "' is '" + existingPermission.getLevel() + "'";
//                    }
//                }
//            }
//        }
//    }

    return "";
}

bool DefaultPermissionChecker::isValid(const std::string& permissionLevel) {
    try {
        for (int i = 0; i < permissionTypes.size(); i++) {
            if (permissionTypes[i]->getName()->equals(permissionLevel))
            {
              return true;
            }
        }

        return false;
        //TODO: exception
    }catch (Exception ex) {
        return false;
    }
}

std::map<std::string, std::string> DefaultPermissionChecker::getPermissionLevels()
{
    std::map<std::string, std::string> pm;

    for (int i = 0; i < permissionTypes.size(); i++) {
        pm.insert( std::pair<std::string, std::string>(permissionTypes[i]->getName(), permissionTypes[i]->getDescription()) );
    }

    return pm;
}


bool DefaultPermissionChecker::hasNecessaryLevel(const std::string& existingLevel, const std::string& requiredLevel)
{
    int existingLevelPattern = findPattern(existingLevel);
    int requiredLevelPattern = findPattern(requiredLevel);

    if ((requiredLevelPattern & existingLevelPattern) != requiredLevelPattern) {
        return false;
    }

    return true;
}

int DefaultPermissionChecker::findPattern(const std::string &level) /* throws(SecurityException) */
{
    for (int i = 0; i < permissionTypes.size(); i++) {
        if (permissionTypes[i]->getName() == level) {
            return permissionTypes[i]->getPattern();
        }
    }
    throw new SecurityException("Permission level '" + level + "' not found");
}

bool DefaultPermissionChecker::contextMatches(
    PermissionPtr existingPermission,
    PermissionPtr requiredPermission,
    ContextPtr accessedContext
){
    if (existingPermission->getContext() == NULL) {
        return true;
    }

    std::string accessedPath = requiredPermission.getContext() != null ? requiredPermission.getContext() : (accessedContext != null ? accessedContext.getPath() : null);

    if (accessedPath.empty()) {
        return false;
    }

    std::list<std::string> allowedPaths = getAllowedPaths(existingPermission, accessedContext != NULL ? accessedContext->getContextManager() : null);

    for (std::list<std::string>::iterator allowedPath = allowedPaths.begin(); it!=allowedPaths.end(); ++it) {
        if (ContextUtils::matchesToMask(*allowedPath, accessedPath, true, false)) {
            return true;
        }
    }

    return false;
}

std::list<std::string> DefaultPermissionChecker::getAllowedPaths(PermissionPtr permission, ContextManagerPtr cm)
{
    if (cm != NULL && permission->getContext().endsWith(ContextUtils.CONTEXT_NAME_SEPARATOR + ContextUtils.CONTEXT_GROUP_MASK)) {
        std::string truncated = permission->getContext().substr(0, permission->getContext().length() - 2);

        Context<Context> groupContext = cm->get(truncated, unchecked);

        if (groupContext != NULL && groupContext.isMapped())
        {
            std::list<std::string> allowedPaths;
            //TODO: groupContext->getMappedChildren
//            for (Context mappedChild : groupContext->getMappedChildren(unchecked)) {
//                allowedPaths.add(mappedChild.getPath());
//            }
            return allowedPaths;
        }
    }

    std::list<std::string> paths;
    paths.push_back( permission->getContext() );

    return paths;//Collections.singletonList(permission->getContext());
}
