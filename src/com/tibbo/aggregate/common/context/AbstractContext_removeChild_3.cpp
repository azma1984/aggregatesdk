// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractContext.java
#include <com/tibbo/aggregate/common/context/AbstractContext_removeChild_3.h"

#include <com/tibbo/aggregate/common/context/AbstractContext.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
////#include <java/lang/NullPointerException.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::AbstractContext_removeChild_3::AbstractContext_removeChild_3(AbstractContext *AbstractContext_this, Context* child)
    : super(*static_cast< ::default_init_tag* >(0))
    , AbstractContext_this(AbstractContext_this)
    , child(child)
{
    
    ctor();
}

bool com::tibbo::aggregate::common::context::AbstractContext_removeChild_3::shouldVisit(Context* context) /* throws(ContextException) */
{
    return true;
}

void com::tibbo::aggregate::common::context::AbstractContext_removeChild_3::visit(Context* context) /* throws(ContextException) */
{
    AbstractContext_this->getContextManager())->contextRemoved(child);
}



java::lang::Class* com::tibbo::aggregate::common::context::AbstractContext_removeChild_3::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::AbstractContext_removeChild_3::getClass0()
{
    return class_();
}

