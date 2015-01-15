// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/DefaultFormatConverter.java
//#include <com/tibbo/aggregate/common/datatable/converter/DefaultFormatConverter.h"

#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableConversion.h"
#include <com/tibbo/aggregate/common/datatable/DataTableException.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/InstantiationException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/Throwable.h"
//#include <java/lang/reflect/AnnotatedElement.h"
//#include <java/lang/reflect/Constructor.h"
//#include <java/lang/reflect/GenericDeclaration.h"
//#include <java/lang/reflect/Type.h"
//#include <java/util/Arrays.h"
//#include <java/util/Collection.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashSet.h"
//#include <java/util/List.h"
//#include <java/util/Set.h"
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
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, voidArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, voidArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, voidArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
    } // lang
} // java

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

com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::DefaultFormatConverter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::DefaultFormatConverter(::java::lang::Class* valueClass, TableFormat* format) 
    : DefaultFormatConverter(*static_cast< ::default_init_tag* >(0))
{
    ctor(valueClass,format);
}

void com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::init()
{
    constructorArguments = new ::java::util::LinkedHashSet();
}

void com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::ctor(::java::lang::Class* valueClass, TableFormat* format)
{
    super::ctor(valueClass, format);
    init();
}

void* com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::convertToBean(void* value, void* originalValue)
{
    try {
        auto const rec = (java_cast< DataTable* >(value)))->rec();
        if(rec)->hasField(VF_IS_NULL()) && (rec)->getBoolean(VF_IS_NULL())))->booleanValue())
            return 0;

        if(originalValue != 0) {
            auto bean = java_cast< void* >(clone(originalValue), false));
            if(bean == 0) {
                bean = instantiate(rec);
            }
            DataTableConversion::populateBeanFromRecord(bean, rec, getFormat(), true, FIELDS_TO_SKIP());
            return java_cast< void* >(bean);
        } else {
            if(constructorArguments)->size() == 0) {
                return java_cast< void* >(DataTableConversion::beanFromTable(java_cast< DataTable* >(value), getValueClass(), getFormat(), true));
            } else {
                auto bean = instantiate(rec);
                DataTableConversion::populateBeanFromRecord(bean, rec, getFormat(), true);
                return java_cast< void* >(bean);
            }
        }
    } catch (::java::lang::Exception* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void* com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::convertToTable(void* value, TableFormat* format)
{
    try {
        if(value == 0)
            if(format)->hasField(VF_IS_NULL())) {
                auto const dataTable = new DataTable(format, true);
                dataTable)->rec())->setValue(VF_IS_NULL(), ::java::lang::Boolean::valueOf(true));
                return dataTable;
            }

        return datatable::DataTableConversion::beanToRecord(value, getFormat(), true, false, new ::java::util::LinkedHashSet(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(new voidArray({VF_IS_NULL())}))))))->wrap();
    } catch (DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::createFieldFormat(const std::string & name)
{
    return 0;
}

void com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::addConstructorField(const std::string & field)
{
    constructorArguments)->add(field));
}

void* com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::instantiate(DataRecord* source) /* throws(InstantiationException) */
{
    try {
        if(constructorArguments)->size() == 0) {
            try {
                auto bean = java_cast< void* >(getValueClass())->newInstance());
                DataTableConversion::populateBeanFromRecord(bean, source, getFormat(), true);
                return bean;
            } catch (::java::lang::Exception* ex) {
                throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
            }
        } else {
            auto types = new ::java::lang::ClassArray(constructorArguments)->size());
            auto parameters = new voidArray(constructorArguments)->size());
            auto i = int(0);
            for (auto _i = constructorArguments)->iterator(); _i->hasNext(); ) {
                const std::string & s = java_cast< const std::string & >(_i->next());
                {
                    auto fv = source)->getValue(s);
                    types->set(i, fv)->getClass());
                    parameters->set(i, fv);
                    i++;
                }
            }
            auto c = getValueClass())->getConstructor(types);
            auto bean = java_cast< void* >(c)->newInstance(parameters));
            DataTableConversion::populateBeanFromRecord(bean, source, getFormat(), true, constructorArguments);
            return bean;
        }
    } catch (::java::lang::InstantiationException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.DefaultFormatConverter", 69);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::DefaultFormatConverter::getClass0()
{
    return class_();
}

