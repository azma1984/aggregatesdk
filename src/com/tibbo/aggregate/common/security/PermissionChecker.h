// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/security/PermissionChecker.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::security::PermissionChecker
    
{
    std::map getPermissionLevels();
    bool isValid(std::string* permissionLevel);
    bool has(::com::tibbo::aggregate::common::context::CallerController* caller, Permissions* requiredPermissions, ::com::tibbo::aggregate::common::context::Context* accessedContext);
    std::string* getLevel(Permissions* perms, std::string* context, ::com::tibbo::aggregate::common::context::ContextManager* cm);
    bool canSee(Permissions* perms, std::string* context, ::com::tibbo::aggregate::common::context::ContextManager* cm);
    std::string* canActivate(Permissions* has, Permissions* need, ::com::tibbo::aggregate::common::context::ContextManager* cm);

    // Generated
    
};
