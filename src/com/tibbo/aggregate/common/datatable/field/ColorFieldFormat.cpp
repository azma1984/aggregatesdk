// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/ColorFieldFormat.java
//#include <com/tibbo/aggregate/common/datatable/field/ColorFieldFormat.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/util/StringUtils.h"
//#include <java/awt/Color.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/Class.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
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

Datefield::ColorFieldFormat::ColorFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Datefield::ColorFieldFormat::ColorFieldFormat(const std::string & name) 
    : ColorFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

std::string& Datefield::ColorFieldFormat::EDITOR_BOX()
{
    
    return EDITOR_BOX_;
}
std::string Datefield::ColorFieldFormat::EDITOR_BOX_;

void Datefield::ColorFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
}

char16_t Datefield::ColorFieldFormat::getType()
{
    return FieldFormat::COLOR_FIELD;
}

java::lang::Class* Datefield::ColorFieldFormat::getFieldClass()
{
    return ::java::awt::Color::class_();
}

java::lang::Class* Datefield::ColorFieldFormat::getFieldWrappedClass()
{
    return ::java::awt::Color::class_();
}

java::awt::Color* Datefield::ColorFieldFormat::getNotNullDefault()
{
    return ::java::awt::Color::BLACK();
}

java::awt::Color* Datefield::ColorFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
{
    if(value)->startsWith(u"#"_j)) {
        auto red = ::java::lang::Integer::parseInt(value)->substring(1, 3), 16);
        auto green = ::java::lang::Integer::parseInt(value)->substring(3, 5), 16);
        auto blue = ::java::lang::Integer::parseInt(value)->substring(5, 7), 16);
        auto alpha = value)->length() >= 9 ? ::java::lang::Integer::parseInt(value)->substring(7, 9), 16) : int(255);
        return new ::java::awt::Color(red, green, blue, alpha);
    } else {
        return new ::java::awt::Color((value)))->intValue());
    }
}

std::string Datefield::ColorFieldFormat::valueToString(::java::awt::Color* value, encoding::ClassicEncodingSettings* settings)
{
    return value == 0 ? static_cast< const std::string & >(0) : ::com::tibbo::aggregate::common::util::StringUtils::colorToString(value);
}

std::string Datefield::ColorFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< ::java::awt::Color* >(value), settings);
}

std::list  Datefield::ColorFieldFormat::getSuitableEditors()
{
    return ::java::util::Arrays::asList(new std::stringArray({
        EDITOR_LIST()
        , EDITOR_BOX_
    }));
}



java::lang::Class* Datefield::ColorFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.ColorFieldFormat", 59);
    return c;
}

void Datefield::ColorFieldFormat::clinit()
{
struct string_init_ {
    string_init_() {
    EDITOR_BOX_ = u"box"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

void* Datefield::ColorFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string Datefield::ColorFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* Datefield::ColorFieldFormat::getClass0()
{
    return class_();
}

