// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/FCBigDecimal.java
#include "datatable/FCBigDecimal.h"

#include "datatable/FieldFormat.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Double.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/math/BigDecimal.h"

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

DateFCBigDecimal::FCBigDecimal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

DateFCBigDecimal::FCBigDecimal() 
    : FCBigDecimal(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void DateFCBigDecimal::ctor()
{
    super::ctor(::java::math::BigDecimal::class_());
}

DateFieldFormat* DateFCBigDecimal::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::DOUBLE_FIELD);
}

java::math::BigDecimal* DateFCBigDecimal::simpleToBean(void* value)
{
    return new ::java::math::BigDecimal((java_cast< ::java::lang::Double* >(value)))->doubleValue());
}

void* DateFCBigDecimal::convertToTable(::java::math::BigDecimal* value, TableFormat* format)
{
    return value;
}

void* DateFCBigDecimal::convertToTable(void* value, TableFormat* format)
{ 
    return convertToTable(dynamic_cast< ::java::math::BigDecimal* >(value), format);
}



java::lang::Class* DateFCBigDecimal::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.FCBigDecimal", 49);
    return c;
}

void* DateFCBigDecimal::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* DateFCBigDecimal::getClass0()
{
    return class_();
}

