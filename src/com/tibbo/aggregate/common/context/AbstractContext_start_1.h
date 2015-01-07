// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractContext.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/concurrent/Callable.h"



class com::tibbo::aggregate::common::context::AbstractContext_start_1
    
    , public ::java::util::concurrent::Callable
{

public:
    typedef void super;
    void* call() /* throws(Exception) */;

    // Generated
    AbstractContext_start_1(AbstractContext *AbstractContext_this, Context* child);
    
    AbstractContext *AbstractContext_this;
    Context* child;

private:
    ::java::lang::Class* getClass0();
    friend class AbstractContext;
    friend class AbstractContext_stop_2;
    friend class AbstractContext_removeChild_3;
    friend class AbstractContext_enableVariableStatuses_4;
};
