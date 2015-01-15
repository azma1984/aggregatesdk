// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleDouble.java
#include <com/tibbo/aggregate/common/datatable/converter/FCSimpleDouble.h"

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

com::tibbo::aggregate::common::datatable::converter::FCSimpleDouble::FCSimpleDouble(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::FCSimpleDouble::FCSimpleDouble() 
    : FCSimpleDouble(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::converter::FCSimpleDouble::ctor()
{
    super::ctor(::java::lang::Double::TYPE());
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::FCSimpleDouble::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::DOUBLE_FIELD);
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleDouble::simpleToBean(void* value)
{
    return ::java::lang::Double::valueOf((java_cast< ::java::lang::Number* >(value)))->doubleValue());
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleDouble::convertToTable(void* value, TableFormat* format)
{
    return value;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCSimpleDouble::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCSimpleDouble", 61);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleDouble::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCSimpleDouble::getClass0()
{
    return class_();
}

