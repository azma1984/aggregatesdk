// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableConversion.java
#include <com/tibbo/aggregate/common/datatable/DataTableConversion.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/datatable/AggreGateBean.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableException.h"
#include <com/tibbo/aggregate/common/datatable/FCBigDecimal.h"
#include <com/tibbo/aggregate/common/datatable/FCBigInteger.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCByte.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCComparable.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCDouble.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCNumber.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCShort.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCSimpleBoolean.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCSimpleByte.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCSimpleDouble.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCSimpleFloat.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCSimpleInteger.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCSimpleLong.h"
#include <com/tibbo/aggregate/common/datatable/converter/FCSimpleShort.h"
#include <com/tibbo/aggregate/common/datatable/converter/FormatConverter.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NoSuchMethodException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"
//#include <java/lang/reflect/Array_.h"
//#include <java/lang/reflect/Constructor.h"
//#include <java/lang/reflect/Field.h"
//#include <java/lang/reflect/InvocationTargetException.h"
//#include <java/lang/reflect/Type.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/Collection.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashSet.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/Map.h"
//#include <java/util/Set.h"
//#include <java/util/concurrent/locks/ReentrantReadWriteLock_ReadLock.h"
//#include <java/util/concurrent/locks/ReentrantReadWriteLock_WriteLock.h"
//#include <java/util/concurrent/locks/ReentrantReadWriteLock.h"
//#include <org/apache/commons/beanutils/ConstructorUtils.h"
//#include <org/apache/commons/beanutils/PropertyUtils.h"
//#include <org/apache/log4j/Logger.h"
#include <ObjectArray.h"

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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
com::tibbo::aggregate::common::datatable::DataTableConversion::DataTableConversion(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::DataTableConversion::DataTableConversion()
    : DataTableConversion(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List*& com::tibbo::aggregate::common::datatable::DataTableConversion::FORMAT_CONVERTERS()
{
    
    return FORMAT_CONVERTERS_;
}
java::util::List* com::tibbo::aggregate::common::datatable::DataTableConversion::FORMAT_CONVERTERS_;

java::util::concurrent::locks::ReentrantReadWriteLock*& com::tibbo::aggregate::common::datatable::DataTableConversion::FORMAT_CONVERTERS_LOCK()
{
    
    return FORMAT_CONVERTERS_LOCK_;
}
java::util::concurrent::locks::ReentrantReadWriteLock* com::tibbo::aggregate::common::datatable::DataTableConversion::FORMAT_CONVERTERS_LOCK_;

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataTableConversion::beanToTable(void* bean, TableFormat* format, bool setReadOnlyFields, bool ignoreErrors) /* throws(DataTableException) */
{
    
    return beanToRecord(bean, format, setReadOnlyFields, ignoreErrors))->wrap();
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataTableConversion::beanToTable(void* bean, TableFormat* format) /* throws(DataTableException) */
{
    
    return beanToTable(bean, format, true, false);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataTableConversion::beanToTable(void* bean, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */
{
    
    return beanToTable(bean, format, setReadOnlyFields, false);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataTableConversion::beansToTable(::java::util::Collection* beans, TableFormat* format) /* throws(DataTableException) */
{
    
    return beansToTable(beans, format, true);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataTableConversion::beansToTable(::java::util::Collection* beans, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */
{
    
    auto table = new DataTable(format);
    for (auto *iter = beans)->iterator(); iter)->hasNext(); ) {
        auto bean = java_cast< void* >(iter)->next());
        table)->addRecord(beanToRecord(bean, format, setReadOnlyFields, false));
    }
    return table;
}

void* com::tibbo::aggregate::common::datatable::DataTableConversion::beanFromTable(DataTable* table, ::java::lang::Class* beanClass, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */
{
    
    auto list = beansFromTable(table, beanClass, format, setReadOnlyFields);
    if(list)->size() > 1) {
        Log::DATATABLE())->warn(u"More than one bean generated from data table, returning the first one only"_j, new ::java::lang::Exception());
    }
    return java_cast< void* >(list)->get(0));
}

java::util::List* com::tibbo::aggregate::common::datatable::DataTableConversion::beansFromTable(DataTable* table, ::java::lang::Class* beanClass, TableFormat* format) /* throws(DataTableException) */
{
    
    return beansFromTable(table, beanClass, format, true);
}

java::util::List* com::tibbo::aggregate::common::datatable::DataTableConversion::beansFromTable(DataTable* table, ::java::lang::Class* beanClass, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */
{
    
    try {
        std::list  res = new ::java::util::LinkedList();
        if(table == 0) {
            return res;
        }
        for (auto _i = table)->iterator(); _i->hasNext(); ) {
            DataRecord* rec = java_cast< DataRecord* >(_i->next());
            {
                if(FieldFormat::getClassToTypeMap())->containsKey(beanClass)) {
                    res)->add(rec)->getValue(int(0))));
                    continue;
                }
                auto bean = beanFromRecord(rec, beanClass, format, setReadOnlyFields);
                res)->add(bean));
            }
        }
        return res;
    } catch (::java::lang::Exception* ex) {
        throw new DataTableException(std::stringBuilder().append(u"Error converting data table to the list of beans of type '"_j)->append(beanClass)->getName())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

void* com::tibbo::aggregate::common::datatable::DataTableConversion::beanFromRecord(DataRecord* rec, ::java::lang::Class* beanClass, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */
{
    
    try {
        void* bean;
        auto fc = getFormatConverter(beanClass);
        if(fc == 0) {
            auto recordConstructor = ::org::apache::commons::beanutils::ConstructorUtils::getAccessibleConstructor(beanClass, static_cast< ::java::lang::Class* >(DataRecord::class_()));
            if(recordConstructor != 0) {
                bean = java_cast< void* >(recordConstructor)->newInstance(new voidArray({rec)})));
            } else {
                bean = java_cast< void* >(beanClass)->newInstance());
                populateBeanFromRecord(bean, rec, format, setReadOnlyFields);
            }
        } else {
            bean = fc)->instantiate(rec);
        }
        return bean;
    } catch (::java::lang::Exception* ex) {
        throw new DataTableException(std::stringBuilder().append(u"Error converting data record to the bean of type '"_j)->append(beanClass)->getName())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

void com::tibbo::aggregate::common::datatable::DataTableConversion::populateBeanFromRecord(void* bean, DataRecord* rec, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */
{
    
    populateBeanFromRecord(bean, rec, format, setReadOnlyFields, new ::java::util::LinkedHashSet(int(0)));
}

void com::tibbo::aggregate::common::datatable::DataTableConversion::populateBeanFromRecord(void* bean, DataRecord* rec, TableFormat* format, bool setReadOnlyFields, ::java::util::Set* fieldsToSkip) /* throws(DataTableException) */
{
    
    try {
        for (auto _i = format)->iterator(); _i->hasNext(); ) {
            FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
            {
                if(fieldsToSkip)->contains(ff)->getName()))) {
                    continue;
                }
                if(ff)->isReadonly() && !setReadOnlyFields) {
                    continue;
                }
                void* value;
                if(rec)->getFormat())->hasField(ff)->getName())) {
                    value = rec)->getValue(ff)->getName());
                } else {
                    value = java_cast< void* >(ff)->getDefaultValueCopy());
                }
                try {
                    if(value != 0) {
                        auto requiredClass = ::org::apache::commons::beanutils::PropertyUtils::getPropertyType(bean, ff)->getName());
                        if(requiredClass == 0) {
                            Log::DATATABLE())->debug(std::stringBuilder().append(u"No method to set property '"_j)->append(ff)->getName())
                                ->append(u"' ("_j)
                                ->append(ff)->getFieldWrappedClass()))
                                ->append(u") in object of type '"_j)
                                ->append(bean)->getClass())->getName())
                                ->append(u"'"_j)->toString());
                            continue;
                        }
                        if(::java::util::List::class_())->isAssignableFrom(requiredClass)) {
                            value = createList(bean, rec, setReadOnlyFields, ff);
                            if(value == 0) {
                                continue;
                            }
                        } else {
                            auto fc = DataTableConversion::getFormatConverter(requiredClass);
                            if(fc != 0) {
                                auto originalValue = ::org::apache::commons::beanutils::PropertyUtils::getProperty(bean, ff)->getName());
                                value = java_cast< void* >(fc)->convertToBean(value, originalValue));
                            } else if(AggreGateBean::class_())->isAssignableFrom(requiredClass) && (dynamic_cast< DataTable* >(value) != 0)) {
                                value = createAggreGateBean(value, requiredClass);
                            }
                            if(requiredClass)->isArray_()) {
                                value = createArray_(ff, value);
                            }
                        }
                    }
                    ::org::apache::commons::beanutils::PropertyUtils::setProperty(bean, ff)->getName(), value);
                } catch (::java::lang::reflect::InvocationTargetException* ex1) {
                    throw new DataTableException(std::stringBuilder().append(u"Error setting property '"_j)->append(ff)->getName())
                        ->append(u"' to '"_j)
                        ->append(value))
                        ->append(u"' ("_j)
                        ->append((value != 0 ? value)->getClass())->getName() : u"null"_j))
                        ->append(u"): "_j)
                        ->append(ex1)->getCause())->getMessage())->toString(), ex1)->getCause());
                } catch (::java::lang::Exception* ex1) {
                    throw new DataTableException(std::stringBuilder().append(u"Error setting property '"_j)->append(ff)->getName())
                        ->append(u"' to '"_j)
                        ->append(value))
                        ->append(u"' ("_j)
                        ->append((value != 0 ? value)->getClass())->getName() : u"null"_j))
                        ->append(u"): "_j)
                        ->append(ex1)->getMessage())->toString(), ex1);
                }
            }
        }
    } catch (::java::lang::Exception* ex) {
        throw new DataTableException(std::stringBuilder().append(u"Error populating bean of type '"_j)->append(bean)->getClass())->getName())
            ->append(u"' from data table: "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataTableConversion::beanToRecord(void* bean, TableFormat* format, bool setReadOnlyFields, bool ignoreErrors) /* throws(DataTableException) */
{
    
    return DataTableConversion::beanToRecord(bean, format, setReadOnlyFields, ignoreErrors, new ::java::util::LinkedHashSet(int(0)));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataTableConversion::beanToRecord(void* bean, TableFormat* format, bool setReadOnlyFields, bool ignoreErrors, ::java::util::Set* fieldsToSkip) /* throws(DataTableException) */
{
    
    try {
        if(format == 0) {
            throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"No format found for "_j)->append(bean)->getClass()))->toString());
        }
        auto rec = new DataRecord(format)->isImmutable() ? format : format)->clone());
        if(bean != 0 && FieldFormat::getClassToTypeMap())->containsKey(bean)->getClass())) {
            rec)->addValue(bean);
            return rec;
        }
        for (auto _i = format)->iterator(); _i->hasNext(); ) {
            FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
            {
                if(fieldsToSkip)->contains(ff)->getName())) || (!setReadOnlyFields && ff)->isReadonly())) {
                    continue;
                }
                void* value;
                try {
                    if(bean != 0)
                        value = ::org::apache::commons::beanutils::PropertyUtils::getProperty(bean, ff)->getName());

                } catch (::java::lang::NoSuchMethodException* ex3) {
                    Log::DATATABLE())->debug(::java::text::MessageFormat::format(u"Error getting property ''{0}'' ({1}) from object of type ''{2}'': {3}"_j, new voidArray({ff)->getName()), ff)->getFieldWrappedClass()), bean != 0 ? bean)->getClass())->getName()) : u"null"_j), ex3)->getMessage())})));
                    continue;
                } catch (::java::lang::Exception* ex3) {
                    if(!ignoreErrors) {
                        Log::DATATABLE())->warn(::java::text::MessageFormat::format(u"Error getting property ''{0}'' ({1}) from object of type ''{2}''"_j, new voidArray({ff)->getName()), ff)->getFieldWrappedClass()), bean != 0 ? bean)->getClass())->getName()) : u"null"_j)})), ex3);
                    }
                    continue;
                }
                auto fc = bean == 0 ? static_cast< converter::FormatConverter* >(0) : static_cast< converter::FormatConverter* >(DataTableConversion::getFormatConverter(::org::apache::commons::beanutils::PropertyUtils::getPropertyType(bean, ff)->getName())));
                if(fc != 0) {
                    value = fc)->convertToTable(value, DataTableConversion::getFormatFromDefaultValue(ff));
                }
                if(value != 0) {
                    if(dynamic_cast< std::list  >(value) != 0) {
                        value = convertList(bean, value, setReadOnlyFields, ff);
                        if(value == 0) {
                            continue;
                        }
                    } else if(value)->getClass())->isArray_()) {
                        value = convertArray_(ff, value);
                    } else if(dynamic_cast< AggreGateBean* >(value) != 0) {
                        value = (java_cast< AggreGateBean* >(value)))->toDataTable();
                    }
                }
                try {
                    rec)->setValue(ff)->getName(), value);
                } catch (::java::lang::Exception* ex) {
                    if(!ignoreErrors) {
                        throw ex;
                    }
                }
            }
        }
        return rec;
    } catch (::java::lang::Exception* ex2) {
        throw new DataTableException(std::stringBuilder().append(u"Error converting bean of type '"_j)->append(bean))->toString() == 0 ? static_cast< const std::string & >(0) : std::stringBuilder().append(bean)->getClass())->getName())->append(u"' to data record: "_j)
            ->append(ex2)->getMessage())->toString(), ex2);
    }
}

