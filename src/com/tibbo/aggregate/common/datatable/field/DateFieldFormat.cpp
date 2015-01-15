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
com::tibbo::aggregate::common::datatable::field::DateFieldFormat::DateFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::field::DateFieldFormat::DateFieldFormat(const std::string & name) 
    : DateFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void com::tibbo::aggregate::common::datatable::field::DateFieldFormat::init()
{
    dateFormatter = ::com::tibbo::aggregate::common::util::DateUtils::createDateFormatter();
}

std::string& com::tibbo::aggregate::common::datatable::field::DateFieldFormat::EDITOR_TIME()
{
    
    return EDITOR_TIME_;
}
std::string com::tibbo::aggregate::common::datatable::field::DateFieldFormat::EDITOR_TIME_;

std::string& com::tibbo::aggregate::common::datatable::field::DateFieldFormat::EDITOR_DATE()
{
    
    return EDITOR_DATE_;
}
std::string com::tibbo::aggregate::common::datatable::field::DateFieldFormat::EDITOR_DATE_;

java::util::Date*& com::tibbo::aggregate::common::datatable::field::DateFieldFormat::DEFAULT_DATE()
{
    
    return DEFAULT_DATE_;
}
java::util::Date* com::tibbo::aggregate::common::datatable::field::DateFieldFormat::DEFAULT_DATE_;

void com::tibbo::aggregate::common::datatable::field::DateFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
    init();
}

char16_t com::tibbo::aggregate::common::datatable::field::DateFieldFormat::getType()
{
    return FieldFormat::DATE_FIELD;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::DateFieldFormat::getFieldClass()
{
    return ::java::util::Date::class_();
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::DateFieldFormat::getFieldWrappedClass()
{
    return ::java::util::Date::class_();
}

java::util::Date* com::tibbo::aggregate::common::datatable::field::DateFieldFormat::getNotNullDefault()
{
    return DEFAULT_DATE_;
}

java::util::Date* com::tibbo::aggregate::common::datatable::field::DateFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
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
            return new ::java::util::Date(util::Util::convertToNumber(value, true, true))->longValue());
        } catch (::java::lang::Exception* ex1) {
            std::cout <<"Error parsing date from string '"_j)->append(value)
                ->append(u"': "_j)
                ->append(ex)->getMessage())->toString(), ex);
        }
    }
}

std::string com::tibbo::aggregate::common::datatable::field::DateFieldFormat::valueToString(::java::util::Date* value, encoding::ClassicEncodingSettings* settings)
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

std::string com::tibbo::aggregate::common::datatable::field::DateFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< ::java::util::Date* >(value), settings);
}

java::util::List* com::tibbo::aggregate::common::datatable::field::DateFieldFormat::getSuitableEditors()
{
    return ::java::util::Arrays::asList(new std::stringArray({
        EDITOR_LIST()
        , EDITOR_DATE_
        , EDITOR_TIME_
    }));
}



java::lang::Class* com::tibbo::aggregate::common::datatable::field::DateFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.DateFieldFormat", 58);
    return c;
}

void com::tibbo::aggregate::common::datatable::field::DateFieldFormat::clinit()
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

void* com::tibbo::aggregate::common::datatable::field::DateFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string com::tibbo::aggregate::common::datatable::field::DateFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::field::DateFieldFormat::getClass0()
{
    return class_();
}

