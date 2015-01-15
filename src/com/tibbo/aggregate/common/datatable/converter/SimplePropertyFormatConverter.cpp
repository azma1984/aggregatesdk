// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/SimplePropertyFormatConverter.java
//#include <com/tibbo/aggregate/common/datatable/converter/SimplePropertyFormatConverter.h"

#include <com/tibbo/aggregate/common/datatable/DataTableConversion.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
/*
//#include <java/beans/BeanInfo.h"
//#include <java/beans/FeatureDescriptor.h"
//#include <java/beans/IntrospectionException.h"
//#include <java/beans/Introspector.h"
//#include <java/beans/PropertyDescriptor.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/ReflectiveOperationException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/reflect/AnnotatedElement.h"
//#include <java/lang/reflect/Constructor.h"
//#include <java/lang/reflect/GenericDeclaration.h"
//#include <java/lang/reflect/Method.h"
//#include <java/lang/reflect/Type.h"
#include <SubArray.h"
#include <ObjectArray.h"
*/
template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace beans
    {
typedef ::SubArray< ::java::beans::FeatureDescriptor, voidArray > FeatureDescriptorArray;
typedef ::SubArray< ::java::beans::PropertyDescriptor, FeatureDescriptorArray > PropertyDescriptorArray;
    } // beans

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

com::tibbo::aggregate::common::datatable::converter::SimplePropertyFormatConverter::SimplePropertyFormatConverter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::SimplePropertyFormatConverter::SimplePropertyFormatConverter(::java::lang::Class* valueClass, const std::string & field) 
    : SimplePropertyFormatConverter(*static_cast< ::default_init_tag* >(0))
{
    ctor(valueClass,field);
}

void com::tibbo::aggregate::common::datatable::converter::SimplePropertyFormatConverter::ctor(::java::lang::Class* valueClass, const std::string & field)
{
    super::ctor(valueClass);
    try {
        auto const beanInfo = ::java::beans::Introspector::getBeanInfo(valueClass);
        auto const propertyDescriptors = beanInfo)->getPropertyDescriptors();
        for(auto pd : *propertyDescriptors)) {
            if(field)->equals(pd)->getName()))) {
                propertyDescriptor = pd;
                return;
            }
        }
        throw new ::java::beans::IntrospectionException(std::stringBuilder().append(u"Field '"_j)->append(field)
            ->append(u"' not found in class '"_j)
            ->append(valueClass)->getSimpleName())
            ->append(u"'"_j)->toString());
    } catch (::java::beans::IntrospectionException* e) {
        throw new ::java::lang::IllegalStateException(e)->getMessage(), e);
    }
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::SimplePropertyFormatConverter::createFieldFormat(const std::string & name)
{
    return datatable::DataTableConversion::createFieldFormat(name, static_cast< ::java::lang::Class* >(propertyDescriptor)->getPropertyType())))->setNullable(true);
}

void* com::tibbo::aggregate::common::datatable::converter::SimplePropertyFormatConverter::simpleToBean(void* value)
{
    if(value == 0) {
        return 0;
    }
    try {
        if(propertyDescriptor)->getWriteMethod() != 0) {
            auto bean = java_cast< void* >(getValueClass())->newInstance());
            propertyDescriptor)->getWriteMethod())->invoke(bean, new voidArray({value}));
            return bean;
        } else {
            auto const constructor = getValueClass())->getConstructor(new ::java::lang::ClassArray({static_cast< ::java::lang::Class* >(propertyDescriptor)->getPropertyType())}));
            return java_cast< void* >(constructor)->newInstance(new voidArray({value})));
        }
    } catch (::java::lang::ReflectiveOperationException* e) {
        throw new ::java::lang::IllegalStateException(e)->getMessage(), e);
    }
}

void* com::tibbo::aggregate::common::datatable::converter::SimplePropertyFormatConverter::convertToTable(void* value, TableFormat* format)
{
    try {
        return propertyDescriptor)->getReadMethod())->invoke(value, new voidArray());
    } catch (::java::lang::ReflectiveOperationException* e) {
        throw new ::java::lang::IllegalStateException(e)->getMessage(), e);
    }
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::SimplePropertyFormatConverter::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.SimplePropertyFormatConverter", 76);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::SimplePropertyFormatConverter::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::SimplePropertyFormatConverter::getClass0()
{
    return class_();
}

