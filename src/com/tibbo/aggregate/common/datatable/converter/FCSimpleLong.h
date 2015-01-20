// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCSimpleLong.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/converter/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/converter/SimpleFormatConverter.h"



class Dateconverter::FCSimpleLong
    : public SimpleFormatConverter
{

public:
    typedef SimpleFormatConverter super;
protected:
    void ctor();

public:
    FieldFormat* createFieldFormat(const std::string & name);
    void* simpleToBean(void* value);
    void* convertToTable(void* value, TableFormat* format);

    // Generated
    FCSimpleLong();
protected:
    FCSimpleLong(const ::default_init_tag&);


public:
    
    void* convertToTable(void* value);

private:
    ::java::lang::Class* getClass0();
};
