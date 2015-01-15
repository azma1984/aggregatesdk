// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/ProxyContext.java
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_15.h"

#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext.h"
//#include <java/lang/NullPointerException.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_15::ProxyContext_setupMyself_15(ProxyContext *ProxyContext_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor();
}

com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_15::ProxyContext_setupMyself_15(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(callerController);
}

com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_15::ProxyContext_setupMyself_15(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController, int  listenerCode)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(callerController, listenerCode);
}

com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_15::ProxyContext_setupMyself_15(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController, int  listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(callerController, listenerCode, filter);
}

com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_15::ProxyContext_setupMyself_15(ProxyContext *ProxyContext_this, int  listenerCode)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(listenerCode);
}

void com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_15::handle(Event* ev)
{
    ProxyContext_this->initInfoImpl(ev)->getData());
}



java::lang::Class* com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_15::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_15::getClass0()
{
    return class_();
}

