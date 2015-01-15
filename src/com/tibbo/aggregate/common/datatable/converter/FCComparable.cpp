// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCComparable.java
#include <com/tibbo/aggregate/common/datatable/converter/FCComparable.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Float.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/NumberFormatException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/text/DateFormat.h"
//#include <java/text/ParseException.h"
//#include <java/util/Date.h"

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

com::tibbo::aggregate::common::datatable::converter::FCComparable::FCComparable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::FCComparable::FCComparable() 
    : FCComparable(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::converter::FCComparable::ctor()
{
    super::ctor(::java::lang::Comparable::class_());
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::FCComparable::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::FLOAT_FIELD);
}

java::lang::Comparable* com::tibbo::aggregate::common::datatable::converter::FCComparable::simpleToBean(void* value)
{
    auto s = java_cast< const std::string & >(value);
    auto result = java_cast< ::java::lang::Comparable* >(value);
    try {
        result = ::java::lang::Integer::parseInt(s));
        result = ::java::lang::Float::valueOf(::java::lang::Float::parseFloat(s));
        result = ::java::text::DateFormat::getDateInstance())->parse(s);
    } catch (::java::lang::NumberFormatException* e) {
        return result;
    } catch (::java::text::ParseException* e) {
        return result;
    }
    return result;
}

void* com::tibbo::aggregate::common::datatable::converter::FCComparable::convertToTable(::java::lang::Comparable* value, TableFormat* format)
{
    return value != 0 ? value)->toString()) : value);
}

void* com::tibbo::aggregate::common::datatable::converter::FCComparable::convertToTable(void* value, TableFormat* format)
{ 
    return convertToTable(dynamic_cast< ::java::lang::Comparable* >(value), format);
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCComparable::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.FCComparable", 59);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::FCComparable::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::FCComparable::getClass0()
{
    return class_();
}

