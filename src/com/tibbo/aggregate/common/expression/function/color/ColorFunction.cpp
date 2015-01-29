// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/color/ColorFunction.java
#include "expression/function/color/ColorFunction.h"

#include "expression/EvaluationException.h"
#include "expression/function/Functions.h"
#include "util/Util.h"
//#include <java/awt/Color.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::color::ColorFunction::ColorFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::color::ColorFunction::ColorFunction() 
    : ColorFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::color::ColorFunction::ctor()
{
    super::ctor(function::Functions::GROUP_COLOR_PROCESSING(), u"Integer red, Integer green, Integer blue"_j, u"Color"_j);
}

void* function::color::ColorFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    if(parameters)->length != 3) {
        throw new EvaluationException(std::stringBuilder().append(u"Invalid parameter count, need 3 but found "_j)->append(parameters)->length)->toString());
    }
    auto r = ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(0)], true, false);
    auto g = ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(1)], true, false);
    auto b = ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(2)], true, false);
    return new ::java::awt::Color(r)->intValue(), g)->intValue(), b)->intValue());
}



java::lang::Class* function::color::ColorFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.color.ColorFunction", 66);
    return c;
}

java::lang::Class* function::color::ColorFunction::getClass0()
{
    return class_();
}

