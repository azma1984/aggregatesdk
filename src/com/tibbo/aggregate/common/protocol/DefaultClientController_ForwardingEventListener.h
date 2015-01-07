// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/DefaultClientController.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultContextEventListener.h"



class com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener
    : public ::com::tibbo::aggregate::common::context::DefaultContextEventListener
{

public:
    typedef ::com::tibbo::aggregate::common::context::DefaultContextEventListener super;
protected:
    void ctor(::java::lang::Integer* listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter);

public:
    bool shouldHandle(::com::tibbo::aggregate::common::data::Event* event) /* throws(EventHandlingException) */;
    void handle(::com::tibbo::aggregate::common::data::Event* event) /* throws(EventHandlingException) */;
    std::string* toString();
    int hashCode();
    bool equals(void* obj);

private:
    DefaultClientController* getOwningController();

public:
    ::com::tibbo::aggregate::common::context::CallerController* getCallerController();

    // Generated
    DefaultClientController_ForwardingEventListener(DefaultClientController *DefaultClientController_this, ::java::lang::Integer* listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter);
protected:
    DefaultClientController_ForwardingEventListener(DefaultClientController *DefaultClientController_this, const ::default_init_tag&);


public:
    
    DefaultClientController *DefaultClientController_this;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultClientController;
    friend class DefaultClientController_ProcessCommandTask;
    friend class DefaultClientController_PendingEventProcessingTask;
};
