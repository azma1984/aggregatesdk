// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/FloatFieldFormat.java
#include <com/tibbo/aggregate/common/datatable/field/FloatFieldFormat.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/Class.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Float.h"
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

com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::FloatFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::FloatFieldFormat(const std::string & name) 
    : FloatFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
}

char16_t com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::getType()
{
    return FieldFormat::FLOAT_FIELD;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::getFieldClass()
{
    return ::java::lang::Float::TYPE();
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::getFieldWrappedClass()
{
    return ::java::lang::Float::class_();
}

java::lang::Float* com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::getNotNullDefault()
{
    return new ::java::lang::Float(static_cast< float >(int(0)));
}

void* com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::convertValue(void* value) /* throws(ValidationException) */
{
    if(value != 0 && !(dynamic_cast< ::java::lang::Float* >(value) != 0)) {
        value = ::java::lang::Float::valueOf(util::Util::convertToNumber(value, true, false))->floatValue());
    }
    return value;
}

java::lang::Float* com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
{
    if(value)->length() == 0) {
        return ::java::lang::Float::valueOf(0.0f);
    }
    try {
        return new ::java::lang::Float(value);
    } catch (::java::lang::NumberFormatException* ex) {
        return ::java::lang::Float::valueOf(util::Util::convertToNumber(value, false, false))->floatValue());
    }
}

std::string com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::valueToString(::java::lang::Float* value, encoding::ClassicEncodingSettings* settings)
{
    return value == 0 ? static_cast< const std::string & >(0) : value)->toString();
}

std::string com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< ::java::lang::Float* >(value), settings);
}

java::util::List* com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::getSuitableEditors()
{
    return ::java::util::Arrays::asList(new std::stringArray({
        EDITOR_LIST()
        , EDITOR_BAR()
        , EDITOR_BYTES()
    }));
}



java::lang::Class* com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.FloatFieldFormat", 59);
    return c;
}

void* com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::FloatFieldFormat::getClass0()
{
    return class_();
}

