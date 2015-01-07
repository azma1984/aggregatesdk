// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/AggreGateSwingWorker.java

#pragma once

#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Runnable.h"



class com::tibbo::aggregate::common::util::AggreGateSwingWorker
    
    , public ::java::lang::Runnable
{

public:
    typedef void super;

private:
    void* value;
protected:
    void ctor();

public:
    void* start();
    void* execute();
    void* executeWithExceptions() /* throws(InterruptedException, InvocationTargetException) */;
    /*void run(); (already declared) */

public: /* protected */
    void set(void* value);

    // Generated

public:
    AggreGateSwingWorker();
protected:
    AggreGateSwingWorker(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
