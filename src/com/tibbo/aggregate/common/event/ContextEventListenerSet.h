// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/ContextEventListenerSet.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::event::ContextEventListenerSet
    
{

public:
    typedef void super;

private:
    ::java::util::Set* listeners;

public:
    ::java::util::Set* getListeners();
    ::java::util::Set* getListenersInfo();
    bool addListener(ContextEventListener* listener, bool weak);
    bool removeListener(ContextEventListener* listener);
    bool contains(ContextEventListener* listener);
    void clear();
    int size();

private:
    static ContextEventListenerInfo* getListenerInfo(void* ref);

    // Generated

public:
    ContextEventListenerSet();
protected:
    void ctor();
    ContextEventListenerSet(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
