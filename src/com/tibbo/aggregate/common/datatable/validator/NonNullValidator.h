#ifndef _NonNullValidator_H_
#define _NonNullValidator_H_


#include "datatable/validator/AbstractFieldValidator.h"


class NonNullValidator : public AbstractFieldValidator
{
private:
    std::string message;

public:
    virtual bool shouldEncode();
    virtual std::string encode();
    virtual char getType();
    virtual void* validate(void* value) /* throws(ValidationException) */;
//    int hashode();
    virtual bool equals(void* obj);

    // Generated
    NonNullValidator();
    NonNullValidator(const std::string& message);
};
#endif
