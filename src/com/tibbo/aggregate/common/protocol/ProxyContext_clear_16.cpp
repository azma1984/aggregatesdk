// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/ProxyContext.java
#include <com/tibbo/aggregate/common/protocol/ProxyContext_clear_16.h"

#include <com/tibbo/aggregate/common/protocol/ProxyContext.h"

com::tibbo::aggregate::common::protocol::ProxyContext_clear_16::ProxyContext_clear_16(ProxyContext *ProxyContext_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor();
}

void com::tibbo::aggregate::common::protocol::ProxyContext_clear_16::visit(::com::tibbo::aggregate::common::context::Context* context)
{
    ProxyContext_this->initializedInfo = false;
    ProxyContext_this->initializingInfo = false;
    ProxyContext_this->initializedChildren = false;
    ProxyContext_this->initializingChildren = false;
    ProxyContext_this->initializedVariables = false;
    ProxyContext_this->initializingVariables = false;
    ProxyContext_this->initializedFunctions = false;
    ProxyContext_this->initializingFunctions = false;
    ProxyContext_this->initializedEvents = false;
    ProxyContext_this->initializingEvents = false;
    ProxyContext_this->initializedActions = false;
    ProxyContext_this->initializingActions = false;
    ProxyContext_this->initializedStatus = false;
    ProxyContext_this->initializingStatus = false;
    ProxyContext_this->initializingVisibleChildren = false;
    ProxyContext_this->visibleChildren;
}



java::lang::Class* com::tibbo::aggregate::common::protocol::ProxyContext_clear_16::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::ProxyContext_clear_16::getClass0()
{
    return class_();
}

