// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/LongFieldFormat.java
#include <com/tibbo/aggregate/common/datatable/field/LongFieldFormat.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/Class.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Float.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/NumberFormatException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
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

com::tibbo::aggregate::common::datatable::field::LongFieldFormat::LongFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::field::LongFieldFormat::LongFieldFormat(const std::string & name) 
    : LongFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

std::string& com::tibbo::aggregate::common::datatable::field::LongFieldFormat::EDITOR_PERIOD()
{
    
    return EDITOR_PERIOD_;
}
std::string com::tibbo::aggregate::common::datatable::field::LongFieldFormat::EDITOR_PERIOD_;

void com::tibbo::aggregate::common::datatable::field::LongFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
}

char16_t com::tibbo::aggregate::common::datatable::field::LongFieldFormat::getType()
{
    return FieldFormat::LONG_FIELD;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::LongFieldFormat::getFieldClass()
{
    return ::java::lang::Long::TYPE();
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::LongFieldFormat::getFieldWrappedClass()
{
    return ::java::lang::Long::class_();
}

java::lang::Long* com::tibbo::aggregate::common::datatable::field::LongFieldFormat::getNotNullDefault()
{
    return new ::java::lang::Long(static_cast< long >(int(0)));
}

void* com::tibbo::aggregate::common::datatable::field::LongFieldFormat::convertValue(void* value) /* throws(ValidationException) */
{
    if(value != 0 && !(dynamic_cast< ::java::lang::Long* >(value) != 0)) {
        value = ::java::lang::Long::valueOf(util::Util::convertToNumber(value, true, false))->longValue());
    }
    return value;
}

java::lang::Long* com::tibbo::aggregate::common::datatable::field::LongFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
{
    try {
        return new ::java::lang::Long(value);
    } catch (::java::lang::NumberFormatException* ex) {
        return ::java::lang::Long::valueOf((new ::java::lang::Float(value))->longValue());
    }
}

std::string com::tibbo::aggregate::common::datatable::field::LongFieldFormat::valueToString(::java::lang::Long* value, encoding::ClassicEncodingSettings* settings)
{
    return value == 0 ? static_cast< const std::string & >(0) : value)->toString();
}

std::string com::tibbo::aggregate::common::datatable::field::LongFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< ::java::lang::Long* >(value), settings);
}

java::util::List* com::tibbo::aggregate::common::datatable::field::LongFieldFormat::getSuitableEditors()
{
    return ::java::util::Arrays::asList(new std::stringArray({
        EDITOR_LIST()
        , EDITOR_PERIOD_
        , EDITOR_BAR()
        , EDITOR_BYTES()
    }));
}

std::string com::tibbo::aggregate::common::datatable::field::LongFieldFormat::encodePeriodEditorOptions(int minUnit, int maxUnit)
{
    
    return std::stringBuilder().append(std::string::valueOf(minUnit))->append(u" "_j)
        ->append(std::string::valueOf(maxUnit))->toString();
}



java::lang::Class* com::tibbo::aggregate::common::datatable::field::LongFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.LongFieldFormat", 58);
    return c;
}

void com::tibbo::aggregate::common::datatable::field::LongFieldFormat::clinit()
{
struct string_init_ {
    string_init_() {
    EDITOR_PERIOD_ = u"period"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

void* com::tibbo::aggregate::common::datatable::field::LongFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string com::tibbo::aggregate::common::datatable::field::LongFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::LongFieldFormat::getClass0()
{
    return class_();
}

