// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/AbstractFieldValidator.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/validator/FieldValidator.h"



class AbstractFieldValidator
{

public:
    bool shouldEncode();
    std::string encode();
    bool equals(void* obj);
    void* getType();
    void* clone();

    // Generated
    AbstractFieldValidator();

};
