// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/util/ContextExpressionTracer.java
#include <com/tibbo/aggregate/common/expression/util/ContextExpressionTracer.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/ResourceBundle.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::ContextExpressionTracer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::ContextExpressionTracer(::com::tibbo::aggregate::common::context::Context* context, const std::string & traceEventGroup) 
    : ContextExpressionTracer(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,traceEventGroup);
}

std::string& com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::E_TRACE()
{
    
    return E_TRACE_;
}
std::string com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::E_TRACE_;

std::string& com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::EF_TRACE_VALUE()
{
    
    return EF_TRACE_VALUE_;
}
std::string com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::EF_TRACE_VALUE_;

std::string& com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::EF_TRACE_MESSAGE()
{
    
    return EF_TRACE_MESSAGE_;
}
std::string com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::EF_TRACE_MESSAGE_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::EFT_TRACE()
{
    
    return EFT_TRACE_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::EFT_TRACE_;

void com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::ctor(::com::tibbo::aggregate::common::context::Context* context, const std::string & traceEventGroup)
{
    super::ctor();
    this->context = context;
    this->traceEventGroup = traceEventGroup;
    install();
}

void com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::install()
{
    auto target = getContext();
    if(target == 0) {
        return;
    }
    if(target)->getEventDefinition(E_TRACE_) != 0) {
        return;
    }
    auto ed = new ::com::tibbo::aggregate::common::context::EventDefinition(E_TRACE_, EFT_TRACE_, Cres::get())->getString(u"trace"_j));
    ed)->setGroup(traceEventGroup);
    target)->addEventDefinition(ed);
}

void com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::trace(void* value, const std::string & message)
{
    install();
    auto target = getContext();
    target)->fireEvent(E_TRACE_, new voidArray({value != 0 ? value)->toString()) : 0), message)}));
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::getContext()
{
    return context;
}



java::lang::Class* com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.util.ContextExpressionTracer", 66);
    return c;
}

void com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::clinit()
{
struct string_init_ {
    string_init_() {
    E_TRACE_ = u"trace"_j;
    EF_TRACE_VALUE_ = u"value"_j;
    EF_TRACE_MESSAGE_ = u"message"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EFT_TRACE_ = new TableFormat(int(1), int(1));
        {
            EFT_TRACE_)->addField(std::stringBuilder().append(u"<"_j)->append(EF_TRACE_VALUE_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"value"_j))
                ->append(u">"_j)->toString());
            EFT_TRACE_)->addField(std::stringBuilder().append(u"<"_j)->append(EF_TRACE_MESSAGE_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"message"_j))
                ->append(u">"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::expression::util::ContextExpressionTracer::getClass0()
{
    return class_();
}

