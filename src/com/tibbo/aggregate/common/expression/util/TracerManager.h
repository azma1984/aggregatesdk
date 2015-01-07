// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/util/TracerManager.java

#pragma once

#include <com/tibbo/aggregate/common/expression/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::expression::util::TracerManager
    
{

public:
    typedef void super;

private:
    static Tracer* DEFAULT_TRACER_;

public:
    static Tracer* getDefaultTracer();
    static void setDefaultTracer(Tracer* tracer);

    // Generated
    TracerManager();
protected:
    TracerManager(const ::default_init_tag&);


public:
    
    static void 

private:
    static Tracer*& DEFAULT_TRACER();
    ::java::lang::Class* getClass0();
};
