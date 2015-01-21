// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleLong.java
#//include <com/tibbo/aggregate/common/datatable/converter/FCSimpleLong.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/Long.h"
//#include <java/lang/Object.h"
*/
Dateconverter::FCSimpleLong::FCSimpleLong(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateconverter::FCSimpleLong::FCSimpleLong() 
    : FCSimpleLong(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void Dateconverter::FCSimpleLong::ctor()
{
    super::ctor(::java::lang::Long::TYPE());
}

DateFieldFormat* Dateconverter::FCSimpleLong::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::LONG_FIELD);
}

void* Dateconverter::FCSimpleLong::simpleToBean(void* value)
{
    return value;
}

void* Dateconverter::FCSimpleLong::convertToTable(void* value, TableFormat* format)
{
    return value;
}



java::lang::Class* Dateconverter::FCSimpleLong::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCSimpleLong", 59);
    return c;
}

void* Dateconverter::FCSimpleLong::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* Dateconverter::FCSimpleLong::getClass0()
{
    return class_();
}

