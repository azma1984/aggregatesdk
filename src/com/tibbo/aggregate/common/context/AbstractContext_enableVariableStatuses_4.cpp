// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractContext.java
#include <com/tibbo/aggregate/common/context/AbstractContext_enableVariableStatuses_4.h"

#include <com/tibbo/aggregate/common/context/AbstractContext.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"

com::tibbo::aggregate::common::context::AbstractContext_enableVariableStatuses_4::AbstractContext_enableVariableStatuses_4(AbstractContext *AbstractContext_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , AbstractContext_this(AbstractContext_this)
{
    
    ctor();
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::context::AbstractContext_enableVariableStatuses_4::get(Context* con, VariableDefinition* def, CallerController* caller, RequestController* request) /* throws(ContextException) */
{
    return AbstractContext_this->createVariableStatusesTable();
}



java::lang::Class* com::tibbo::aggregate::common::context::AbstractContext_enableVariableStatuses_4::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::AbstractContext_enableVariableStatuses_4::getClass0()
{
    return class_();
}

