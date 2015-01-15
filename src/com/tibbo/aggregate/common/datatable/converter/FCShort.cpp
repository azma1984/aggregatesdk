// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCShort.java
#include <com/tibbo/aggregate/common/datatable/converter/FCShort.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/Short.h"

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

com::tibbo::aggregate::common::datatable::converter::FCShort::FCShort(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::FCShort::FCShort() 
    : FCShort(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::converter::FCShort::ctor()
{
    super::ctor(::java::lang::Short::class_());
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::FCShort::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::INTEGER_FIELD);
}

java::lang::Short* com::tibbo::aggregate::common::datatable::converter::FCShort::simpleToBean(void* value)
{
    return ::java::lang::Short::valueOf((java_cast< int  >(value)))->shortValue());
}

void* com::tibbo::aggregate::common::datatable::converter::FCShort::convertToTable(::java::lang::Short* value, TableFormat* format)
{
    return new ::java::lang::Integer((value))->shortValue());
}

void* com::tibbo::aggregate::common::datatable::converter::FCShort::convertToTable(void* value, TableFormat* format)
{ 
    return convertToTable(dynamic_cast< ::java::lang::Short* >(value), format);
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCShort::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCShort", 54);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::FCShort::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCShort::getClass0()
{
    return class_();
}

