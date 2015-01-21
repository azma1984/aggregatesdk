// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/SimpleFormatConverter.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/converter/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/converter/AbstractFormatConverter.h"



class Dateconverter::SimpleFormatConverter
    : public AbstractFormatConverter
{

public:
    typedef AbstractFormatConverter super;
protected:
    void ctor(::java::lang::Class* valueClass);

public:
    void* convertToBean(void* value, void* originalValue);

public: /* protected */
    void* simpleToBean(void* value);

    // Generated

public:
    SimpleFormatConverter(::java::lang::Class* valueClass);
protected:
    SimpleFormatConverter(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
