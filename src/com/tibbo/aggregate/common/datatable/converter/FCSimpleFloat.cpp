// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleFloat.java
#include <com/tibbo/aggregate/common/datatable/converter/FCSimpleFloat.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/lang/Class.h"
//#include <java/lang/Float.h"
//#include <java/lang/Object.h"

com::tibbo::aggregate::common::datatable::converter::FCSimpleFloat::FCSimpleFloat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::FCSimpleFloat::FCSimpleFloat() 
    : FCSimpleFloat(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::converter::FCSimpleFloat::ctor()
{
    super::ctor(::java::lang::Float::TYPE());
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::FCSimpleFloat::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::FLOAT_FIELD);
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleFloat::simpleToBean(void* value)
{
    return value;
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleFloat::convertToTable(void* value, TableFormat* format)
{
    return value;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCSimpleFloat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCSimpleFloat", 60);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleFloat::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCSimpleFloat::getClass0()
{
    return class_();
}

