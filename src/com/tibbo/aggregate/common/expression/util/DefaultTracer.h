// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/util/DefaultTracer.java

#pragma once

#include <com/tibbo/aggregate/common/expression/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/expression/util/Tracer.h"



class com::tibbo::aggregate::common::expression::util::DefaultTracer
    
    , public Tracer
{

public:
    typedef void super;
    void trace(void* value, std::string* message);
    static void traceToLog(void* value, std::string* message);

    // Generated
    DefaultTracer();
protected:
    DefaultTracer(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
