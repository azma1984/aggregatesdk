// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractContext.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/context/VariableGetter.h"



class com::tibbo::aggregate::common::context::AbstractContext_enableVariableStatuses_4
    
    , public VariableGetter
{

public:
    typedef void super;
    DataTable* get(Context* con, VariableDefinition* def, CallerController* caller, RequestController* request) /* throws(ContextException) */;

    // Generated
    AbstractContext_enableVariableStatuses_4(AbstractContext *AbstractContext_this);
    
    AbstractContext *AbstractContext_this;

private:
    ::java::lang::Class* getClass0();
    friend class AbstractContext;
    friend class AbstractContext_start_1;
    friend class AbstractContext_stop_2;
    friend class AbstractContext_removeChild_3;
};
