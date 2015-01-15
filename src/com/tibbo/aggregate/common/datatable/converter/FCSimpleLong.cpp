// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleLong.java
#//include <com/tibbo/aggregate/common/datatable/converter/FCSimpleLong.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/Long.h"
//#include <java/lang/Object.h"
*/
com::tibbo::aggregate::common::datatable::converter::FCSimpleLong::FCSimpleLong(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::FCSimpleLong::FCSimpleLong() 
    : FCSimpleLong(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::converter::FCSimpleLong::ctor()
{
    super::ctor(::java::lang::Long::TYPE());
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::FCSimpleLong::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::LONG_FIELD);
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleLong::simpleToBean(void* value)
{
    return value;
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleLong::convertToTable(void* value, TableFormat* format)
{
    return value;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCSimpleLong::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCSimpleLong", 59);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleLong::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCSimpleLong::getClass0()
{
    return class_();
}

