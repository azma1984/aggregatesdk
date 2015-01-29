// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/SimpleFormatConverter.java
#include "datatable/converter/SimpleFormatConverter.h"

#include "datatable/DataTable.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"

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

Dateconverter::SimpleFormatConverter::SimpleFormatConverter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateconverter::SimpleFormatConverter::SimpleFormatConverter(::java::lang::Class* valueClass) 
    : SimpleFormatConverter(*static_cast< ::default_init_tag* >(0))
{
    ctor(valueClass);
}

void Dateconverter::SimpleFormatConverter::ctor(::java::lang::Class* valueClass)
{
    super::ctor(valueClass);
}

void* Dateconverter::SimpleFormatConverter::convertToBean(void* value, void* originalValue)
{
    if(dynamic_cast< DataTable* >(value) != 0) {
        value = (java_cast< DataTable* >(value)))->get();
    }
    return java_cast< void* >(simpleToBean(value));
}



java::lang::Class* Dateconverter::SimpleFormatConverter::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.SimpleFormatConverter", 68);
    return c;
}

java::lang::Class* Dateconverter::SimpleFormatConverter::getClass0()
{
    return class_();
}

