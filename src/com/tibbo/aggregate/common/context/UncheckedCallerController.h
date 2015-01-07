// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/UncheckedCallerController.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/AbstractCallerController.h"



class com::tibbo::aggregate::common::context::UncheckedCallerController
    : public AbstractCallerController
{

public:
    typedef AbstractCallerController super;

private:
    ::com::tibbo::aggregate::common::security::Permissions* permissions;
protected:
    void ctor();
    void ctor(std::string* username);

public:
    ::com::tibbo::aggregate::common::security::Permissions* getPermissions();
    bool isPermissionCheckingEnabled();
    bool isLoggedIn();
    void logout();
    bool isHeadless();
    void handleContextEvent(::com::tibbo::aggregate::common::data::Event* event) /* throws(EventHandlingException) */;

    // Generated
    UncheckedCallerController();
    UncheckedCallerController(std::string* username);
protected:
    UncheckedCallerController(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