com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::datatable::DataTableConversion::getFormatFromDefaultValue(FieldFormat* ff)
{
    
    TableFormat* frmt;
    if(dynamic_cast< DataTable* >(java_cast< void* >(ff)->getDefaultValue())) != 0) {
        frmt = (java_cast< DataTable* >(java_cast< void* >(ff)->getDefaultValue()))))->getFormat();
    }
    return frmt;
}

void* com::tibbo::aggregate::common::datatable::DataTableConversion::convertValueToField(FieldFormat* ff, void* value, ::java::lang::Class* requiredClass)
{
    
    if(value == 0) {
        return 0;
    }
    if(ff)->getFieldWrappedClass())->isAssignableFrom(value)->getClass())) {
        return value;
    } else {
        auto fc = DataTableConversion::getFormatConverter(requiredClass);
        if(fc != 0) {
            return fc)->convertToTable(value, getFormatFromDefaultValue(ff));
        }
        return java_cast< void* >(ff)->valueFromString(value)->toString()));
    }
}

void* com::tibbo::aggregate::common::datatable::DataTableConversion::convertValueFromField(void* value)
{
    
    return DataTableConversion::convertValueFromField(value, value)->getClass());
}

void* com::tibbo::aggregate::common::datatable::DataTableConversion::convertValueFromField(void* value, ::java::lang::Class* requiredClass)
{
    
    if(value == 0) {
        return 0;
    }
    auto fc = DataTableConversion::getFormatConverter(requiredClass);
    if(fc != 0) {
        return java_cast< void* >(fc)->convertToBean(value, 0));
    }
    return value;
}

