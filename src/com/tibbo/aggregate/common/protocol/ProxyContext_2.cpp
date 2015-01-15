// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/ProxyContext.java
//#include <com/tibbo/aggregate/common/protocol/ProxyContext_2.h"

#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext.h"
#include <com/tibbo/aggregate/common/server/ServerContextConstants.h"
/*
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/util/Collection.h"
*/
template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::protocol::ProxyContext_2::ProxyContext_2(ProxyContext *ProxyContext_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor();
}

com::tibbo::aggregate::common::protocol::ProxyContext_2::ProxyContext_2(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(callerController);
}

com::tibbo::aggregate::common::protocol::ProxyContext_2::ProxyContext_2(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController, int  listenerCode)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(callerController, listenerCode);
}

com::tibbo::aggregate::common::protocol::ProxyContext_2::ProxyContext_2(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController, int  listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(callerController, listenerCode, filter);
}

com::tibbo::aggregate::common::protocol::ProxyContext_2::ProxyContext_2(ProxyContext *ProxyContext_this, int  listenerCode)
    : super(*static_cast< ::default_init_tag* >(0))
    , ProxyContext_this(ProxyContext_this)
{
    
    ctor(listenerCode);
}

void com::tibbo::aggregate::common::protocol::ProxyContext_2::handle(Event* event) /* throws(EventHandlingException) */
{
    auto path = event)->getData())->rec())->getString(::com::tibbo::aggregate::common::server::ServerContextConstants::EF_VISIBLE_CHILD_REMOVED_PATH());
    if(ProxyContext_this->visibleChildren != 0) {
        ProxyContext_this->removeVisibleChild(path);
    }
}



java::lang::Class* com::tibbo::aggregate::common::protocol::ProxyContext_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::ProxyContext_2::getClass0()
{
    return class_();
}

