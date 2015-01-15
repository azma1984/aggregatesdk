// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/EventData.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Comparable.h"



class com::tibbo::aggregate::common::context::EventData
    
    , public ::java::lang::Comparable
{

public:
    typedef void super;

private:
    EventDefinition* definition;
    ContextEventListenerSet* listeners;
    std::list  history;
    long fireCount;
protected:
    void ctor(EventDefinition* definition);

public:
    void registerFiredEvent();
    EventDefinition* getDefinition();
    ::java::util::Set* getListeners();
    ::java::util::Set* getListenersInfo();
    long getFireCount();
    bool addListener(ContextEventListener* listener, bool weak);
    bool removeListener(ContextEventListener* listener);
    void clearListeners();
    void dispatch(Event* event);
    Event* store(Event* event, int  customMemoryStorageSize);
    std::list  getHistory();
    const std::string & toString();
    int compareTo(EventData* d);

    // Generated
    EventData(EventDefinition* definition);
protected:
    EventData(const ::default_init_tag&);


public:
    

private:
    void init();

public:
    int compareTo(void* arg0);

private:
    ::java::lang::Class* getClass0();
};
