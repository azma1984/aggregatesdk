// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/TableExpressionValidator.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/AbstractTableValidator.h"



class com::tibbo::aggregate::common::datatable::validator::TableExpressionValidator
    : public AbstractTableValidator
{

public:
    typedef AbstractTableValidator super;

private:
    ::com::tibbo::aggregate::common::expression::Expression* expression;
protected:
    void ctor(std::string* expression);

public:
    ::java::lang::Character* getType();
    std::string* encode();
    void validate(::com::tibbo::aggregate::common::datatable::DataTable* table) /* throws(ValidationException) */;

    // Generated
    TableExpressionValidator(std::string* expression);
protected:
    TableExpressionValidator(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
