// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/NamedThreadFactory.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/concurrent/ThreadFactory.h"



class com::tibbo::aggregate::common::util::NamedThreadFactory
    
    , public ::java::util::concurrent::ThreadFactory
{

public:
    typedef void super;

private:
    std::string* name;
    ::java::lang::Integer* priority;
    ::java::util::concurrent::ThreadFactory* threadFactory;
protected:
    void ctor();
    void ctor(std::string* name);
    void ctor(std::string* name, int priority);

public: /* protected */
    std::string* getName();

public:
    ::java::lang::Thread* newThread(::java::lang::Runnable* r);

    // Generated
    NamedThreadFactory();
    NamedThreadFactory(std::string* name);
    NamedThreadFactory(std::string* name, int priority);
protected:
    NamedThreadFactory(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
