// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/TableKeyFieldsValidator.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/AbstractTableValidator.h"



class com::tibbo::aggregate::common::datatable::validator::TableKeyFieldsValidator
    : public AbstractTableValidator
{

public:
    typedef AbstractTableValidator super;
protected:
    void ctor();
    void ctor(std::string* source);

public:
    std::string* encode();
    ::java::lang::Character* getType();
    void validate(::com::tibbo::aggregate::common::datatable::DataTable* table) /* throws(ValidationException) */;
    void validate(::com::tibbo::aggregate::common::datatable::DataTable* table, ::com::tibbo::aggregate::common::datatable::DataRecord* record) /* throws(ValidationException) */;

    // Generated
    TableKeyFieldsValidator();
    TableKeyFieldsValidator(std::string* source);
protected:
    TableKeyFieldsValidator(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
