// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/RequestCache.java

#pragma once

//#include <com/tibbo/aggregate/common/action/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::action::RequestCache
    
{

public:
    typedef void super;

private:
    std::map requests;
protected:
    void ctor();

public:
    std::map getRequests();
    ActionResponse* getRequest(RequestIdentifier* requestId);

public: /* protected */
    void addRequest(RequestIdentifier* requestId, ActionResponse* actionRequest);
    void removeRequest(RequestIdentifier* requestId);
    void clear();

    // Generated

public:
    RequestCache();
protected:
    RequestCache(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
