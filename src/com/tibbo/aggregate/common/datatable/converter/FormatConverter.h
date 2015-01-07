// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FormatConverter.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/converter/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::datatable::converter::FormatConverter
    
{
    ::java::lang::Class* getValueClass();
    ::com::tibbo::aggregate::common::datatable::TableFormat* getFormat();
    ::com::tibbo::aggregate::common::datatable::FieldFormat* createFieldFormat(std::string* name);
    void* instantiate(::com::tibbo::aggregate::common::datatable::DataRecord* source) /* throws(InstantiationException) */;
    void* clone(void* value, bool useConversion);
    void* convertToTable(void* value);
    void* convertToTable(void* value, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
    void* convertToBean(void* value, void* originalValue);

    // Generated
    

public: /* protected */
    void* clone();
};
