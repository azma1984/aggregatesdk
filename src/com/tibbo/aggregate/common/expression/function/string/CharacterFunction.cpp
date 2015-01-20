// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/string/CharacterFunction.java
#include <com/tibbo/aggregate/common/expression/function/string/CharacterFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/Character.h"
//#include <java/lang/Class.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::string::CharacterFunction::CharacterFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::string::CharacterFunction::CharacterFunction(const std::string & method) 
    : CharacterFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(method);
}

void function::string::CharacterFunction::ctor(const std::string & method)
{
    super::ctor(::java::lang::Character::class_())->getName(), method, true, function::Functions::GROUP_STRING_PROCESSING(), u"String character"_j, u"Boolean"_j);
}

void* function::string::CharacterFunction::convertParameter(int i, void* value)
{
    if(value != 0 && dynamic_cast< const std::string & >(value) != 0) {
        return ::java::lang::Character::valueOf(value)->toString())->charAt(int(0)));
    }
    return super::convertParameter(i, value);
}



java::lang::Class* function::string::CharacterFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.string.CharacterFunction", 71);
    return c;
}

java::lang::Class* function::string::CharacterFunction::getClass0()
{
    return class_();
}

