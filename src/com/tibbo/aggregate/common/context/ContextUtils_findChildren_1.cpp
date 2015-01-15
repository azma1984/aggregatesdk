// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextUtils.java
#include <com/tibbo/aggregate/common/context/ContextUtils_findChildren_1.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/Object.h"
////#include <java/util/List.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::ContextUtils_findChildren_1::ContextUtils_findChildren_1(const std::string & type, std::list  res)
    : super(*static_cast< ::default_init_tag* >(0))
    , type(type)
    , res(res)
{
    
    ctor();
}

void com::tibbo::aggregate::common::context::ContextUtils_findChildren_1::visit(Context* context)
{
    if(ContextUtils::isDerivedFrom(context)->getType(), type)) {
        res)->add(context));
    }
}



java::lang::Class* com::tibbo::aggregate::common::context::ContextUtils_findChildren_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::ContextUtils_findChildren_1::getClass0()
{
    return class_();
}

