#pragma once

#include "datatable/validator/AbstractFieldValidator.h"
#include "util/Pointers.h"


class LimitsValidator : public AbstractFieldValidator
{
private:
    static const char MIN_MAX_SEPARATOR = ' ';
    ComparablePtr min;
    ComparablePtr max;

public:
    LimitsValidator(FieldFormatPtr fieldFormat, const std::string& source);
    LimitsValidator(ComparablePtr min, ComparablePtr max);
    LimitsValidator(int min, int max);
    virtual bool shouldEncode();
    virtual char getType();

    ComparablePtr getMin();
    ComparablePtr getMax();
    virtual std::string encode();
    virtual AgObjectPtr validate(AgObjectPtr value);
    int hashCode();
    virtual bool equals(AgObject* obj);

private:
    void compare(Comparable &cv, const std::string& smallMessage, const std::string& bigMessage);

};
