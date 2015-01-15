// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/util/ContextExpressionTracer.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/expression/util/Tracer.h"



class com::tibbo::aggregate::common::expression::util::ContextExpressionTracer
    
    , public Tracer
{

public:
    typedef void super;

private:
    static const std::string E_TRACE_;
    static const std::string EF_TRACE_VALUE_;
    static const std::string EF_TRACE_MESSAGE_;
    static TableFormat* EFT_TRACE_;
    ::com::tibbo::aggregate::common::context::Context* context;
    const std::string & traceEventGroup;
protected:
    void ctor(::com::tibbo::aggregate::common::context::Context* context, const std::string & traceEventGroup);

public:
    void install();
    void trace(void* value, const std::string & message);

public: /* protected */
    ::com::tibbo::aggregate::common::context::Context* getContext();

    // Generated

public:
    ContextExpressionTracer(::com::tibbo::aggregate::common::context::Context* context, const std::string & traceEventGroup);
protected:
    ContextExpressionTracer(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& E_TRACE();
    static const std::string& EF_TRACE_VALUE();
    static const std::string& EF_TRACE_MESSAGE();

private:
    static TableFormat*& EFT_TRACE();
    ::java::lang::Class* getClass0();
};
