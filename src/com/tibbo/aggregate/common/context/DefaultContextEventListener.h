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
    
    , public ContextEventListener
{

public:
    typedef void super;

private:
    CallerController* callerController;
    int  listenerCode;
    ::com::tibbo::aggregate::common::expression::Expression* filter;
    bool acceptEventsWithoutListenerCode;
    ::com::tibbo::aggregate::common::expression::Evaluator* evaluator;
protected:
    void ctor();
    void ctor(CallerController* callerController);
    void ctor(CallerController* callerController, int  listenerCode);
    void ctor(CallerController* callerController, int  listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter);
    void ctor(int  listenerCode);

public:
    bool shouldHandle(Event* ev) /* throws(EventHandlingException) */;
    CallerController* getCallerController();
    int  getListenerCode();
    void setCallerController(CallerController* callerController);

public: /* protected */
    void setAcceptEventsWithoutListenerCode(bool acceptEventsWithoutListenerCode);

public:
    void setFilter(::com::tibbo::aggregate::common::expression::Expression* filter);
    ::com::tibbo::aggregate::common::expression::Expression* getFilter();

    // Generated
    DefaultContextEventListener();
    DefaultContextEventListener(CallerController* callerController);
    DefaultContextEventListener(CallerController* callerController, int  listenerCode);
    DefaultContextEventListener(CallerController* callerController, int  listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter);
    DefaultContextEventListener(int  listenerCode);
protected:
    DefaultContextEventListener(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
