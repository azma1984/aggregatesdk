// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/ThreadGroupPoolFactory.java

#pragma once

#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/atomic/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/concurrent/ThreadFactory.h"



class com::tibbo::aggregate::common::util::ThreadGroupPoolFactory
    
    , public ::java::util::concurrent::ThreadFactory
{

public:
    typedef void super;

private:
    static ::java::util::concurrent::atomic::AtomicInteger* poolNumber_;
    ::java::lang::ThreadGroup* group;
    ::java::util::concurrent::atomic::AtomicInteger* threadNumber;
    std::string* namePrefix;
protected:
    void ctor(::java::lang::ThreadGroup* group, std::string* name);

public:
    ::java::lang::Thread* newThread(::java::lang::Runnable* r);

    // Generated
    ThreadGroupPoolFactory(::java::lang::ThreadGroup* group, std::string* name);
protected:
    ThreadGroupPoolFactory(const ::default_init_tag&);


public:
    
    static void 

private:
    static ::java::util::concurrent::atomic::AtomicInteger*& poolNumber();
    ::java::lang::Class* getClass0();
};
