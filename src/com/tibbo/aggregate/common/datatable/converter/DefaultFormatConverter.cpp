#include "datatable/converter/DefaultFormatConverter.h"


/*
DefaultFormatConverter::DefaultFormatConverter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}*/

DefaultFormatConverter::DefaultFormatConverter(Class* valueClass, boost::shared_ptr<TableFormat> format) 
{
//    ctor(valueClass,format);
}
//
//void DefaultFormatConverter::init()
//{
//    constructorArguments = new ::java::util::LinkedHashSet();
//}
//
//void DefaultFormatConverter::ctor(::java::lang::Class* valueClass, TableFormat* format)
//{
//    super::ctor(valueClass, format);
//    init();
//}
//
//void* DefaultFormatConverter::convertToBean(void* value, void* originalValue)
//{
//    try {
//        auto const rec = (java_cast< DataTable* >(value)))->rec();
//        if(rec)->hasField(VF_IS_NULL()) && (rec)->getBoolean(VF_IS_NULL())))->booleanValue())
//            return 0;
//
//        if(originalValue != 0) {
//            auto bean = java_cast< void* >(clone(originalValue), false));
//            if(bean == 0) {
//                bean = instantiate(rec);
//            }
//            DataTableConversion::populateBeanFromRecord(bean, rec, getFormat(), true, FIELDS_TO_SKIP());
//            return java_cast< void* >(bean);
//        } else {
//            if(constructorArguments)->size() == 0) {
//                return java_cast< void* >(DataTableConversion::beanFromTable(java_cast< DataTable* >(value), getValueClass(), getFormat(), true));
//            } else {
//                auto bean = instantiate(rec);
//                DataTableConversion::populateBeanFromRecord(bean, rec, getFormat(), true);
//                return java_cast< void* >(bean);
//            }
//        }
//    } catch (::java::lang::Exception* ex) {
//        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
//    }
//}
//
//void* DefaultFormatConverter::convertToTable(void* value, TableFormat* format)
//{
//    try {
//        if(value == 0)
//            if(format)->hasField(VF_IS_NULL())) {
//                auto const dataTable = new DataTable(format, true);
//                dataTable)->rec())->setValue(VF_IS_NULL(), ::java::lang::Boolean::valueOf(true));
//                return dataTable;
//            }
//
//        return datatable::DataTableConversion::beanToRecord(value, getFormat(), true, false, new ::java::util::LinkedHashSet(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(new voidArray({VF_IS_NULL())}))))))->wrap();
//    } catch (DataTableException* ex) {
//        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
//    }
//}
//
//DateFieldFormat* DefaultFormatConverter::createFieldFormat(const std::string & name)
//{
//    return 0;
//}
//
//void DefaultFormatConverter::addConstructorField(const std::string & field)
//{
//    constructorArguments)->add(field));
//}
//
//void* DefaultFormatConverter::instantiate(DataRecord* source) /* throws(InstantiationException) */
//{
//    try {
//        if(constructorArguments)->size() == 0) {
//            try {
//                auto bean = java_cast< void* >(getValueClass())->newInstance());
//                DataTableConversion::populateBeanFromRecord(bean, source, getFormat(), true);
//                return bean;
//            } catch (::java::lang::Exception* ex) {
//                throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
//            }
//        } else {
//            auto types = new ::java::lang::ClassArray(constructorArguments)->size());
//            auto parameters = new voidArray(constructorArguments)->size());
//            auto i = int(0);
//            for (auto _i = constructorArguments)->iterator(); _i->hasNext(); ) {
//                const std::string & s = java_cast< const std::string & >(_i->next());
//                {
//                    auto fv = source)->getValue(s);
//                    types->set(i, fv)->getClass());
//                    parameters->set(i, fv);
//                    i++;
//                }
//            }
//            auto c = getValueClass())->getConstructor(types);
//            auto bean = java_cast< void* >(c)->newInstance(parameters));
//            DataTableConversion::populateBeanFromRecord(bean, source, getFormat(), true, constructorArguments);
//            return bean;
//        }
//    } catch (::java::lang::InstantiationException* ex) {
//        throw ex;
//    } catch (::java::lang::Exception* ex) {
//        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
//    }
//}
//
//
//
//
//void* DefaultFormatConverter::convertToTable(void* value)
//{
//    return super::convertToTable(value);
//}
//

