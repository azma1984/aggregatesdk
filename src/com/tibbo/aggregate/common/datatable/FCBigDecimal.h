#pragma once

#include "datatable/converter/SimpleFormatConverter.h"

class DateFCBigDecimal
    : public SimpleFormatConverter
{

public:
    FieldFormat* createFieldFormat(const std::string & name);
    BigDecimal* simpleToBean(void* value);
    void* convertToTable(BigDecimal* value, TableFormat* format);

    // Generated
    FCBigDecimal();

public:

    void* convertToTable(void* value, TableFormat* format);
    void* convertToTable(void* value);
};
