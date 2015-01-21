// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/AbstractFormatConverter.java
#include <com/tibbo/aggregate/common/datatable/converter/AbstractFormatConverter.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/binding/Binding.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableBindingProvider.h"
#include <com/tibbo/aggregate/common/datatable/DataTableConversion.h"
#include <com/tibbo/aggregate/common/datatable/DataTableException.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"
//#include <java/util/Arrays.h"
//#include <java/util/Collection.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashSet.h"
//#include <java/util/List.h"
//#include <java/util/ResourceBundle.h"
#include <ObjectArray.h"
*/
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

Dateconverter::AbstractFormatConverter::AbstractFormatConverter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateconverter::AbstractFormatConverter::AbstractFormatConverter(::java::lang::Class* valueClass, TableFormat* format) 
    : AbstractFormatConverter(*static_cast< ::default_init_tag* >(0))
{
    ctor(valueClass,format);
}

Dateconverter::AbstractFormatConverter::AbstractFormatConverter(::java::lang::Class* valueClass) 
    : AbstractFormatConverter(*static_cast< ::default_init_tag* >(0))
{
    ctor(valueClass);
}

std::string& Dateconverter::AbstractFormatConverter::VF_IS_NULL()
{
    
    return VF_IS_NULL_;
}
std::string Dateconverter::AbstractFormatConverter::VF_IS_NULL_;

java::util::LinkedHashSet*& Dateconverter::AbstractFormatConverter::FIELDS_TO_SKIP()
{
    
    return FIELDS_TO_SKIP_;
}
java::util::LinkedHashSet* Dateconverter::AbstractFormatConverter::FIELDS_TO_SKIP_;

DateTableFormat* Dateconverter::AbstractFormatConverter::deriveNullable(TableFormat* format)
{
    
    format = format)->clone();
    for (auto _i = format)->getFields())->iterator(); _i->hasNext(); ) {
        FieldFormat* fieldFormat = java_cast< FieldFormat* >(_i->next());
        
                        addDisabledBinding(format, fieldFormat);

    }
    format)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(VF_IS_NULL())
        ->append(u"><B><D="_j)
        ->append(Cres::get())->getString(u"wNullValue"_j))
        ->append(u"><A=0>"_j)->toString())), int(0));
    return format;
}

void Dateconverter::AbstractFormatConverter::addFiledToNullableFormat(TableFormat* format, FieldFormat* field)
{
    
    format)->addField(field);
    addDisabledBinding(format, field);
}

void Dateconverter::AbstractFormatConverter::removeFiledFromNullableFormat(TableFormat* format, const std::string & fieldName)
{
    
    for (auto _i = format)->getBindings())->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::binding::Binding* binding = java_cast< ::com::tibbo::aggregate::common::binding::Binding* >(_i->next());
        {
            if(fieldName)->equals(binding)->getReference())->getField())))
                format)->removeBinding(binding);

        }
    }
    format)->removeField(fieldName);
}

void Dateconverter::AbstractFormatConverter::addDisabledBinding(TableFormat* format, FieldFormat* field)
{
    
    format)->addBinding(std::stringBuilder().append(field)->getName())->append(u"#"_j)
        ->append(DataTableBindingProvider::PROPERTY_ENABLED())->toString(), std::stringBuilder().append(u"!{"_j)->append(VF_IS_NULL())
        ->append(u"}"_j)->toString());
}

void Dateconverter::AbstractFormatConverter::ctor(::java::lang::Class* valueClass, TableFormat* format)
{
    super::ctor();
    this->valueClass = valueClass;
    this->format = format;
}

void Dateconverter::AbstractFormatConverter::ctor(::java::lang::Class* valueClass)
{
    super::ctor();
    this->valueClass = valueClass;
}

java::lang::Class* Dateconverter::AbstractFormatConverter::getValueClass()
{
    return valueClass;
}

void Dateconverter::AbstractFormatConverter::setValueClass(::java::lang::Class* valueClass)
{
    this->valueClass = valueClass;
}

DateTableFormat* Dateconverter::AbstractFormatConverter::getFormat()
{
    return format;
}

DateFieldFormat* Dateconverter::AbstractFormatConverter::createFieldFormat(const std::string & name)
{
    return DataTableConversion::createTableField(name, format);
}

void* Dateconverter::AbstractFormatConverter::instantiate(DataRecord* source) /* throws(InstantiationException) */
{
    try {
        return java_cast< void* >(convertToBean(source)->wrap(), 0));
    } catch (::java::lang::Exception* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void* Dateconverter::AbstractFormatConverter::clone(void* value, bool useConversion)
{
    if(useConversion) {
        auto fieldValue = convertToTable(value);
        return java_cast< void* >(convertToBean(fieldValue, 0));
    } else {
        return 0;
    }
}

void* Dateconverter::AbstractFormatConverter::convertToTable(void* value)
{
    return convertToTable(value, 0);
}

void* Dateconverter::AbstractFormatConverter::simpleToTable(void* value, TableFormat* format)
{
    
    try {
        return datatable::DataTableConversion::beanToRecord(value, format, true, false, FIELDS_TO_SKIP()))->wrap();
    } catch (DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}



java::lang::Class* Dateconverter::AbstractFormatConverter::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.AbstractFormatConverter", 70);
    return c;
}

void Dateconverter::AbstractFormatConverter::clinit()
{
struct string_init_ {
    string_init_() {
    VF_IS_NULL_ = u"isNull"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FIELDS_TO_SKIP_ = new ::java::util::LinkedHashSet(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(new voidArray({VF_IS_NULL())}))));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

void* Dateconverter::AbstractFormatConverter::clone()
{
    return super::clone();
}

java::lang::Class* Dateconverter::AbstractFormatConverter::getClass0()
{
    return class_();
}

