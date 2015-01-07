// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/security/PermissionCache.java

#pragma once

//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::security::PermissionCache
    
{

public:
    typedef void super;

private:
    std::map effectiveLevels;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* lock;

public:
    std::string* getLevel(std::string* context);
    void cacheLevel(std::string* context, std::string* level);

    // Generated
    PermissionCache();
protected:
    void ctor();
    PermissionCache(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
