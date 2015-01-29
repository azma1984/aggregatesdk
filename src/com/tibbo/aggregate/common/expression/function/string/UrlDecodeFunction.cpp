// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/string/UrlDecodeFunction.java
#include "expression/function/string/UrlDecodeFunction.h"

#include "expression/EvaluationException.h"
#include "expression/function/Functions.h"
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

function::string::UrlDecodeFunction::UrlDecodeFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::string::UrlDecodeFunction::UrlDecodeFunction() 
    : UrlDecodeFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::string::UrlDecodeFunction::ctor()
{
    super::ctor(function::Functions::GROUP_STRING_PROCESSING(), u"String string, String encoding"_j, u"String"_j);
}

void* function::string::UrlDecodeFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    auto source = (*parameters)[int(0)])->toString();
    auto encoding = (*parameters)[int(1)])->toString();
    try {
        return ::java::net::URLDecoder::decode(source, encoding);
    } catch (::java::io::UnsupportedEncodingException* ex) {
        throw new EvaluationException(ex)->getMessage(), ex);
    }
}



java::lang::Class* function::string::UrlDecodeFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.string.UrlDecodeFunction", 71);
    return c;
}

java::lang::Class* function::string::UrlDecodeFunction::getClass0()
{
    return class_();
}