void* com::tibbo::aggregate::common::datatable::DataTableConversion::convertValueToField(FieldFormat* ff, void* value)
{
    
    if(value == 0) {
        return 0;
    }
    return convertValueToField(ff, value, value)->getClass());
}

void com::tibbo::aggregate::common::datatable::DataTableConversion::registerFormatConverter(converter::FormatConverter* converter)
{
    
    FORMAT_CONVERTERS_LOCK_)->writeLock())->lock();
    {
        auto finally0 = finally([&] {
            FORMAT_CONVERTERS_LOCK_)->writeLock())->unlock();
        });
        {
            auto i = int(0);
            for (auto _i = DataTableConversion::FORMAT_CONVERTERS_)->iterator(); _i->hasNext(); ) {
                converter::FormatConverter* fc = java_cast< converter::FormatConverter* >(_i->next());
                {
                    if(fc)->getValueClass())->isAssignableFrom(converter)->getValueClass())) {
                        break;
                    }
                    i++;
                }
            }
            DataTableConversion::FORMAT_CONVERTERS_)->add(i, converter);
        }
    }

}

com::tibbo::aggregate::common::datatable::converter::FormatConverter* com::tibbo::aggregate::common::datatable::DataTableConversion::getFormatConverter(::java::lang::Class* valueClass)
{
    
    if(valueClass == 0) {
        return 0;
    }
    if(AggreGateBean::class_())->isAssignableFrom(valueClass)) {
        return 0;
    }
    if(FieldFormat::getClassToTypeMap())->containsKey(valueClass)) {
        return 0;
    }
    FORMAT_CONVERTERS_LOCK_)->readLock())->lock();
    {
        auto finally1 = finally([&] {
            FORMAT_CONVERTERS_LOCK_)->readLock())->unlock();
        });
        {
            for (auto _i = DataTableConversion::FORMAT_CONVERTERS_)->iterator(); _i->hasNext(); ) {
                converter::FormatConverter* fc = java_cast< converter::FormatConverter* >(_i->next());
                {
                    if(fc)->getValueClass())->isAssignableFrom(valueClass)) {
                        return fc;
                    }
                }
            }
        }
    }

    return 0;
}

