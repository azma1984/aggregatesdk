// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCShort.java
#include "datatable/converter/FCShort.h"

#include "datatable/FieldFormat.h"
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

Dateconverter::FCShort::FCShort(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateconverter::FCShort::FCShort() 
    : FCShort(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void Dateconverter::FCShort::ctor()
{
    super::ctor(::java::lang::Short::class_());
}

DateFieldFormat* Dateconverter::FCShort::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::INTEGER_FIELD);
}

java::lang::Short* Dateconverter::FCShort::simpleToBean(void* value)
{
    return ::java::lang::Short::valueOf((java_cast< int  >(value)))->shortValue());
}

void* Dateconverter::FCShort::convertToTable(::java::lang::Short* value, TableFormat* format)
{
    return new ::java::lang::Integer((value))->shortValue());
}

void* Dateconverter::FCShort::convertToTable(void* value, TableFormat* format)
{ 
    return convertToTable(dynamic_cast< ::java::lang::Short* >(value), format);
}



java::lang::Class* Dateconverter::FCShort::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCShort", 54);
    return c;
}

void* Dateconverter::FCShort::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* Dateconverter::FCShort::getClass0()
{
    return class_();
}

