// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/Choice.java
//#include <com/tibbo/aggregate/common/datatable/converter/Choice.h"

//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Locale.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

Dateconverter::Choice::Choice(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateconverter::Choice::Choice(const std::string & description, void* object) 
    : Choice(*static_cast< ::default_init_tag* >(0))
{
    ctor(description,object);
}

Dateconverter::Choice::Choice(const std::string & name, const std::string & description, void* object) 
    : Choice(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,description,object);
}

std::string& Dateconverter::Choice::WHITESPACE_PATTERN()
{
    
    return WHITESPACE_PATTERN_;
}
std::string Dateconverter::Choice::WHITESPACE_PATTERN_;

void Dateconverter::Choice::ctor(const std::string & description, void* object)
{
    super::ctor();
    this->name = description)->toLowerCase(::java::util::Locale::ENGLISH()))->replaceAll(WHITESPACE_PATTERN_, u""_j);
    this->description = description;
    this->object = object;
}

void Dateconverter::Choice::ctor(const std::string & name, const std::string & description, void* object)
{
    super::ctor();
    this->name = name;
    this->description = description;
    this->object = object;
}

std::string Dateconverter::Choice::getName()
{
    return name;
}

std::string Dateconverter::Choice::getDescription()
{
    return description;
}

void* Dateconverter::Choice::getObject()
{
    return object;
}



java::lang::Class* Dateconverter::Choice::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.Choice", 53);
    return c;
}

void Dateconverter::Choice::clinit()
{
struct string_init_ {
    string_init_() {
    WHITESPACE_PATTERN_ = u"\\W"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

java::lang::Class* Dateconverter::Choice::getClass0()
{
    return class_();
}

