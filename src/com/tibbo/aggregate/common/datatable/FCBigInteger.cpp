// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/FCBigInteger.java
#include "datatable/FCBigInteger.h"

#include "datatable/FieldFormat.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/math/BigInteger.h"

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

DateFCBigInteger::FCBigInteger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

DateFCBigInteger::FCBigInteger() 
    : FCBigInteger(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void DateFCBigInteger::ctor()
{
    super::ctor(::java::math::BigInteger::class_());
}

DateFieldFormat* DateFCBigInteger::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::STRING_FIELD);
}

java::math::BigInteger* DateFCBigInteger::simpleToBean(void* value)
{
    return new ::java::math::BigInteger((java_cast< const std::string & >(value)));
}

void* DateFCBigInteger::convertToTable(long value, TableFormat* format)
{
    return value)->toString();
}

void* DateFCBigInteger::convertToTable(void* value, TableFormat* format)
{ 
    return convertToTable(dynamic_cast< ::java::math::BigInteger* >(value), format);
}



java::lang::Class* DateFCBigInteger::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.FCBigInteger", 49);
    return c;
}

void* DateFCBigInteger::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* DateFCBigInteger::getClass0()
{
    return class_();
}

