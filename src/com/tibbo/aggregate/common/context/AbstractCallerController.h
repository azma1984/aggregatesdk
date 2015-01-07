// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractCallerController.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/context/CallerController.h"



class com::tibbo::aggregate::common::context::AbstractCallerController
    
    , public CallerController
{

public:
    typedef void super;

private:
    static ::java::util::Set* CONTROLLERS_;
    std::string* username;
    CallerData* callerData;
    bool loggedIn;
    std::string* type;
    std::string* address;
    ::java::util::Date* creationTime;
    std::map properties;
protected:
    void ctor(CallerData* callerData);

public:
    bool isLoggedIn();
    bool isPermissionCheckingEnabled();
    ::com::tibbo::aggregate::common::security::PermissionCache* getPermissionCache();
    CallerData* getCallerData();
    std::map getProperties();

public: /* protected */
    void setLoggedIn(bool loggedIn);

public:
    void sendFeedback(int level, std::string* message);
    static std::list  getControllers();
    std::string* toString();
    ::com::tibbo::aggregate::common::security::Permissions* getPermissions();
    std::string* getUsername();

public: /* protected */
    void setUsername(std::string* username);

public:
    std::string* getInheritedUsername();
    std::string* getEffectiveUsername();
    std::string* getType();
    void setType(std::string* type);
    std::string* getAddress();
    void setAddress(std::string* address);
    void login(std::string* username, std::string* inheritedUsername, ::com::tibbo::aggregate::common::security::Permissions* permissons) /* throws(ContextException) */;
    ::java::util::Date* getCreationTime();
    void logout();

    // Generated
    AbstractCallerController(CallerData* callerData);
protected:
    AbstractCallerController(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();
    static ::java::util::Set*& CONTROLLERS();
    ::java::lang::Class* getClass0();
};
