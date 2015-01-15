// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/BindingEventsHelper.java
#include <com/tibbo/aggregate/common/binding/BindingEventsHelper.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/binding/Binding.h"
#include <com/tibbo/aggregate/common/binding/EvaluationOptions.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/util/ThreadUtils.h"
/*
//#include <java/lang/Exception.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/ResourceBundle.h"*/

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::binding::BindingEventsHelper::BindingEventsHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::binding::BindingEventsHelper::BindingEventsHelper()
    : BindingEventsHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::E_BINDING_ERROR()
{
    
    return E_BINDING_ERROR_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::E_BINDING_ERROR_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::E_BINDING_EXECUTION()
{
    
    return E_BINDING_EXECUTION_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::E_BINDING_EXECUTION_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_CONTEXT()
{
    
    return EF_BINDING_CONTEXT_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_CONTEXT_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_TARGET()
{
    
    return EF_BINDING_TARGET_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_TARGET_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_EXPRESSION()
{
    
    return EF_BINDING_EXPRESSION_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_EXPRESSION_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_ACTIVATOR()
{
    
    return EF_BINDING_ACTIVATOR_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_ACTIVATOR_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_EXECUTION()
{
    
    return EF_BINDING_EXECUTION_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_EXECUTION_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_CONDITION()
{
    
    return EF_BINDING_CONDITION_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_CONDITION_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_VALUE()
{
    
    return EF_BINDING_VALUE_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_VALUE_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_CAUSE()
{
    
    return EF_BINDING_CAUSE_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_CAUSE_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_ERROR()
{
    
    return EF_BINDING_ERROR_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_ERROR_;

std::string& com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_ERROR_STACK()
{
    
    return EF_BINDING_ERROR_STACK_;
}
std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::EF_BINDING_ERROR_STACK_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::binding::BindingEventsHelper::EFT_BINDING_EXECUTION()
{
    
    return EFT_BINDING_EXECUTION_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::binding::BindingEventsHelper::EFT_BINDING_EXECUTION_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::binding::BindingEventsHelper::EFT_BINDING_EXECUTION_EXT()
{
    
    return EFT_BINDING_EXECUTION_EXT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::binding::BindingEventsHelper::EFT_BINDING_EXECUTION_EXT_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::binding::BindingEventsHelper::EFT_BINDING_ERROR()
{
    
    return EFT_BINDING_ERROR_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::binding::BindingEventsHelper::EFT_BINDING_ERROR_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::binding::BindingEventsHelper::EFT_BINDING_ERROR_EXT()
{
    
    return EFT_BINDING_ERROR_EXT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::binding::BindingEventsHelper::EFT_BINDING_ERROR_EXT_;

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::binding::BindingEventsHelper::createBindingErrorEventData(::com::tibbo::aggregate::common::context::Context* con, Binding* binding, int method, const std::string & activator, ::java::lang::Exception* error)
{
    
    auto dt = new DataTable(con == 0 ? EFT_BINDING_ERROR_ : EFT_BINDING_ERROR_EXT_);
    auto record = dt)->addRecord();
    if(con != 0) {
        record)->setValue(EF_BINDING_CONTEXT_, con)->getPath()));
    }
    if(binding != 0) {
        record)->setValue(EF_BINDING_TARGET_, binding)->getReference())->toString()));
        record)->setValue(EF_BINDING_EXPRESSION_, binding)->getExpression())->toString()));
    }
    if(error != 0) {
        record)->setValue(EF_BINDING_ERROR_, error)->getMessage()));
        auto stackTable = ::com::tibbo::aggregate::common::util::ThreadUtils::createStackTraceTable(error)->getStackTrace());
        record)->setValue(EF_BINDING_ERROR_STACK_, stackTable));
    }
    record)->setValue(EF_BINDING_ACTIVATOR_, activator));
    record)->setValue(EF_BINDING_EXECUTION_, executionTypeDescription(method)));
    return dt;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::binding::BindingEventsHelper::createBindingExecutionEventData(::com::tibbo::aggregate::common::context::Context* con, int method, Binding* binding, EvaluationOptions* options, ::com::tibbo::aggregate::common::expression::Reference* cause, void* result)
{
    
    auto const data = new DataRecord(con == 0 ? EFT_BINDING_EXECUTION_ : EFT_BINDING_EXECUTION_EXT_);
    if(con != 0) {
        data)->setValue(EF_BINDING_CONTEXT_, con)->getPath()));
    }
    data)->setValue(EF_BINDING_TARGET_, binding)->getReference())->toString()));
    data)->setValue(EF_BINDING_EXPRESSION_, binding)->getExpression())->toString()));
    if(options)->getActivator() != 0) {
        data)->setValue(EF_BINDING_ACTIVATOR_, options)->getActivator())->toString()));
    }
    if(options)->getCondition() != 0) {
        data)->setValue(EF_BINDING_CONDITION_, options)->getCondition())->toString()));
    }
    if(result != 0) {
        data)->setValue(EF_BINDING_VALUE_, result)->toString()));
    }
    if(cause != 0) {
        data)->setValue(EF_BINDING_CAUSE_, cause)->toString()));
    }
    data)->setValue(EF_BINDING_EXECUTION_, executionTypeDescription(method)));
    return data)->wrap();
}

