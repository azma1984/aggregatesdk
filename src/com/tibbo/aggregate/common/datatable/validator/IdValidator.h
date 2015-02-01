#pragma once

#include "datatable/validator/AbstractFieldValidator.h"

class IdValidator : public AbstractFieldValidator
{
public:
    IdValidator();

    virtual bool shouldEncode();
    virtual std::string encode();
    virtual char getType();
    AgObjectPtr validate(AgObjectPtr value);
};
