#include "security/ServerPermissionChecker.h"
#include "security/PermissionType.h"
#include "Cres.h"

const std::string ServerPermissionChecker::OBSERVER_PERMISSIONS_ = "observer";
const std::string ServerPermissionChecker::OPERATOR_PERMISSIONS_ = "operator";
const std::string ServerPermissionChecker::MANAGER_PERMISSIONS_ = "manager";
const std::string ServerPermissionChecker::ENGINEER_PERMISSIONS_ = "engineer";
const std::string ServerPermissionChecker::ADMIN_PERMISSIONS_  = "admin";


ServerPermissionChecker::ServerPermissionChecker()
{
    std::vector<PermissionTypePtr> permisType;

    //TODO:
//    PermissionTypePtr nullType = PermissionTypePtr(new PermissionType(0, NULL_PERMISSIONS(), Cres::get()->getString("secNoPerms")));
//    permisType.push_back( nullType );

//    PermissionTypePtr observerType = PermissionTypePtr(new PermissionType(0b00000001, OBSERVER_PERMISSIONS_, Cres::get()->getString("secObserverPerms")));
//    permisType.push_back( observerType );

//    PermissionTypePtr operatorType = new PermissionType(0b00000011, OPERATOR_PERMISSIONS_, Cres::get()->getString("secOperatorPerms"));
//    permisType.push_back( operatorType );

//    PermissionTypePtr managerType = new PermissionType(0b00000111, MANAGER_PERMISSIONS_, Cres::get()->getString("secManagerPerms"));
//    permisType.push_back( managerType );

//    PermissionTypePtr engineerType = new PermissionType(0b00001111, ENGINEER_PERMISSIONS_, Cres::get()->getString("secEngineerPerms"));
//    permisType.push_back( engineerType );

//    PermissionTypePtr adminType = new PermissionType(0b00011111, ADMIN_PERMISSIONS_, Cres::get()->getString("secAdminPerms"));
//    permisType.push_back( adminType );

    setPermissionTypes( permisType );
}

PermissionsPtr ServerPermissionChecker::getObserverPermissions()
{
    return PermissionsPtr(new Permissions("", OBSERVER_PERMISSIONS_));
}

PermissionsPtr ServerPermissionChecker::getOperatorPermissions()
{
    return PermissionsPtr(new Permissions("", OPERATOR_PERMISSIONS_));
}

PermissionsPtr ServerPermissionChecker::getManagerPermissions()
{
    return PermissionsPtr(new Permissions("", MANAGER_PERMISSIONS_));
}

PermissionsPtr ServerPermissionChecker::getEngineerPermissions()
{
    return PermissionsPtr(new Permissions("", ENGINEER_PERMISSIONS_));
}

PermissionsPtr ServerPermissionChecker::getAdminPermissions()
{
    return PermissionsPtr(new Permissions("", ADMIN_PERMISSIONS_));
}

