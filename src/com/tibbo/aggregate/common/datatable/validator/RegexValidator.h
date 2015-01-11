#ifndef _RegexValidator_H_
#define _RegexValidator_H_

#include "datatable/validator/AbstractFieldValidator.h"


class RegexValidator : public AbstractFieldValidator
{

public:
    typedef AbstractFieldValidator super;

private:
    static const std::string SEPARATOR_;
    static const std::string SEPARATOR_REGEX_;
    std::string* regex;
    std::string* message;
protected:
    void ctor(std::string* source);
    void ctor(std::string* regex, std::string* message);

public:
    bool shouldEncode();
    std::string* encode();
    ::java::lang::Character* getType();
    void* validate(void* value) /* throws(ValidationException) */;
    int hashCode();
    bool equals(void* obj);

    // Generated
    RegexValidator(std::string* source);
    RegexValidator(std::string* regex, std::string* message);
};
#endif  //_RegexValidator_H_