/* <S> */com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::DataTableConversion::createFieldFormat(const std::string & name, void* value)
{
    
    auto fieldFormat = FieldFormat::create(name, FieldFormat::STRING_FIELD);
    if(value == 0) {
        fieldFormat)->setNullable(true);
    } else {
        try {
            fieldFormat = createFieldFormat(name, static_cast< ::java::lang::Class* >(value)->getClass()));
        } catch (::java::lang::Exception* ex) {
            Log::DATATABLE())->debug(u"Error constructing field format for value"_j, ex);
        }
    }
    return fieldFormat;
}

/* <S> */com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::DataTableConversion::createFieldFormat(const std::string & name, const std::string & valueClassName) /* throws(ClassNotFoundException) */
{
    
    FORMAT_CONVERTERS_LOCK_)->readLock())->lock();
    {
        auto finally2 = finally([&] {
            FORMAT_CONVERTERS_LOCK_)->readLock())->unlock();
        });
        {
            for (auto _i = FORMAT_CONVERTERS_)->iterator(); _i->hasNext(); ) {
                converter::FormatConverter* converter = java_cast< converter::FormatConverter* >(_i->next());
                {
                    if(valueClassName)->equals(converter)->getValueClass())->getSimpleName()))) {
                        return converter)->createFieldFormat(name);
                    }
                }
            }
        }
    }

    return FieldFormat::create(name, static_cast< ::java::lang::Class* >(::java::lang::Class::forName(valueClassName)));
}

