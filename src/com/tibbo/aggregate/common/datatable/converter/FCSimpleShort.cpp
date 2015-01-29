// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleShort.java
#include "datatable/converter/FCSimpleShort.h"

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

Dateconverter::FCSimpleShort::FCSimpleShort(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateconverter::FCSimpleShort::FCSimpleShort() 
    : FCSimpleShort(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void Dateconverter::FCSimpleShort::ctor()
{
    super::ctor(::java::lang::Short::TYPE());
}

DateFieldFormat* Dateconverter::FCSimpleShort::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::INTEGER_FIELD);
}

void* Dateconverter::FCSimpleShort::simpleToBean(void* value)
{
    return ::java::lang::Short::valueOf((java_cast< int  >(value)))->shortValue());
}

void* Dateconverter::FCSimpleShort::convertToTable(void* value, TableFormat* format)
{
    return new ::java::lang::Integer((java_cast< ::java::lang::Short* >(value)))->shortValue());
}



java::lang::Class* Dateconverter::FCSimpleShort::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCSimpleShort", 60);
    return c;
}

void* Dateconverter::FCSimpleShort::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* Dateconverter::FCSimpleShort::getClass0()
{
    return class_();
}

