// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCDouble.java
#include <com/tibbo/aggregate/common/datatable/converter/FCDouble.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Double.h"
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

com::tibbo::aggregate::common::datatable::converter::FCDouble::FCDouble(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::FCDouble::FCDouble() 
    : FCDouble(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::converter::FCDouble::ctor()
{
    super::ctor(::java::lang::Double::class_());
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::FCDouble::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::DOUBLE_FIELD);
}

java::lang::Double* com::tibbo::aggregate::common::datatable::converter::FCDouble::simpleToBean(void* value)
{
    return ::java::lang::Double::valueOf((java_cast< ::java::lang::Number* >(value)))->doubleValue());
}

void* com::tibbo::aggregate::common::datatable::converter::FCDouble::convertToTable(::java::lang::Double* value, TableFormat* format)
{
    return value;
}

void* com::tibbo::aggregate::common::datatable::converter::FCDouble::convertToTable(void* value, TableFormat* format)
{ 
    return convertToTable(dynamic_cast< ::java::lang::Double* >(value), format);
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCDouble::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCDouble", 55);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::FCDouble::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCDouble::getClass0()
{
    return class_();
}

