// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/IntFieldFormat.java
#include "datatable/field/IntFieldFormat.h"

#include "datatable/FieldFormat.h"
#include "util/Util.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/Class.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Float.h"
//#include <java/lang/Integer.h"
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

Datefield::IntFieldFormat::IntFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Datefield::IntFieldFormat::IntFieldFormat(const std::string & name) 
    : IntFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

std::string& Datefield::IntFieldFormat::EDITOR_SPINNER()
{
    
    return EDITOR_SPINNER_;
}
std::string Datefield::IntFieldFormat::EDITOR_SPINNER_;

std::string& Datefield::IntFieldFormat::EDITOR_EVENT_LEVEL()
{
    
    return EDITOR_EVENT_LEVEL_;
}
std::string Datefield::IntFieldFormat::EDITOR_EVENT_LEVEL_;

void Datefield::IntFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
}

char16_t Datefield::IntFieldFormat::getType()
{
    return FieldFormat::INTEGER_FIELD;
}

java::lang::Class* Datefield::IntFieldFormat::getFieldClass()
{
    return ::java::lang::Integer::TYPE();
}

java::lang::Class* Datefield::IntFieldFormat::getFieldWrappedClass()
{
    return ::java::lang::Integer::class_();
}

java::lang::Integer* Datefield::IntFieldFormat::getNotNullDefault()
{
    return new ::java::lang::Integer(int(0));
}

void* Datefield::IntFieldFormat::convertValue(void* value) /* throws(ValidationException) */
{
    if(value != 0 && !(dynamic_cast< int  >(value) != 0)) {
        value = util::Util::convertToNumber(value, true, false))->intValue());
    }
    return value;
}

java::lang::Integer* Datefield::IntFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
{
    if(value)->length() == 0) {
        return int(0));
    }
    try {
        return new ::java::lang::Integer(value);
    } catch (::java::lang::NumberFormatException* ex) {
        return (new ::java::lang::Float(value))->intValue());
    }
}

std::string Datefield::IntFieldFormat::valueToString(int  value, encoding::ClassicEncodingSettings* settings)
{
    return value == 0 ? static_cast< const std::string & >(0) : value)->toString();
}

std::string Datefield::IntFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< int  >(value), settings);
}

std::list  Datefield::IntFieldFormat::getSuitableEditors()
{
    return ::java::util::Arrays::asList(new std::stringArray({
        EDITOR_LIST()
        , EDITOR_BAR()
        , EDITOR_BYTES()
        , EDITOR_SPINNER_
        , EDITOR_EVENT_LEVEL_
    }));
}



java::lang::Class* Datefield::IntFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.IntFieldFormat", 57);
    return c;
}

void Datefield::IntFieldFormat::clinit()
{
struct string_init_ {
    string_init_() {
    EDITOR_SPINNER_ = u"spinner"_j;
    EDITOR_EVENT_LEVEL_ = u"eventLevel"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

void* Datefield::IntFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string Datefield::IntFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* Datefield::IntFieldFormat::getClass0()
{
    return class_();
}