/* <S> */com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::DataTableConversion::createFieldFormat(const std::string & name, ::java::lang::Class* valueClass)
{
    
    FORMAT_CONVERTERS_LOCK_)->readLock())->lock();
    {
        auto finally3 = finally([&] {
            FORMAT_CONVERTERS_LOCK_)->readLock())->unlock();
        });
        {
            for (auto _i = FORMAT_CONVERTERS_)->iterator(); _i->hasNext(); ) {
                converter::FormatConverter* converter = java_cast< converter::FormatConverter* >(_i->next());
                {
                    if(valueClass == converter)->getValueClass()) {
                        return converter)->createFieldFormat(name);
                    }
                }
            }
        }
    }

    return FieldFormat::create(name, valueClass);
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::DataTableConversion::createTableField(const std::string & name, TableFormat* format)
{
    
    auto ff = FieldFormat::create(name, FieldFormat::DATATABLE_FIELD);
    ff)->setDefault(new DataTable(format, true));
    return ff;
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::DataTableConversion::createTableField(const std::string & name, const std::string & description, TableFormat* format)
{
    
    auto ff = FieldFormat::create(name, FieldFormat::DATATABLE_FIELD, description);
    ff)->setDefault(new DataTable(format, true));
    return ff;
}

void* com::tibbo::aggregate::common::datatable::DataTableConversion::createAggreGateBean(void* value, ::java::lang::Class* requiredClass) /* throws(NoSuchMethodException, IllegalAccessException, InvocationTargetException, InstantiationException) */
{
    
    auto table = java_cast< DataTable* >(value);
    return ::org::apache::commons::beanutils::ConstructorUtils::invokeConstructor(requiredClass, new voidArray({table)->rec())}));
}

void* com::tibbo::aggregate::common::datatable::DataTableConversion::createArray_(FieldFormat* ff, void* value)
{
    
    if(ff)->getType() != FieldFormat::DATATABLE_FIELD) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Field '"_j)->append(ff)->getName())
            ->append(u"' is not a data table, it cannot store array: "_j)
            ->append(value))->toString());
    }
    auto table = java_cast< DataTable* >(value);
    value = ::java::lang::reflect::Array_::newInstance(static_cast< ::java::lang::Class* >(ff)->getFieldClass()), table)->getRecordCount());
    for (auto i = int(0); i < table)->getRecordCount(); i++) {
        ::java::lang::reflect::Array_::set(value, i, table)->getRecord(i))->getValue(int(0)));
    }
    return value;
}

