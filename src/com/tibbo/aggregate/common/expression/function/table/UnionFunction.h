// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/UnionFunction.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/table/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"



class com::tibbo::aggregate::common::expression::function::table::UnionFunction
    : public ::com::tibbo::aggregate::common::expression::function::AbstractFunction
{

public:
    typedef ::com::tibbo::aggregate::common::expression::function::AbstractFunction super;
protected:
    void ctor();

public:
    void* execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

private:
    ::com::tibbo::aggregate::common::datatable::DataTable* union_(::com::tibbo::aggregate::common::datatable::DataTable* leftTable, ::com::tibbo::aggregate::common::datatable::DataTable* rightTable);
    ::com::tibbo::aggregate::common::datatable::TableFormat* joinTableFormats(::com::tibbo::aggregate::common::datatable::TableFormat* newFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* tableFormat);

    // Generated

public:
    UnionFunction();
protected:
    UnionFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
