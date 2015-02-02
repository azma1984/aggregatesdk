#pragma once

#include "datatable/validator/AbstractFieldValidator.h"
#include "util/Pointers.h"

class NonNullValidator : public AbstractFieldValidator
{
private:
    std::string message;

public:
    NonNullValidator();
    NonNullValidator(const std::string& message);

    virtual bool shouldEncode();
    virtual std::string encode();
    virtual char getType();
    virtual AgObjectPtr validate(AgObjectPtr value);
    int hashode();
    virtual bool equals(AgObjectPtr obj);

};
