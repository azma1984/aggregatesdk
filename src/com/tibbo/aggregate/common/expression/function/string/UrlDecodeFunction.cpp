// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/string/UrlDecodeFunction.java
#include <com/tibbo/aggregate/common/expression/function/string/UrlDecodeFunction.h"

#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/io/UnsupportedEncodingException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/net/URLDecoder.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::string::UrlDecodeFunction::UrlDecodeFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::string::UrlDecodeFunction::UrlDecodeFunction() 
    : UrlDecodeFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::string::UrlDecodeFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string, String encoding"_j, u"String"_j);
}

void* com::tibbo::aggregate::common::expression::function::string::UrlDecodeFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    auto source = (*parameters)[int(0)])->toString();
    auto encoding = (*parameters)[int(1)])->toString();
    try {
        return ::java::net::URLDecoder::decode(source, encoding);
    } catch (::java::io::UnsupportedEncodingException* ex) {
        throw new ::com::tibbo::aggregate::common::expression::EvaluationException(ex)->getMessage(), ex);
    }
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::string::UrlDecodeFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.string.UrlDecodeFunction", 71);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::string::UrlDecodeFunction::getClass0()
{
    return class_();
}

