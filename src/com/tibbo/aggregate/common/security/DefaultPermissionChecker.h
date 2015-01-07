// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/security/DefaultPermissionChecker.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <org/apache/log4j/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/security/PermissionChecker.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace security
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::security::PermissionType, voidArray > PermissionTypeArray;
                } // security
            } // common
        } // aggregate
    } // tibbo
} // com



class com::tibbo::aggregate::common::security::DefaultPermissionChecker
    
    , public PermissionChecker
{

public:
    typedef void super;

private:
    static const std::string NULL_PERMISSIONS_;
    PermissionTypeArray* permissionTypes;
    ::org::apache::log4j::Logger* logger;
    ::com::tibbo::aggregate::common::context::CallerController* unchecked;
protected:
    void ctor();

public: /* protected */
    void setPermissionTypes(PermissionTypeArray* perms);

public:
    static Permissions* getNullPermissions();
    bool has(::com::tibbo::aggregate::common::context::CallerController* caller, Permissions* requiredPermissions, ::com::tibbo::aggregate::common::context::Context* accessedContext);
    std::string* getLevel(Permissions* permissions, std::string* context, ::com::tibbo::aggregate::common::context::ContextManager* cm) /* throws(SecurityException) */;
    bool canSee(Permissions* permissions, std::string* context, ::com::tibbo::aggregate::common::context::ContextManager* cm);

private:
    bool hasNecessaryLevel(std::string* existingLevel, std::string* requiredLevel);
    int findPattern(std::string* level) /* throws(SecurityException) */;

public:
    bool isValid(std::string* level);
    std::map getPermissionLevels();
    std::string* canActivate(Permissions* existingPermissions, Permissions* requiredPermissions, ::com::tibbo::aggregate::common::context::ContextManager* cm);

private:
    bool contextMatches(Permission* existingPermission, Permission* requiredPermission, ::com::tibbo::aggregate::common::context::Context* accessedContext);
    std::list  getAllowedPaths(Permission* permission, ::com::tibbo::aggregate::common::context::ContextManager* cm);

    // Generated

public:
    DefaultPermissionChecker();
protected:
    DefaultPermissionChecker(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();

public:
    static const std::string& NULL_PERMISSIONS();

private:
    ::java::lang::Class* getClass0();
};
