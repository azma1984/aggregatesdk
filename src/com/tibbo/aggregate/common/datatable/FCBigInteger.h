// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/FCBigInteger.java

#pragma once

#include "datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/math/fwd-aggregate_sdk_5.11.00.h"
#include "datatable/converter/SimpleFormatConverter.h"
//#include <java/math/BigInteger.h"



class DateFCBigInteger
    : public converter::SimpleFormatConverter
{

public:
    typedef converter::SimpleFormatConverter super;
protected:
    void ctor();

public:
    FieldFormat* createFieldFormat(const std::string & name);
    ::java::math::BigInteger* simpleToBean(void* value);
    void* convertToTable(::java::math::BigInteger* value, TableFormat* format);

    // Generated
    FCBigInteger();
protected:
    FCBigInteger(const ::default_init_tag&);


public:
    
    void* convertToTable(void* value, TableFormat* format);
    void* convertToTable(void* value);

private:
    ::java::lang::Class* getClass0();
};
