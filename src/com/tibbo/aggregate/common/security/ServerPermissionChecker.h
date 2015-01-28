#ifndef _ServerPermissionChecker_H_
#define _ServerPermissionChecker_H_

#include "security/DefaultPermissionChecker.h"
#include <string>
#include <boost/shared_ptr.hpp>

class ServerPermissionChecker : public DefaultPermissionChecker
{
private:
    static const std::string OBSERVER_PERMISSIONS_;
    static const std::string OPERATOR_PERMISSIONS_;
    static const std::string MANAGER_PERMISSIONS_;
    static const std::string ENGINEER_PERMISSIONS_;
    static const std::string ADMIN_PERMISSIONS_;

    static PermissionsPtr getObserverPermissions();
    static PermissionsPtr getOperatorPermissions();
    static PermissionsPtr getManagerPermissions();
    static PermissionsPtr getEngineerPermissions();
    static PermissionsPtr getAdminPermissions();

    ServerPermissionChecker();
};
#endif  //_ServerPermissionChecker_H_
