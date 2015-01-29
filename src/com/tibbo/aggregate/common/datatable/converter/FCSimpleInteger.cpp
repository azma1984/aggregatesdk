// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleInteger.java
#include "datatable/converter/FCSimpleInteger.h"

#include "datatable/FieldFormat.h"
//#include <java/lang/Class.h"
//#include <java/lang/Integer.h"
//#include <java/lang/Object.h"

Dateconverter::FCSimpleInteger::FCSimpleInteger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateconverter::FCSimpleInteger::FCSimpleInteger() 
    : FCSimpleInteger(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void Dateconverter::FCSimpleInteger::ctor()
{
    super::ctor(::java::lang::Integer::TYPE());
}

DateFieldFormat* Dateconverter::FCSimpleInteger::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::INTEGER_FIELD);
}

void* Dateconverter::FCSimpleInteger::simpleToBean(void* value)
{
    return value;
}

void* Dateconverter::FCSimpleInteger::convertToTable(void* value, TableFormat* format)
{
    return value;
}



java::lang::Class* Dateconverter::FCSimpleInteger::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCSimpleInteger", 62);
    return c;
}

void* Dateconverter::FCSimpleInteger::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* Dateconverter::FCSimpleInteger::getClass0()
{
    return class_();
}

