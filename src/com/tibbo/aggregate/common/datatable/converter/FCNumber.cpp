// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCNumber.java
#include <com/tibbo/aggregate/common/datatable/converter/FCNumber.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Float.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"

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

com::tibbo::aggregate::common::datatable::converter::FCNumber::FCNumber(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::FCNumber::FCNumber() 
    : FCNumber(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::converter::FCNumber::ctor()
{
    super::ctor(::java::lang::Number::class_());
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::FCNumber::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::FLOAT_FIELD);
}

java::lang::Number* com::tibbo::aggregate::common::datatable::converter::FCNumber::simpleToBean(void* value)
{
    return java_cast< ::java::lang::Number* >(value);
}

void* com::tibbo::aggregate::common::datatable::converter::FCNumber::convertToTable(::java::lang::Number* value, TableFormat* format)
{
    if(value == 0) {
        return ::java::lang::Float::valueOf(0.0f);
    }
    return ::java::lang::Float::valueOf(value)->floatValue());
}

void* com::tibbo::aggregate::common::datatable::converter::FCNumber::convertToTable(void* value, TableFormat* format)
{ 
    return convertToTable(dynamic_cast< ::java::lang::Number* >(value), format);
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCNumber::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCNumber", 55);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::FCNumber::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCNumber::getClass0()
{
    return class_();
}

