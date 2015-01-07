// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/KeyFieldsValidator.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/AbstractRecordValidator.h"



class com::tibbo::aggregate::common::datatable::validator::KeyFieldsValidator
    : public AbstractRecordValidator
{

public:
    typedef AbstractRecordValidator super;
protected:
    void ctor();
    void ctor(std::string* source);

public:
    std::string* encode();
    ::java::lang::Character* getType();
    void validate(::com::tibbo::aggregate::common::datatable::DataTable* table, ::com::tibbo::aggregate::common::datatable::DataRecord* record) /* throws(ValidationException) */;

    // Generated
    KeyFieldsValidator();
    KeyFieldsValidator(std::string* source);
protected:
    KeyFieldsValidator(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
