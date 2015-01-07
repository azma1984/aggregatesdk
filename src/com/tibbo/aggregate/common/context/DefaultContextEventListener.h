// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextEventListener.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/event/ContextEventListener.h"



class com::tibbo::aggregate::common::context::DefaultContextEventListener
    
    , public ::com::tibbo::aggregate::common::event::ContextEventListener
{

public:
    typedef void super;

private:
    CallerController* callerController;
    ::java::lang::Integer* listenerCode;
    ::com::tibbo::aggregate::common::expression::Expression* filter;
    bool acceptEventsWithoutListenerCode;
    ::com::tibbo::aggregate::common::expression::Evaluator* evaluator;
protected:
    void ctor();
    void ctor(CallerController* callerController);
    void ctor(CallerController* callerController, ::java::lang::Integer* listenerCode);
    void ctor(CallerController* callerController, ::java::lang::Integer* listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter);
    void ctor(::java::lang::Integer* listenerCode);

public:
    bool shouldHandle(::com::tibbo::aggregate::common::data::Event* ev) /* throws(EventHandlingException) */;
    CallerController* getCallerController();
    ::java::lang::Integer* getListenerCode();
    void setCallerController(CallerController* callerController);

public: /* protected */
    void setAcceptEventsWithoutListenerCode(bool acceptEventsWithoutListenerCode);

public:
    void setFilter(::com::tibbo::aggregate::common::expression::Expression* filter);
    ::com::tibbo::aggregate::common::expression::Expression* getFilter();

    // Generated
    DefaultContextEventListener();
    DefaultContextEventListener(CallerController* callerController);
    DefaultContextEventListener(CallerController* callerController, ::java::lang::Integer* listenerCode);
    DefaultContextEventListener(CallerController* callerController, ::java::lang::Integer* listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter);
    DefaultContextEventListener(::java::lang::Integer* listenerCode);
protected:
    DefaultContextEventListener(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
