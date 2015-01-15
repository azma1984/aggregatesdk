// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/DoubleFieldFormat.java
#include <com/tibbo/aggregate/common/datatable/field/DoubleFieldFormat.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/Class.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Double.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/NumberFormatException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Arrays.h"
//#include <java/util/List.h"
#include <SubArray.h"
#include <ObjectArray.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< std::string, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::DoubleFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::DoubleFieldFormat(const std::string & name) 
    : DoubleFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
}

char16_t com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::getType()
{
    return FieldFormat::DOUBLE_FIELD;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::getFieldClass()
{
    return ::java::lang::Double::TYPE();
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::getFieldWrappedClass()
{
    return ::java::lang::Double::class_();
}

java::lang::Double* com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::getNotNullDefault()
{
    return new ::java::lang::Double(static_cast< double >(int(0)));
}

void* com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::convertValue(void* value) /* throws(ValidationException) */
{
    if(value != 0 && !(dynamic_cast< ::java::lang::Double* >(value) != 0)) {
        value = ::java::lang::Double::valueOf(util::Util::convertToNumber(value, true, false))->doubleValue());
    }
    return value;
}

java::lang::Double* com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
{
    if(value)->length() == 0) {
        return ::java::lang::Double::valueOf(0.0);
    }
    try {
        return new ::java::lang::Double(value);
    } catch (::java::lang::NumberFormatException* ex) {
        return ::java::lang::Double::valueOf(util::Util::convertToNumber(value, false, false))->doubleValue());
    }
}

std::string com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::valueToString(::java::lang::Double* value, encoding::ClassicEncodingSettings* settings)
{
    return value == 0 ? static_cast< const std::string & >(0) : value)->toString();
}

std::string com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< ::java::lang::Double* >(value), settings);
}

java::util::List* com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::getSuitableEditors()
{
    return ::java::util::Arrays::asList(new std::stringArray({EDITOR_LIST()}));
}



java::lang::Class* com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.DoubleFieldFormat", 60);
    return c;
}

void* com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::DoubleFieldFormat::getClass0()
{
    return class_();
}

