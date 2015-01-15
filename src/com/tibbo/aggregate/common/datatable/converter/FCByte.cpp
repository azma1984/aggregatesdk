// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCByte.java
#include <com/tibbo/aggregate/common/datatable/converter/FCByte.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/lang/Byte.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
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

com::tibbo::aggregate::common::datatable::converter::FCByte::FCByte(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::FCByte::FCByte() 
    : FCByte(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::converter::FCByte::ctor()
{
    super::ctor(::java::lang::Byte::class_());
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::FCByte::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::INTEGER_FIELD);
}

java::lang::Byte* com::tibbo::aggregate::common::datatable::converter::FCByte::simpleToBean(void* value)
{
    return ::java::lang::Byte::valueOf((java_cast< int  >(value)))->byteValue());
}

void* com::tibbo::aggregate::common::datatable::converter::FCByte::convertToTable(::java::lang::Byte* value, TableFormat* format)
{
    return new ::java::lang::Integer((value))->byteValue());
}

void* com::tibbo::aggregate::common::datatable::converter::FCByte::convertToTable(void* value, TableFormat* format)
{ 
    return convertToTable(dynamic_cast< ::java::lang::Byte* >(value), format);
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCByte::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCByte", 53);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::FCByte::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCByte::getClass0()
{
    return class_();
}

