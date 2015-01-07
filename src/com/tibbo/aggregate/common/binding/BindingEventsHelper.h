// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/BindingEventsHelper.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::binding::BindingEventsHelper
    
{

public:
    typedef void super;

private:
    static const std::string E_BINDING_ERROR_;
    static const std::string E_BINDING_EXECUTION_;
    static const std::string EF_BINDING_CONTEXT_;
    static const std::string EF_BINDING_TARGET_;
    static const std::string EF_BINDING_EXPRESSION_;
    static const std::string EF_BINDING_ACTIVATOR_;
    static const std::string EF_BINDING_EXECUTION_;
    static const std::string EF_BINDING_CONDITION_;
    static const std::string EF_BINDING_VALUE_;
    static const std::string EF_BINDING_CAUSE_;
    static const std::string EF_BINDING_ERROR_;
    static const std::string EF_BINDING_ERROR_STACK_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_BINDING_EXECUTION_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_BINDING_EXECUTION_EXT_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_BINDING_ERROR_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_BINDING_ERROR_EXT_;

public:
    static ::com::tibbo::aggregate::common::datatable::DataTable* createBindingErrorEventData(::com::tibbo::aggregate::common::context::Context* con, Binding* binding, int method, std::string* activator, ::java::lang::Exception* error);
    static ::com::tibbo::aggregate::common::datatable::DataTable* createBindingExecutionEventData(::com::tibbo::aggregate::common::context::Context* con, int method, Binding* binding, EvaluationOptions* options, ::com::tibbo::aggregate::common::expression::Reference* cause, void* result);

private:
    static const std::string executionTypeDescription(int method);

    // Generated

public:
    BindingEventsHelper();
protected:
    BindingEventsHelper(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& E_BINDING_ERROR();
    static const std::string& E_BINDING_EXECUTION();
    static const std::string& EF_BINDING_CONTEXT();
    static const std::string& EF_BINDING_TARGET();
    static const std::string& EF_BINDING_EXPRESSION();
    static const std::string& EF_BINDING_ACTIVATOR();
    static const std::string& EF_BINDING_EXECUTION();
    static const std::string& EF_BINDING_CONDITION();
    static const std::string& EF_BINDING_VALUE();
    static const std::string& EF_BINDING_CAUSE();
    static const std::string& EF_BINDING_ERROR();
    static const std::string& EF_BINDING_ERROR_STACK();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_BINDING_EXECUTION();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_BINDING_EXECUTION_EXT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_BINDING_ERROR();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_BINDING_ERROR_EXT();

private:
    ::java::lang::Class* getClass0();
};
