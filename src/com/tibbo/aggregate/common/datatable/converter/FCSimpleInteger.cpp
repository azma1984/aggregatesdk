// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleInteger.java
#include <com/tibbo/aggregate/common/datatable/converter/FCSimpleInteger.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/lang/Class.h"
//#include <java/lang/Integer.h"
//#include <java/lang/Object.h"

com::tibbo::aggregate::common::datatable::converter::FCSimpleInteger::FCSimpleInteger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::FCSimpleInteger::FCSimpleInteger() 
    : FCSimpleInteger(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::converter::FCSimpleInteger::ctor()
{
    super::ctor(::java::lang::Integer::TYPE());
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::FCSimpleInteger::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::INTEGER_FIELD);
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleInteger::simpleToBean(void* value)
{
    return value;
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleInteger::convertToTable(void* value, TableFormat* format)
{
    return value;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCSimpleInteger::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCSimpleInteger", 62);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::FCSimpleInteger::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCSimpleInteger::getClass0()
{
    return class_();
}

