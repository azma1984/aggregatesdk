// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleFloat.java
#include "datatable/converter/FCSimpleFloat.h"

#include "datatable/FieldFormat.h"
//#include <java/lang/Class.h"
//#include <java/lang/Float.h"
//#include <java/lang/Object.h"

Dateconverter::FCSimpleFloat::FCSimpleFloat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateconverter::FCSimpleFloat::FCSimpleFloat() 
    : FCSimpleFloat(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void Dateconverter::FCSimpleFloat::ctor()
{
    super::ctor(::java::lang::Float::TYPE());
}

DateFieldFormat* Dateconverter::FCSimpleFloat::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::FLOAT_FIELD);
}

void* Dateconverter::FCSimpleFloat::simpleToBean(void* value)
{
    return value;
}

void* Dateconverter::FCSimpleFloat::convertToTable(void* value, TableFormat* format)
{
    return value;
}



java::lang::Class* Dateconverter::FCSimpleFloat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCSimpleFloat", 60);
    return c;
}

void* Dateconverter::FCSimpleFloat::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* Dateconverter::FCSimpleFloat::getClass0()
{
    return class_();
}

