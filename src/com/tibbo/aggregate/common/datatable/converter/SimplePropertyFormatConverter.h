// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/SimplePropertyFormatConverter.java

#pragma once

#include "datatable/fwd-aggregate_sdk_5.11.00.h"
#include "datatable/converter/fwd-aggregate_sdk_5.11.00.h"
//#include <java/beans/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "datatable/converter/SimpleFormatConverter.h"



class Dateconverter::SimplePropertyFormatConverter
    : public SimpleFormatConverter
{

public:
    typedef SimpleFormatConverter super;

private:
    ::java::beans::PropertyDescriptor* propertyDescriptor;
protected:
    void ctor(::java::lang::Class* valueClass, const std::string & field);

public:
    FieldFormat* createFieldFormat(const std::string & name);
    void* simpleToBean(void* value);
    void* convertToTable(void* value, TableFormat* format);

    // Generated
    SimplePropertyFormatConverter(::java::lang::Class* valueClass, const std::string & field);
protected:
    SimplePropertyFormatConverter(const ::default_init_tag&);


public:
    
    void* convertToTable(void* value);

private:
    ::java::lang::Class* getClass0();
};
