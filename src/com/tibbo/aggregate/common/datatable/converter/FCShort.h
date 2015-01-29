// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/FCShort.java

#pragma once

#include "datatable/fwd-aggregate_sdk_5.11.00.h"
#include "datatable/converter/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "datatable/converter/SimpleFormatConverter.h"
//#include <java/lang/Short.h"



class Dateconverter::FCShort
    : public SimpleFormatConverter
{

public:
    typedef SimpleFormatConverter super;
protected:
    void ctor();

public:
    FieldFormat* createFieldFormat(const std::string & name);
    ::java::lang::Short* simpleToBean(void* value);
    void* convertToTable(::java::lang::Short* value, TableFormat* format);

    // Generated
    FCShort();
protected:
    FCShort(const ::default_init_tag&);


public:
    
    void* convertToTable(void* value, TableFormat* format);
    void* convertToTable(void* value);

private:
    ::java::lang::Class* getClass0();
};
