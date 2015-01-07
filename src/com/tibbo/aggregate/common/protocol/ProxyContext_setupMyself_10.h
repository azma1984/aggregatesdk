// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/ProxyContext.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultContextEventListener.h"



class com::tibbo::aggregate::common::protocol::ProxyContext_setupMyself_10
    : public ::com::tibbo::aggregate::common::context::DefaultContextEventListener
{

public:
    typedef ::com::tibbo::aggregate::common::context::DefaultContextEventListener super;
    void handle(::com::tibbo::aggregate::common::data::Event* ev);

    // Generated
    ProxyContext_setupMyself_10(ProxyContext *ProxyContext_this);
    ProxyContext_setupMyself_10(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController);
    ProxyContext_setupMyself_10(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController, ::java::lang::Integer* listenerCode);
    ProxyContext_setupMyself_10(ProxyContext *ProxyContext_this, ::com::tibbo::aggregate::common::context::CallerController* callerController, ::java::lang::Integer* listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter);
    ProxyContext_setupMyself_10(ProxyContext *ProxyContext_this, ::java::lang::Integer* listenerCode);
    
    ProxyContext *ProxyContext_this;

private:
    ::java::lang::Class* getClass0();
    friend class ProxyContext;
    friend class ProxyContext_setupMyself_4;
    friend class ProxyContext_setupMyself_5;
    friend class ProxyContext_setupMyself_6;
    friend class ProxyContext_setupMyself_7;
    friend class ProxyContext_setupMyself_8;
    friend class ProxyContext_setupMyself_9;
    friend class ProxyContext_setupMyself_11;
    friend class ProxyContext_setupMyself_12;
    friend class ProxyContext_setupMyself_13;
    friend class ProxyContext_setupMyself_14;
    friend class ProxyContext_setupMyself_15;
    friend class ProxyContext_clear_16;
    friend class ProxyContext_1;
    friend class ProxyContext_2;
    friend class ProxyContext_3;
};
