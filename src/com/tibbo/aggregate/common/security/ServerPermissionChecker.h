// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/security/ServerPermissionChecker.java

#pragma once

//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/security/DefaultPermissionChecker.h"



class com::tibbo::aggregate::common::security::ServerPermissionChecker
    : public DefaultPermissionChecker
{

public:
    typedef DefaultPermissionChecker super;

private:
    static const std::string OBSERVER_PERMISSIONS_;
    static const std::string OPERATOR_PERMISSIONS_;
    static const std::string MANAGER_PERMISSIONS_;
    static const std::string ENGINEER_PERMISSIONS_;
    static const std::string ADMIN_PERMISSIONS_;
protected:
    void ctor();

public:
    static Permissions* getObserverPermissions();
    static Permissions* getOperatorPermissions();
    static Permissions* getManagerPermissions();
    static Permissions* getEngineerPermissions();
    static Permissions* getAdminPermissions();

    // Generated
    ServerPermissionChecker();
protected:
    ServerPermissionChecker(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& OBSERVER_PERMISSIONS();
    static const std::string& OPERATOR_PERMISSIONS();
    static const std::string& MANAGER_PERMISSIONS();
    static const std::string& ENGINEER_PERMISSIONS();
    static const std::string& ADMIN_PERMISSIONS();

private:
    ::java::lang::Class* getClass0();
};
