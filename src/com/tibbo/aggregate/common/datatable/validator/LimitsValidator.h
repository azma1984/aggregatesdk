#ifndef _LimitsValidator_H_
#define _LimitsValidator_H_

#include <boost/shared_ptr.hpp>
#include "datatable/validator/AbstractFieldValidator.h"
#include "datatable/FieldFormat.h"


class LimitsValidator : public AbstractFieldValidator
{
private:
    static const char MIN_MAX_SEPARATOR;
    boost::shared_ptr<Comparable> min;
    boost::shared_ptr<Comparable> max;

public:
    virtual bool shouldEncode();
    virtual char getType();
    //TODO: Comparable
    boost::shared_ptr<Comparable> getMin();
    boost::shared_ptr<Comparable> getMax();
    virtual std::string encode();
    virtual void* validate(void* value) /* throws(ValidationException) */;

private:
    void compare(boost::shared_ptr<Comparable> cv, const std::string& smallMessage, const std::string& bigMessage) /* throws(ValidationException) */;

public:
//    int hashCode();
    virtual bool equals(void* obj);

    // Generated
    LimitsValidator(boost::shared_ptr<FieldFormat> fieldFormat, const std::string& source);
    LimitsValidator(boost::shared_ptr<Comparable> min, boost::shared_ptr<Comparable> max);
};
#endif  //_LimitsValidator_H_
