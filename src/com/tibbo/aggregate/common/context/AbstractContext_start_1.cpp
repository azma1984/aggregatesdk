// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractContext.java
#include <com/tibbo/aggregate/common/context/AbstractContext_start_1.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/context/AbstractContext.h"
#include <com/tibbo/aggregate/common/context/Context.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/String.h"
////#include <java/lang/StringBuilder.h"
////#include <java/lang/System.h"
////#include <org/apache/log4j/Logger.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::AbstractContext_start_1::AbstractContext_start_1(AbstractContext *AbstractContext_this, Context* child)
    : super(*static_cast< ::default_init_tag* >(0))
    , AbstractContext_this(AbstractContext_this)
    , child(child)
{
    
    ctor();
}

void* com::tibbo::aggregate::common::context::AbstractContext_start_1::call() /* throws(Exception) */
{
    auto startTime = ::java::lang::System::currentTimeMillis();
    child)->start();
    Log::CONTEXT_CHILDREN())->debug(std::stringBuilder().append(u"Started context  '"_j)->append(child)->getPath())
        ->append(u"' in "_j)
        ->append((::java::lang::System::currentTimeMillis() - startTime))
        ->append(u" ms"_j)->toString());
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::context::AbstractContext_start_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::AbstractContext_start_1::getClass0()
{
    return class_();
}

