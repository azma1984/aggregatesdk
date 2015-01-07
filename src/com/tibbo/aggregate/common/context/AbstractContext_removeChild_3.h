// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractContext.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/context/ContextVisitor.h"



class com::tibbo::aggregate::common::context::AbstractContext_removeChild_3
    
    , public ContextVisitor
{

public:
    typedef void super;
    bool shouldVisit(Context* context) /* throws(ContextException) */;
    void visit(Context* context) /* throws(ContextException) */;

    // Generated
    AbstractContext_removeChild_3(AbstractContext *AbstractContext_this, Context* child);
    
    AbstractContext *AbstractContext_this;
    Context* child;

private:
    ::java::lang::Class* getClass0();
    friend class AbstractContext;
    friend class AbstractContext_start_1;
    friend class AbstractContext_stop_2;
    friend class AbstractContext_enableVariableStatuses_4;
};
