#pragma once

#include <list>

#include "datatable/converter/FormatConverter.h"

class DataTableConversion
{
//private:
//    static std::list  FORMAT_CONVERTERS_;
//    static ::java::util::concurrent::locks::ReentrantReadWriteLock* FORMAT_CONVERTERS_LOCK_;

public:
//    static DataTable* beanToTable(void* bean, TableFormat* format, bool setReadOnlyFields, bool ignoreErrors) /* throws(DataTableException) */;
//    static DataTable* beanToTable(void* bean, TableFormat* format) /* throws(DataTableException) */;
//    static DataTable* beanToTable(void* bean, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */;
//    static DataTable* beansToTable(::java::util::Collection* beans, TableFormat* format) /* throws(DataTableException) */;
//    static DataTable* beansToTable(::java::util::Collection* beans, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */;
//    static void* beanFromTable(DataTable* table, ::java::lang::Class* beanClass, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */;
//    static std::list  beansFromTable(DataTable* table, ::java::lang::Class* beanClass, TableFormat* format) /* throws(DataTableException) */;
//    static std::list  beansFromTable(DataTable* table, ::java::lang::Class* beanClass, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */;
//    static void* beanFromRecord(DataRecord* rec, ::java::lang::Class* beanClass, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */;
//    static void populateBeanFromRecord(void* bean, DataRecord* rec, TableFormat* format, bool setReadOnlyFields) /* throws(DataTableException) */;
//    static void populateBeanFromRecord(void* bean, DataRecord* rec, TableFormat* format, bool setReadOnlyFields, ::std::set  fieldsToSkip) /* throws(DataTableException) */;
//    static DataRecord* beanToRecord(void* bean, TableFormat* format, bool setReadOnlyFields, bool ignoreErrors) /* throws(DataTableException) */;
//    static DataRecord* beanToRecord(void* bean, TableFormat* format, bool setReadOnlyFields, bool ignoreErrors, ::std::set  fieldsToSkip) /* throws(DataTableException) */;

//private:
//    static TableFormat* getFormatFromDefaultValue(FieldFormat* ff);

//public:
//    static void* convertValueToField(FieldFormat* ff, void* value, ::java::lang::Class* requiredClass);
//    static void* convertValueFromField(void* value);
//    static void* convertValueFromField(void* value, ::java::lang::Class* requiredClass);
//    static void* convertValueToField(FieldFormat* ff, void* value);

    static boost::shared_ptr<DataRecord> beanToRecord(boost::shared_ptr<AgObject> bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors);
    static boost::shared_ptr<DataRecord> beanToRecord(boost::shared_ptr<AgObject> bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors, const std::list<std::string> &fieldsToSkip);

    static void registerFormatConverter(boost::shared_ptr<FormatConverter> converter);
    static boost::shared_ptr<FieldFormat> createTableField(const std::string & name, boost::shared_ptr<TableFormat> format);

//    static converter::FormatConverter* getFormatConverter(::java::lang::Class* valueClass);
//    static /* <S> */FieldFormat* createFieldFormat(const std::string & name, void* value);
//    static /* <S> */FieldFormat* createFieldFormat(const std::string & name, const std::string & valueClassName) /* throws(ClassNotFoundException) */;
//    static /* <S> */FieldFormat* createFieldFormat(const std::string & name, ::java::lang::Class* valueClass);
//    static FieldFormat* createTableField(const std::string & name, TableFormat* format);
//    static FieldFormat* createTableField(const std::string & name, const std::string & description, TableFormat* format);
//    static void* createAggreGateBean(void* value, ::java::lang::Class* requiredClass) /* throws(NoSuchMethodException, IllegalAccessException, InvocationTargetException, InstantiationException) */;

//private:
//    static void* createArray_(FieldFormat* ff, void* value);
//    static std::list  createList(void* bean, DataRecord* rec, bool setReadOnlyFields, FieldFormat* ff) /* throws(NoSuchFieldException, DataTableException) */;
//    static DataTable* convertList(void* bean, void* value, bool setReadOnlyFields, FieldFormat* ff) /* throws(NoSuchFieldException, InstantiationException, IllegalAccessException, DataTableException) */;
//    static DataTable* convertArray_(FieldFormat* ff, void* value);

//    // Generated

//public:
//    DataTableConversion();
//protected:
//    DataTableConversion(const ::default_init_tag&);


//public:
    
//    static void

//public: // package
//    static std::list & FORMAT_CONVERTERS();
//    static ::java::util::concurrent::locks::ReentrantReadWriteLock*& FORMAT_CONVERTERS_LOCK();
};
