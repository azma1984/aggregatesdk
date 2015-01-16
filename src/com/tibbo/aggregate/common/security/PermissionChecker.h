#ifndef _PermissionChecker_H_
#define _PermissionChecker_H_

#include "util/Interface.h"
#include "context/Context.h"
#include "context/ContextManager.h"
#include "context/CallerController.h"
#include "security/Permissions.h"
#include <string>
#include <map>
#include <boost/shared_ptr.hpp>

/**
 * The <code>PermissionChecker</code> is responsible for granting/denying access of various callers to different contexts.
 */
class PermissionChecker : public Interface
{
    /**
    * Returns a map of all permission levels supported by the checker. Each level is defined by a name string and description string.
    */
   // virtual std::map<std::string, std::string> getPermissionLevels() = 0;

    /**
    * Returns true if permission level {@code permissionLevel} is supported by the checker.
    */
   // virtual bool isValid(const std::string& permissionLevel) = 0;

    /**
    * Returns true if {@code caller} is allowed to access an object those permissions are {@code requiredPermissions}.
    */
//    virtual bool has(boost::shared_ptr<CallerController> caller, boost::shared_ptr<Permissions> requiredPermissions,
  //                   boost::shared_ptr<Context> accessedContext) = 0;

    /**
    * Returns the effective permission level of the calling party (those permissions are identified by {@code perms}) in the {@code context}.
    */
  //  virtual std::string getLevel(boost::shared_ptr<Permissions> perms, const std::string& context, boost::shared_ptr<ContextManager> cm) = 0;

    /**
    * Returns true if the calling party (those permissions are identified by {@code perms}) can see {@code context} among children of its parent context because it has non-null permissions for one or
    * more direct/nested children of {@code context}.
    */
  //  virtual bool canSee(Permissions perms, const std::string& context, boost::shared_ptr<ContextManager> cm) = 0;

    /**
    * Checks whether the calling party (those permissions are identified by {@code has}) can set permissions of some other party to {@code need}.
    */
   // virtual std::string canActivate(boost::shared_ptr<Permissions> has, boost::shared_ptr<Permissions> need,
   //                                 boost::shared_ptr<ContextManager> cm) = 0;
};
#endif  //_PermissionChecker_H_
