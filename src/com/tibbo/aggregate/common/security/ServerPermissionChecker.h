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

    static boost::shared_ptr<Permissions> getObserverPermissions();
    static boost::shared_ptr<Permissions> getOperatorPermissions();
    static boost::shared_ptr<Permissions> getManagerPermissions();
    static boost::shared_ptr<Permissions> getEngineerPermissions();
    static boost::shared_ptr<Permissions> getAdminPermissions();

    ServerPermissionChecker();
};
#endif  //_ServerPermissionChecker_H_
