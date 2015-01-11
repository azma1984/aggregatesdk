#ifndef _RegexValidator_H_
#define _RegexValidator_H_

#include "datatable/validator/AbstractFieldValidator.h"


class RegexValidator : public AbstractFieldValidator
{
private:
    static const std::string SEPARATOR_;
    static const std::string SEPARATOR_REGEX_;
    std::string regex;
    std::string message;

public:
    virtual bool shouldEncode();
    virtual std::string encode();
    virtual char getType();
    virtual void* validate(void* value) /* throws(ValidationException) */;
    virtual bool equals(void* obj);
    int hashCode();

    // Generated
    RegexValidator(const std::string& source);
    RegexValidator(const std::string& regex, const std::string& message);
};
#endif  //_RegexValidator_H_
