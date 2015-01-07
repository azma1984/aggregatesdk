// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/ContextEventListenerInfo.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::event::ContextEventListenerInfo
    
{

public:
    typedef void super;

private:
    ContextEventListener* listener;
    bool weak;
protected:
    void ctor(ContextEventListener* listener, bool weak);

public:
    ContextEventListener* getListener();
    bool isWeak();

    // Generated
    ContextEventListenerInfo(ContextEventListener* listener, bool weak);
protected:
    ContextEventListenerInfo(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
