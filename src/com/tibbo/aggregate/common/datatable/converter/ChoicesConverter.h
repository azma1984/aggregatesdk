// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/ChoicesConverter.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/converter/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/converter/AbstractFormatConverter.h"



class com::tibbo::aggregate::common::datatable::converter::ChoicesConverter
    : public AbstractFormatConverter
{

public:
    typedef AbstractFormatConverter super;

private:
    std::list  choices;
    Choice* defaultChoice;
protected:
    void ctor(::java::lang::Class* valueClass);

public:
    FieldFormat* createFieldFormat(const std::string & name);
    FieldFormat* createFieldFormat(const std::string & name, const std::string & description);
    FieldFormat* createFieldFormat(const std::string & name, const std::string & description, void* defaultValue);
    void add(Choice* c);
    void add(const std::string & description, void* object);
    void add(const std::string & name, const std::string & description, void* object);
    void setDefault(Choice* defaultChoice);
    void setDefault(const std::string & name);
    void* convertToBean(void* value);
    void* convertToBean(void* value, void* originalValue);
    void* convertToTable(void* value, TableFormat* format);
    DataTable* createTable(void* value, TableFormat* format) /* throws(DataTableException) */;

    // Generated
    ChoicesConverter(::java::lang::Class* valueClass);
protected:
    ChoicesConverter(const ::default_init_tag&);


public:
    

private:
    void init();

public:
    void* convertToTable(void* value);

private:
    ::java::lang::Class* getClass0();
};
