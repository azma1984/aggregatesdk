// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextVisitor.java
#include <com/tibbo/aggregate/common/context/DefaultContextVisitor.h"

#include <com/tibbo/aggregate/common/context/Context.h"
////#include <java/lang/NullPointerException.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::DefaultContextVisitor::DefaultContextVisitor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::DefaultContextVisitor::DefaultContextVisitor()
    : DefaultContextVisitor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool com::tibbo::aggregate::common::context::DefaultContextVisitor::shouldVisit(Context* context) /* throws(ContextException) */
{
    return !context)->isDistributed();
}



java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextVisitor::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.DefaultContextVisitor", 56);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextVisitor::getClass0()
{
    return class_();
}

