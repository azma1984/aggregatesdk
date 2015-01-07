// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/KnownFormatCollector.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::encoding::KnownFormatCollector
    
{

public:
    typedef void super;

private:
    std::map formatIds;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* lock;
protected:
    void ctor();

public:
    bool isKnown(int formatId);
    bool isMarked(int formatId);
    void makeKnown(int formatId, bool mark);
    void markAll();

    // Generated
    KnownFormatCollector();
protected:
    KnownFormatCollector(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
