// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/FireEventRequestController.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultRequestController.h"



class com::tibbo::aggregate::common::event::FireEventRequestController
    : public ::com::tibbo::aggregate::common::context::DefaultRequestController
{

public:
    typedef ::com::tibbo::aggregate::common::context::DefaultRequestController super;

private:
    ::java::lang::Long* customExpirationPeriod;
    bool ignoreStorageErrors;
protected:
    void ctor(::java::lang::Long* customExpirationPeriod);
    void ctor(bool ignoreStorageErrors);

public:
    ::java::lang::Long* getCustomExpirationPeriod();
    void setCustomExpirationPeriod(::java::lang::Long* customExpirationPeriod);
    bool isIgnoreStorageErrors();
    void setIgnoreStorageErrors(bool ignoreStorageErrors);
    Event* process(Event* event);

    // Generated
    FireEventRequestController(::java::lang::Long* customExpirationPeriod);
    FireEventRequestController(bool ignoreStorageErrors);
protected:
    FireEventRequestController(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
