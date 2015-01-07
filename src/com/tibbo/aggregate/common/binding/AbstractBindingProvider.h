// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/AbstractBindingProvider.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <org/apache/log4j/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/binding/BindingProvider.h"



class com::tibbo::aggregate::common::binding::AbstractBindingProvider
    
    , public BindingProvider
{

public:
    typedef void super;

private:
    static ::org::apache::log4j::Logger* LOGGER_;
    ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector;
protected:
    void ctor();
    void ctor(::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector);

public:
    void processExecution(int method, Binding* binding, EvaluationOptions* options, ::com::tibbo::aggregate::common::expression::Reference* cause, void* result);
    void processError(Binding* binding, int method, ::com::tibbo::aggregate::common::expression::Reference* cause, ::java::lang::Exception* error);

    // Generated
    AbstractBindingProvider();
    AbstractBindingProvider(::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector);
protected:
    AbstractBindingProvider(const ::default_init_tag&);


public:
    
    static void 

public: /* package */
    static ::org::apache::log4j::Logger*& LOGGER();

private:
    ::java::lang::Class* getClass0();
};
