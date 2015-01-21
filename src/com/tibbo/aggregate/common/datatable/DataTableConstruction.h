// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableConstruction.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class DateDataTableConstruction
    
{

public:
    typedef void super;
    static DataTable* constructTable(void* object) /* throws(SyntaxErrorException, EvaluationException) */;
    static DataTable* constructTable(std::list  parameters) /* throws(SyntaxErrorException, EvaluationException) */;
    static DataTable* constructTable(std::list  parameters, TableFormat* format) /* throws(SyntaxErrorException, EvaluationException) */;
    static DataTable* constructTable(std::list  parameters, TableFormat* format, Evaluator* evaluator, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException) */;

private:
    static std::list  resolveParameters(std::list  parameters, Evaluator* evaluator, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException) */;
    static DataTable* fillDataTable(TableFormat* format, std::list  params);

    // Generated

public:
    DataTableConstruction();
protected:
    DataTableConstruction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
