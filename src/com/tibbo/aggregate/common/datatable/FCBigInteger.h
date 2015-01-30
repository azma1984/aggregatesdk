#pragma once

#include "datatable/converter/SimpleFormatConverter.h"

class FCBigInteger
    : public SimpleFormatConverter
{
public:
    FieldFormatPtr createFieldFormat(const std::string & name);
    //TODO:
    long int/*BigInteger*/ simpleToBean(void* value);
    void* convertToTable(long int value, TableFormat* format);

    FCBigInteger();

public:   
    void* convertToTable(void* value, TableFormat* format);
    void* convertToTable(void* value);
};
