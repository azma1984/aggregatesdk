// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/FireEventFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/FireEventFunction.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextException.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableConstruction.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/event/EventLevel.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/Arrays.h"
//#include <java/util/List.h"
//#include <java/util/ResourceBundle.h"
#include <ObjectArray.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::context::FireEventFunction::FireEventFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::context::FireEventFunction::FireEventFunction() 
    : FireEventFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::context::FireEventFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_CONTEXT_RELATED(), u"String context, String event, Integer level, Object parameter1, Object parameter2, ..."_j, u"Long"_j);
}

void* com::tibbo::aggregate::common::expression::function::context::FireEventFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(4, true, parameters);
    auto con = java_cast< ::com::tibbo::aggregate::common::context::Context* >(evaluator)->getDefaultResolver())->getContextManager())->get((*parameters)[int(0)])->toString(), evaluator)->getDefaultResolver())->getCallerController()));
    if(con == 0) {
        throw new ::com::tibbo::aggregate::common::expression::EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"conNotAvail"_j))->append((*parameters)[int(0)])->toString())->toString());
    }
    try {
        auto name = (*parameters)[int(1)])->toString();
        auto ed = con)->getEventDefinition(name);
        if(ed == 0) {
            throw new ::com::tibbo::aggregate::common::context::ContextException(::java::text::MessageFormat::format(Cres::get())->getString(u"conEvtNotAvailExt"_j), new voidArray({name), con)->getPath())})));
        }
        auto level = ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(2)], true, true);
        if(level != 0 && !EventLevel::isValid(level)->intValue())) {
            throw new ::com::tibbo::aggregate::common::expression::EvaluationException(std::stringBuilder().append(u"Invalid event level: "_j)->append(level))->toString());
        }
        auto input = ::java::util::Arrays::asList(java_cast< voidArray* >(::java::util::Arrays::copyOfRange(static_cast< voidArray* >(parameters), int(3), parameters)->length)));
        auto data = (input)->size() == 1 && (dynamic_cast< DataTable* >(java_cast< void* >(input)->get(0))) != 0)) ? java_cast< DataTable* >(java_cast< void* >(input)->get(0))) : DataTableConstruction::constructTable(input, ed != 0 ? ed)->getFormat() : static_cast< TableFormat* >(0), evaluator, 0);
        auto ev = con)->fireEvent(ed)->getName(), level != 0 ? level)->intValue() : ed)->getLevel(), evaluator)->getDefaultResolver())->getCallerController(), data);
        return ev != 0 ? ev)->getId() : static_cast< ::java::lang::Long* >(0);
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::expression::EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::context::FireEventFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.FireEventFunction", 72);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::context::FireEventFunction::getClass0()
{
    return class_();
}

