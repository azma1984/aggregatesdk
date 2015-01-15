// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/UncheckedCallerController.java
#include <com/tibbo/aggregate/common/context/UncheckedCallerController.h"

#include <com/tibbo/aggregate/common/security/DefaultPermissionChecker.h"
#include <com/tibbo/aggregate/common/security/Permissions.h"
////#include <java/lang/UnsupportedOperationException.h"

com::tibbo::aggregate::common::context::UncheckedCallerController::UncheckedCallerController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::UncheckedCallerController::UncheckedCallerController() 
    : UncheckedCallerController(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::context::UncheckedCallerController::UncheckedCallerController(const std::string & username) 
    : UncheckedCallerController(*static_cast< ::default_init_tag* >(0))
{
    ctor(username);
}

void com::tibbo::aggregate::common::context::UncheckedCallerController::init()
{
    permissions = DefaultPermissionChecker::getNullPermissions();
}

void com::tibbo::aggregate::common::context::UncheckedCallerController::ctor()
{
    super::ctor(0);
    init();
}

void com::tibbo::aggregate::common::context::UncheckedCallerController::ctor(const std::string & username)
{
    super::ctor(0);
    init();
    setUsername(username);
}

com::tibbo::aggregate::common::security::Permissions* com::tibbo::aggregate::common::context::UncheckedCallerController::getPermissions()
{
    return permissions;
}

bool com::tibbo::aggregate::common::context::UncheckedCallerController::isPermissionCheckingEnabled()
{
    return false;
}

bool com::tibbo::aggregate::common::context::UncheckedCallerController::isLoggedIn()
{
    return true;
}

void com::tibbo::aggregate::common::context::UncheckedCallerController::logout()
{
}

bool com::tibbo::aggregate::common::context::UncheckedCallerController::isHeadless()
{
    return true;
}

void com::tibbo::aggregate::common::context::UncheckedCallerController::handleContextEvent(Event* event) /* throws(EventHandlingException) */
{
    throw new ::java::lang::UnsupportedOperationException();
}



java::lang::Class* com::tibbo::aggregate::common::context::UncheckedCallerController::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.UncheckedCallerController", 60);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::UncheckedCallerController::getClass0()
{
    return class_();
}

