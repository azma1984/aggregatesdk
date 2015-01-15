// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/BooleanFieldFormat.java
#include <com/tibbo/aggregate/common/datatable/field/BooleanFieldFormat.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

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

com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::BooleanFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::BooleanFieldFormat(const std::string & name) 
    : BooleanFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
}

char16_t com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::getType()
{
    return FieldFormat::BOOLEAN_FIELD;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::getFieldClass()
{
    return ::java::lang::Boolean::TYPE();
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::getFieldWrappedClass()
{
    return ::java::lang::Boolean::class_();
}

java::lang::Boolean* com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::getNotNullDefault()
{
    return ::java::lang::Boolean::valueOf(false);
}

void* com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::convertValue(void* value) /* throws(ValidationException) */
{
    if(value != 0 && !(dynamic_cast< ::java::lang::Boolean* >(value) != 0)) {
        value = ::com::tibbo::aggregate::common::util::Util::convertToBoolean(value, true, false);
    }
    return value;
}

java::lang::Boolean* com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
{
    return (value)->equals(u"1"_j)) || value)->equalsIgnoreCase(u"true"_j)) ? ::java::lang::Boolean::valueOf(true) : ::java::lang::Boolean::valueOf(false);
}

std::string com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::valueToString(::java::lang::Boolean* value, encoding::ClassicEncodingSettings* settings)
{
    return value == 0 ? static_cast< const std::string & >(0) : ((java_cast< ::java::lang::Boolean* >(value))))->booleanValue() ? u"1"_j : u"0"_j;
}

std::string com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< ::java::lang::Boolean* >(value), settings);
}



java::lang::Class* com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.BooleanFieldFormat", 61);
    return c;
}

void* com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::BooleanFieldFormat::getClass0()
{
    return class_();
}

