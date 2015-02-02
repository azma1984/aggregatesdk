#pragma once

#include "datatable/validator/FieldValidator.h"

class AbstractFieldValidator : public FieldValidator
{
public:
    virtual bool shouldEncode();
    virtual std::string encode();
    virtual char getType();
    virtual bool equals(AgObject* obj);
    virtual Cloneable *clone() const;

};

