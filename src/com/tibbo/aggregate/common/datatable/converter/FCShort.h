// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCShort.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/converter/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/converter/SimpleFormatConverter.h"
//#include <java/lang/Short.h"



class com::tibbo::aggregate::common::datatable::converter::FCShort
    : public SimpleFormatConverter
{

public:
    typedef SimpleFormatConverter super;
protected:
    void ctor();

public:
    ::com::tibbo::aggregate::common::datatable::FieldFormat* createFieldFormat(std::string* name);
    ::java::lang::Short* simpleToBean(void* value);
    void* convertToTable(::java::lang::Short* value, ::com::tibbo::aggregate::common::datatable::TableFormat* format);

    // Generated
    FCShort();
protected:
    FCShort(const ::default_init_tag&);


public:
    
    void* convertToTable(void* value, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
    void* convertToTable(void* value);

private:
    ::java::lang::Class* getClass0();
};
