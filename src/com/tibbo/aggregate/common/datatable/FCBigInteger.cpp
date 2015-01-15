// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/FCBigInteger.java
#include <com/tibbo/aggregate/common/datatable/FCBigInteger.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
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

com::tibbo::aggregate::common::datatable::FCBigInteger::FCBigInteger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::FCBigInteger::FCBigInteger() 
    : FCBigInteger(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::FCBigInteger::ctor()
{
    super::ctor(::java::math::BigInteger::class_());
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::FCBigInteger::createFieldFormat(const std::string & name)
{
    return FieldFormat::create(name, FieldFormat::STRING_FIELD);
}

java::math::BigInteger* com::tibbo::aggregate::common::datatable::FCBigInteger::simpleToBean(void* value)
{
    return new ::java::math::BigInteger((java_cast< const std::string & >(value)));
}

void* com::tibbo::aggregate::common::datatable::FCBigInteger::convertToTable(::java::math::BigInteger* value, TableFormat* format)
{
    return value)->toString();
}

void* com::tibbo::aggregate::common::datatable::FCBigInteger::convertToTable(void* value, TableFormat* format)
{ 
    return convertToTable(dynamic_cast< ::java::math::BigInteger* >(value), format);
}



java::lang::Class* com::tibbo::aggregate::common::datatable::FCBigInteger::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.FCBigInteger", 49);
    return c;
}

void* com::tibbo::aggregate::common::datatable::FCBigInteger::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::FCBigInteger::getClass0()
{
    return class_();
}

