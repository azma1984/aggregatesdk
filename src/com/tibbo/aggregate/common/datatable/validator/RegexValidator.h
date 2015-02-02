#pragma once
#include "datatable/validator/AbstractFieldValidator.h"

class RegexValidator : public AbstractFieldValidator
{
private:
    static const std::string SEPARATOR;
    static const std::string SEPARATOR_REGEX;
    std::string regex;
    std::string message;

public:
    RegexValidator(const std::string& source);
    RegexValidator(const std::string& regex, const std::string& message);

    virtual bool shouldEncode();
    virtual std::string encode();
    virtual char getType();
    virtual AgObjectPtr validate(AgObjectPtr value);
    virtual bool equals(AgObject* obj);
    int hashCode();
};
