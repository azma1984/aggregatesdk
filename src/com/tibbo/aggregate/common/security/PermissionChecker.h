// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/security/PermissionChecker.java

#pragma once

#include "util/Interface.h"
#include "context/Context.h"
#include "context/CallerController.h"
#include "security/Permission.h"
#include <string>
#include <map>

/**
 * The <code>PermissionChecker</code> is responsible for granting/denying access of various callers to different contexts.
 */
class PermissionChecker : public Interface
{
    /**
    * Returns a map of all permission levels supported by the checker. Each level is defined by a name string and description string.
    */
    virtual std::map<std::string, std::string> getPermissionLevels() = 0;

    /**
    * Returns true if permission level {@code permissionLevel} is supported by the checker.
    */
    virtual bool isValid(const std::string& permissionLevel) = 0;

    /**
    * Returns true if {@code caller} is allowed to access an object those permissions are {@code requiredPermissions}.
    */
    virtual bool has(CallerController caller, Permissions requiredPermissions, Context accessedContext) = 0;

    /**
    * Returns the effective permission level of the calling party (those permissions are identified by {@code perms}) in the {@code context}.
    */
    virtual std::string getLevel(Permissions perms, const std::string& context, ContextManager cm) = 0;

    /**
    * Returns true if the calling party (those permissions are identified by {@code perms}) can see {@code context} among children of its parent context because it has non-null permissions for one or
    * more direct/nested children of {@code context}.
    */
    virtual bool canSee(Permissions perms, const std::string& context, ContextManager cm) = 0;

    /**
    * Checks whether the calling party (those permissions are identified by {@code has}) can set permissions of some other party to {@code need}.
    */
    virtual std::string canActivate(Permissions has, Permissions need, ContextManager cm) = 0;
};
