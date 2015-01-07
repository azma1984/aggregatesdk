// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/security/Permissions.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Iterable.h"



class com::tibbo::aggregate::common::security::Permissions
    
    , public ::java::lang::Iterable
{

public:
    typedef void super;
    static const char16_t PERMISSIONS_SEPARATOR { u',' };

private:
    std::list  permissions;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* permissionsLock;
protected:
    void ctor();
    void ctor(std::string* data, PermissionChecker* checker);
    void ctor(std::string* context, std::string* type);
    void ctor(std::string* data);

public:
    std::string* encode();
    std::string* toString();
    int size();
    Permissions* add(Permission* permission);
    ::java::util::Iterator* iterator();
    int hashCode();
    bool equals(void* obj);

    // Generated
    Permissions();
    Permissions(std::string* data, PermissionChecker* checker);
    Permissions(std::string* context, std::string* type);
    Permissions(std::string* data);
protected:
    Permissions(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
