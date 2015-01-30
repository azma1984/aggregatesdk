#pragma once

#include "datatable/converter/SimpleFormatConverter.h"

class DateFCBigInteger
    : public SimpleFormatConverter
{
public:
    FieldFormat* createFieldFormat(const std::string & name);
    BigInteger* simpleToBean(void* value);
    void* convertToTable(long int value, TableFormat* format);

    // Generated
    FCBigInteger();

public:   
    void* convertToTable(void* value, TableFormat* format);
    void* convertToTable(void* value);
};
