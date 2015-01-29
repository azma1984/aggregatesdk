// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleByte.java
#include "datatable/converter/FCSimpleByte.h"

#include "datatable/FieldFormat.h"
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

Dateconverter::FCSimpleByte::FCSimpleByte(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateconverter::FCSimpleByte::FCSimpleByte() 
    : FCSimpleByte(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void Dateconverter::FCSimpleByte::ctor()
{
    super::ctor(::java::lang::Byte::TYPE());
}

DateFieldFormat* Dateconverter::FCSimpleByte::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::INTEGER_FIELD);
}

void* Dateconverter::FCSimpleByte::simpleToBean(void* value)
{
    return ::java::lang::Byte::valueOf((java_cast< int  >(value)))->byteValue());
}

void* Dateconverter::FCSimpleByte::convertToTable(void* value, TableFormat* format)
{
    return new ::java::lang::Byte(value)->toString());
}



java::lang::Class* Dateconverter::FCSimpleByte::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCSimpleByte", 59);
    return c;
}

void* Dateconverter::FCSimpleByte::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* Dateconverter::FCSimpleByte::getClass0()
{
    return class_();
}

