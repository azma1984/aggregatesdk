// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/FormatCache.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::encoding::FormatCache
    
{

public:
    typedef void super;

private:
    static const int RETRIES = 30) };
    static const int TIMEOUT = 1000) };
    std::map cache;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* cacheLock;
    ::com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController* controller;
protected:
    void ctor(::com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController* controller);
    void ctor();

public:
    void put(int id, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
    int add(::com::tibbo::aggregate::common::datatable::TableFormat* format);
    ::java::lang::Integer* getId(::com::tibbo::aggregate::common::datatable::TableFormat* format);
    ::com::tibbo::aggregate::common::datatable::TableFormat* getCachedVersion(::com::tibbo::aggregate::common::datatable::TableFormat* format);
    ::com::tibbo::aggregate::common::datatable::TableFormat* get(int id);
    void clear();

private:
    void dump();

    // Generated

public:
    FormatCache(::com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController* controller);
    FormatCache();
protected:
    FormatCache(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
