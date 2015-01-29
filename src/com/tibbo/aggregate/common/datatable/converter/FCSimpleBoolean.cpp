// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleBoolean.java
#include "datatable/converter/FCSimpleBoolean.h"

#include "datatable/FieldFormat.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
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

Dateconverter::FCSimpleBoolean::FCSimpleBoolean(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateconverter::FCSimpleBoolean::FCSimpleBoolean() 
    : FCSimpleBoolean(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void Dateconverter::FCSimpleBoolean::ctor()
{
    super::ctor(::java::lang::Boolean::TYPE());
}

DateFieldFormat* Dateconverter::FCSimpleBoolean::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::BOOLEAN_FIELD);
}

void* Dateconverter::FCSimpleBoolean::simpleToBean(void* value)
{
    return ::java::lang::Boolean::valueOf((java_cast< ::java::lang::Boolean* >(value)))->booleanValue());
}

void* Dateconverter::FCSimpleBoolean::convertToTable(void* value, TableFormat* format)
{
    return ::java::lang::Boolean::valueOf(value)->toString());
}



java::lang::Class* Dateconverter::FCSimpleBoolean::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCSimpleBoolean", 62);
    return c;
}

void* Dateconverter::FCSimpleBoolean::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* Dateconverter::FCSimpleBoolean::getClass0()
{
    return class_();
}

