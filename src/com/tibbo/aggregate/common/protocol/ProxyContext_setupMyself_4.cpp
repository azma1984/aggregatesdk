// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/ProxyContext.java
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_4.h"

#include <com/tibbo/aggregate/common/context/AbstractContext.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_4::ProxyContext_setupMyself_4(ProxyContext *ProxyContext_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor();
}

com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_4::ProxyContext_setupMyself_4(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(callerController);
}

com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_4::ProxyContext_setupMyself_4(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController, int  listenerCode)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(callerController, listenerCode);
}

com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_4::ProxyContext_setupMyself_4(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController, int  listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(callerController, listenerCode, filter);
}

com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_4::ProxyContext_setupMyself_4(ProxyContext *ProxyContext_this, int  listenerCode)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(listenerCode);
}

void com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_4::handle(Event* event) /* throws(EventHandlingException) */
{
    auto child = event)->getData())->rec())->getString(::com::tibbo::aggregate::common::context::AbstractContext::EF_CHILD_ADDED_CHILD());
    if(java_cast< ::com::tibbo::aggregate::common::context::Context* >(ProxyContext_this->getChild(child)) == 0) {
        ProxyContext_this->addChild(static_cast< ::com::tibbo::aggregate::common::context::Context* >(java_cast< ::com::tibbo::aggregate::common::context::Context* >(ProxyContext_this->createChildContextProxy(child))));
    }
}



java::lang::Class* com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_4::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_4::getClass0()
{
    return class_();
}

