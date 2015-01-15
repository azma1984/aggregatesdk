#include "security/ServerPermissionChecker.h"

const std::string ServerPermissionChecker::OBSERVER_PERMISSIONS_ = "observer";
const std::string ServerPermissionChecker::OPERATOR_PERMISSIONS_ = "operator";
const std::string ServerPermissionChecker::MANAGER_PERMISSIONS_ = "manager";
const std::string ServerPermissionChecker::ENGINEER_PERMISSIONS_ = "engineer";
const std::string ServerPermissionChecker::ADMIN_PERMISSIONS_  = "admin";


ServerPermissionChecker::ServerPermissionChecker()
{
    std::vector<boost::shared_ptr<PermissionType>> permisType;

    boost::shared_ptr<PermissionType> nullType = new PermissionType(0, NULL_PERMISSIONS, Cres::get()->getString("secNoPerms"));
    permisType.push_back( nullType );

    boost::shared_ptr<PermissionType> observerType = new PermissionType(0b00000001, OBSERVER_PERMISSIONS_, Cres::get()->getString("secObserverPerms"));
    permisType.push_back( observerType );

    boost::shared_ptr<PermissionType> operatorType = new PermissionType(0b00000011, OPERATOR_PERMISSIONS_, Cres::get()->getString("secOperatorPerms"));
    permisType.push_back( operatorType );

    boost::shared_ptr<PermissionType> managerType = new PermissionType(0b00000111, MANAGER_PERMISSIONS_, Cres::get()->getString("secManagerPerms"));
    permisType.push_back( managerType );

    boost::shared_ptr<PermissionType> engineerType = new PermissionType(0b00001111, ENGINEER_PERMISSIONS_, Cres::get()->getString("secEngineerPerms"));
    permisType.push_back( engineerType );

    boost::shared_ptr<PermissionType> adminType = new PermissionType(0b00011111, ADMIN_PERMISSIONS_, Cres::get()->getString("secAdminPerms"));
    permisType.push_back( adminType );

    setPermissionTypes( permisType );
}

boost::shared_ptr<Permissions> ServerPermissionChecker::getObserverPermissions()
{
    return new Permissions(NULL, OBSERVER_PERMISSIONS_)
}

boost::shared_ptr<Permissions> ServerPermissionChecker::getOperatorPermissions()
{
    return new Permissions(NULL, OPERATOR_PERMISSIONS_);
}

boost::shared_ptr<Permissions> ServerPermissionChecker::getManagerPermissions()
{
    return new Permissions(NULL, MANAGER_PERMISSIONS_);
}

boost::shared_ptr<Permissions> ServerPermissionChecker::getEngineerPermissions()
{
    return new Permissions(NULL, ENGINEER_PERMISSIONS_);
}

boost::shared_ptr<Permissions> ServerPermissionChecker::getAdminPermissions()
{
    return new Permissions(NULL, ADMIN_PERMISSIONS_);
}