std::string com::tibbo::aggregate::common::binding::BindingEventsHelper::executionTypeDescription(int method)
{
    
    const std::string & exec;
    if(method == EvaluationOptions::STARTUP) {
        exec = Cres::get())->getString(u"wOnStartup"_j);
    } else if(method == EvaluationOptions::EVENT) {
        exec = Cres::get())->getString(u"wOnEvent"_j);
    } else {
        exec = Cres::get())->getString(u"wPeriodically"_j);
    }
    return exec;
}



java::lang::Class* com::tibbo::aggregate::common::binding::BindingEventsHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.binding.BindingEventsHelper", 54);
    return c;
}

void com::tibbo::aggregate::common::binding::BindingEventsHelper::clinit()
{
struct string_init_ {
    string_init_() {
    E_BINDING_ERROR_ = u"bindingError"_j;
    E_BINDING_EXECUTION_ = u"bindingExecution"_j;
    EF_BINDING_CONTEXT_ = u"context"_j;
    EF_BINDING_TARGET_ = u"target"_j;
    EF_BINDING_EXPRESSION_ = u"expression"_j;
    EF_BINDING_ACTIVATOR_ = u"activator"_j;
    EF_BINDING_EXECUTION_ = u"execution"_j;
    EF_BINDING_CONDITION_ = u"condition"_j;
    EF_BINDING_VALUE_ = u"value"_j;
    EF_BINDING_CAUSE_ = u"cause"_j;
    EF_BINDING_ERROR_ = u"error"_j;
    EF_BINDING_ERROR_STACK_ = u"stack"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EFT_BINDING_EXECUTION_ = new TableFormat(int(1), int(1));
        {
            EFT_BINDING_EXECUTION_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_TARGET_)
                ->append(u"><S><D="_j)
                ->append(Cres::get())->getString(u"target"_j))
                ->append(u"><F=N><E="_j)
                ->append(field::StringFieldFormat::EDITOR_CONTEXT())
                ->append(u">"_j)->toString())));
            EFT_BINDING_EXECUTION_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_EXPRESSION_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"expression"_j))
                ->append(u">"_j)->toString())));
            EFT_BINDING_EXECUTION_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_VALUE_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"value"_j))
                ->append(u">"_j)->toString())));
            EFT_BINDING_EXECUTION_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_ACTIVATOR_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"wActivatorDescr"_j))
                ->append(u">"_j)->toString())));
            EFT_BINDING_EXECUTION_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_CONDITION_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"condition"_j))
                ->append(u">"_j)->toString())));
            EFT_BINDING_EXECUTION_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_EXECUTION_)
                ->append(u"><S><D="_j)
                ->append(Cres::get())->getString(u"wExecution"_j))
                ->append(u">"_j)->toString())));
            EFT_BINDING_EXECUTION_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_CAUSE_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"cause"_j))
                ->append(u">"_j)->toString())));
        }
        EFT_BINDING_EXECUTION_EXT_ = EFT_BINDING_EXECUTION_)->clone();
        {
            EFT_BINDING_EXECUTION_EXT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_CONTEXT_)
                ->append(u"><S><D="_j)
                ->append(Cres::get())->getString(u"context"_j))
                ->append(u"><F=N><E="_j)
                ->append(field::StringFieldFormat::EDITOR_CONTEXT())
                ->append(u">"_j)->toString())), int(0));
        }
        EFT_BINDING_ERROR_ = EFT_BINDING_EXECUTION_)->clone();
        {
            EFT_BINDING_ERROR_)->removeField(EF_BINDING_VALUE_);
            EFT_BINDING_ERROR_)->removeField(EF_BINDING_CONDITION_);
            EFT_BINDING_ERROR_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_ERROR_)
                ->append(u"><S><D="_j)
                ->append(Cres::get())->getString(u"error"_j))
                ->append(u"><E="_j)
                ->append(field::StringFieldFormat::EDITOR_TEXT_AREA())
                ->append(u">"_j)->toString())));
            EFT_BINDING_ERROR_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_ERROR_STACK_)
                ->append(u"><T><D="_j)
                ->append(Cres::get())->getString(u"stack"_j))
                ->append(u">"_j)->toString())));
        }
        EFT_BINDING_ERROR_EXT_ = EFT_BINDING_ERROR_)->clone();
        {
            EFT_BINDING_ERROR_EXT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(EF_BINDING_CONTEXT_)
                ->append(u"><S><D="_j)
                ->append(Cres::get())->getString(u"context"_j))
                ->append(u"><F=N>"_j)->toString())), int(0));
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::binding::BindingEventsHelper::getClass0()
{
    return class_();
}

