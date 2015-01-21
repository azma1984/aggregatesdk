// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/UncheckedCallerController.java
#include <com/tibbo/aggregate/common/context/UncheckedCallerController.h"

#include <com/tibbo/aggregate/common/security/DefaultPermissionChecker.h"
#include <com/tibbo/aggregate/common/security/Permissions.h"
////#include <java/lang/UnsupportedOperationException.h"

UncheckedCallerController::UncheckedCallerController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

UncheckedCallerController::UncheckedCallerController() 
    : UncheckedCallerController(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

UncheckedCallerController::UncheckedCallerController(const std::string & username) 
    : UncheckedCallerController(*static_cast< ::default_init_tag* >(0))
{
    ctor(username);
}

void UncheckedCallerController::init()
{
    permissions = DefaultPermissionChecker::getNullPermissions();
}

void UncheckedCallerController::ctor()
{
    super::ctor(0);
    init();
}

void UncheckedCallerController::ctor(const std::string & username)
{
    super::ctor(0);
    init();
    setUsername(username);
}

com::tibbo::aggregate::common::security::Permissions* UncheckedCallerController::getPermissions()
{
    return permissions;
}

bool UncheckedCallerController::isPermissionCheckingEnabled()
{
    return false;
}

bool UncheckedCallerController::isLoggedIn()
{
    return true;
}

void UncheckedCallerController::logout()
{
}

bool UncheckedCallerController::isHeadless()
{
    return true;
}

void UncheckedCallerController::handleContextEvent(Event* event) /* throws(EventHandlingException) */
{
    throw new ::java::lang::UnsupportedOperationException();
}



java::lang::Class* UncheckedCallerController::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.UncheckedCallerController", 60);
    return c;
}

java::lang::Class* UncheckedCallerController::getClass0()
{
    return class_();
}

