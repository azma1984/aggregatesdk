// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/DateFieldFormat.java
#include <com/tibbo/aggregate/common/datatable/field/DateFieldFormat.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/util/DateUtils.h"
#include <com/tibbo/aggregate/common/util/Util.h"
/*
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/Class.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/text/SimpleDateFormat.h"
//#include <java/util/Arrays.h"
//#include <java/util/Date.h"
//#include <java/util/GregorianCalendar.h"
//#include <java/util/List.h"
//#include <org/apache/log4j/Logger.h"
#include <SubArray.h"
#include <ObjectArray.h"
*/
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

extern void lock(void *);
extern void unlock(void *);

namespace
{
    struct synchronized
    {
        synchronized(void *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        void *o;
    };
}
Datefield::DateFieldFormat::DateFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Datefield::DateFieldFormat::DateFieldFormat(const std::string & name) 
    : DateFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void Datefield::DateFieldFormat::init()
{
    dateFormatter = ::com::tibbo::aggregate::common::util::DateUtils::createDateFormatter();
}

std::string& Datefield::DateFieldFormat::EDITOR_TIME()
{
    
    return EDITOR_TIME_;
}
std::string Datefield::DateFieldFormat::EDITOR_TIME_;

std::string& Datefield::DateFieldFormat::EDITOR_DATE()
{
    
    return EDITOR_DATE_;
}
std::string Datefield::DateFieldFormat::EDITOR_DATE_;

Date*& Datefield::DateFieldFormat::DEFAULT_DATE()
{
    
    return DEFAULT_DATE_;
}
Date* Datefield::DateFieldFormat::DEFAULT_DATE_;

void Datefield::DateFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
    init();
}

char16_t Datefield::DateFieldFormat::getType()
{
    return FieldFormat::DATE_FIELD;
}

java::lang::Class* Datefield::DateFieldFormat::getFieldClass()
{
    return Date::class_();
}

java::lang::Class* Datefield::DateFieldFormat::getFieldWrappedClass()
{
    return Date::class_();
}

Date* Datefield::DateFieldFormat::getNotNullDefault()
{
    return DEFAULT_DATE_;
}

Date* Datefield::DateFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
{
    try {
        {
            synchronized synchronized_0(dateFormatter);
            {
                return dateFormatter)->parse(value);
            }
        }
    } catch (::java::lang::Exception* ex) {
        try {
            return new Date(util::Util::convertToNumber(value, true, true))->longValue());
        } catch (::java::lang::Exception* ex1) {
            std::cout <<"Error parsing date from string '"_j)->append(value)
                ->append(u"': "_j)
                ->append(ex)->getMessage())->toString(), ex);
        }
    }
}

std::string Datefield::DateFieldFormat::valueToString(Date* value, encoding::ClassicEncodingSettings* settings)
{
    try {
        {
            synchronized synchronized_1(dateFormatter);
            {
                return value == 0 ? static_cast< const std::string & >(0) : dateFormatter)->format(value);
            }
        }
    } catch (::java::lang::Exception* ex) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Error converting date "_j)->append(value))
            ->append(u" to string: "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

std::string Datefield::DateFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< Date* >(value), settings);
}

std::list  Datefield::DateFieldFormat::getSuitableEditors()
{
    return ::java::util::Arrays::asList(new std::stringArray({
        EDITOR_LIST()
        , EDITOR_DATE_
        , EDITOR_TIME_
    }));
}



java::lang::Class* Datefield::DateFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.DateFieldFormat", 58);
    return c;
}

void Datefield::DateFieldFormat::clinit()
{
struct string_init_ {
    string_init_() {
    EDITOR_TIME_ = u"time"_j;
    EDITOR_DATE_ = u"date"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            try {
                auto gc = new ::java::util::GregorianCalendar(::com::tibbo::aggregate::common::util::DateUtils::UTC_TIME_ZONE());
                gc)->clear();
                gc)->set(2000, 1, 1, 12, 0, 0);
                DEFAULT_DATE_ = gc)->getTime();
            } catch (::java::lang::Exception* ex) {
                Log::DATATABLE())->error(u"Error initializing default date"_j, ex);
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

void* Datefield::DateFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string Datefield::DateFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* Datefield::DateFieldFormat::getClass0()
{
    return class_();
}

