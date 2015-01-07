// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/security/NullPermissionChecker.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/security/PermissionChecker.h"



class com::tibbo::aggregate::common::security::NullPermissionChecker
    
    , public PermissionChecker
{

public:
    typedef void super;
    std::map getPermissionLevels();
    bool has(::com::tibbo::aggregate::common::context::CallerController* caller, Permissions* requiredPermissions, ::com::tibbo::aggregate::common::context::Context* accessedContext);
    bool canSee(Permissions* perms, std::string* context, ::com::tibbo::aggregate::common::context::ContextManager* cm);
    std::string* getLevel(Permissions* perms, std::string* context, ::com::tibbo::aggregate::common::context::ContextManager* cm);
    bool isValid(std::string* permType);
    std::string* canActivate(Permissions* has, Permissions* need, ::com::tibbo::aggregate::common::context::ContextManager* cm);

    // Generated
    NullPermissionChecker();
protected:
    NullPermissionChecker(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