java::util::List* com::tibbo::aggregate::common::datatable::DataTableConversion::createList(void* bean, DataRecord* rec, bool setReadOnlyFields, FieldFormat* ff) /* throws(NoSuchFieldException, DataTableException) */
{
    
    auto field = bean)->getClass())->getDeclaredField(ff)->getName());
    auto listElementClass = ::com::tibbo::aggregate::common::util::Util::getListElementType(field)->getGenericType());
    if(listElementClass == 0) {
        Log::DATATABLE())->error(std::stringBuilder().append(u"Cannot determine list element class for "_j)->append(field)->getGenericType()))->toString());
        return 0;
    }
    if(rec)->getFormat(ff)->getName()))->getType() != FieldFormat::DATATABLE_FIELD) {
        Log::DATATABLE())->error(std::stringBuilder().append(u"Not a data table field "_j)->append(ff)->getName())->toString());
        return 0;
    }
    auto data = rec)->getDataTable(ff)->getName());
    return beansFromTable(data, listElementClass, data)->getFormat(), setReadOnlyFields);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataTableConversion::convertList(void* bean, void* value, bool setReadOnlyFields, FieldFormat* ff) /* throws(NoSuchFieldException, InstantiationException, IllegalAccessException, DataTableException) */
{
    
    if(ff)->getType() != FieldFormat::DATATABLE_FIELD) {
        Log::DATATABLE())->error(std::stringBuilder().append(u"Not a data table field "_j)->append(ff)->getName())->toString());
        return 0;
    }
    auto dt = java_cast< DataTable* >(java_cast< void* >(ff)->getDefaultValue()));
    TableFormat* fieldFormat;
    if(dt == 0) {
        auto list = java_cast< std::list  >(value);
        AggreGateBean* agb;
        if(list)->size() > 0) {
            auto firstElement = java_cast< void* >(list)->get(0));
            if((firstElement == 0) || !(dynamic_cast< AggreGateBean* >(firstElement) != 0)) {
                Log::DATATABLE())->error(std::stringBuilder().append(u"Value is not AggreGateBean: "_j)->append(firstElement))->toString());
                return 0;
            }
            agb = java_cast< AggreGateBean* >(firstElement);
        } else {
            auto field = bean)->getClass())->getDeclaredField(ff)->getName());
            auto listElementClass = ::com::tibbo::aggregate::common::util::Util::getListElementType(field)->getGenericType());
            if(listElementClass == 0) {
                Log::DATATABLE())->error(std::stringBuilder().append(u"Cannot determine list element class for "_j)->append(field)->getGenericType()))->toString());
                return 0;
            }
            if(!AggreGateBean::class_())->isAssignableFrom(listElementClass)) {
                Log::DATATABLE())->error(std::stringBuilder().append(u"Field "_j)->append(ff))
                    ->append(u" is not AggreGateBean list: "_j)
                    ->append(listElementClass))->toString());
                return 0;
            }
            agb = java_cast< AggreGateBean* >(java_cast< void* >(listElementClass)->newInstance()));
        }
        fieldFormat = agb)->getFormat();
    } else {
        fieldFormat = dt)->getFormat();
    }
    return beansToTable(java_cast< std::list  >(value), fieldFormat, setReadOnlyFields);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataTableConversion::convertArray_(FieldFormat* ff, void* value)
{
    
    if(ff)->getType() != FieldFormat::DATATABLE_FIELD) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Field '"_j)->append(ff)->getName())
            ->append(u"' is not a data table, it cannot store array: "_j)
            ->append(value))->toString());
    }
    auto tbl = java_cast< DataTable* >(java_cast< void* >(ff)->getDefaultValue()));
    if(tbl == 0) {
        tbl = new DataTable(new TableFormat(static_cast< FieldFormat* >(DataTableConversion::createFieldFormat(ff)->getName(), static_cast< ::java::lang::Class* >(value)->getClass())->getComponentType())))));
    }
    for (auto i = int(0); i < ::java::lang::reflect::Array_::getLength(value); i++) {
        tbl)->addRecord())->addValue(i));
    }
    return tbl;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::DataTableConversion::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTableConversion", 56);
    return c;
}

void com::tibbo::aggregate::common::datatable::DataTableConversion::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FORMAT_CONVERTERS_ = new ::java::util::LinkedList();
        FORMAT_CONVERTERS_LOCK_ = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
        {
            DataTableConversion::registerFormatConverter(new converter::FCByte());
            DataTableConversion::registerFormatConverter(new converter::FCDouble());
            DataTableConversion::registerFormatConverter(new converter::FCShort());
            DataTableConversion::registerFormatConverter(new converter::FCSimpleBoolean());
            DataTableConversion::registerFormatConverter(new converter::FCSimpleByte());
            DataTableConversion::registerFormatConverter(new converter::FCSimpleDouble());
            DataTableConversion::registerFormatConverter(new converter::FCSimpleFloat());
            DataTableConversion::registerFormatConverter(new converter::FCSimpleInteger());
            DataTableConversion::registerFormatConverter(new converter::FCSimpleLong());
            DataTableConversion::registerFormatConverter(new converter::FCSimpleShort());
            DataTableConversion::registerFormatConverter(new converter::FCNumber());
            DataTableConversion::registerFormatConverter(new converter::FCComparable());
            DataTableConversion::registerFormatConverter(new FCBigDecimal());
            DataTableConversion::registerFormatConverter(new FCBigInteger());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::datatable::DataTableConversion::getClass0()
{
    return class_();
}

