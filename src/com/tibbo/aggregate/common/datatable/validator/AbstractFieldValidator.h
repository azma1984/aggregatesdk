#ifndef _AbstractFieldValidator_H_
#define _AbstractFieldValidator_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "datatable/validator/FieldValidator.h"
#include "util/Util.h"

class AbstractFieldValidator : public FieldValidator
{
public:
    virtual bool shouldEncode() {
        return false;
    }

    virtual std::string encode() {
        return "";
    }

    //TODO: instanceof
    virtual bool equals(boost::shared_ptr<AbstractFieldValidator> obj) {
        if (obj == NULL) {
            return false;
        }
        /*
        if (!(obj instanceof FieldValidator)) {
            return false;
        }
        */

        return Util::equals(getType(), obj->getType());
    }

    virtual char getType() {
        return '';
    }

    //TODO: исключение
    virtual AbstractFieldValidator* clone() {
        return FieldValidator::clone();
//        try
//        {
//            return super.clone();
//        }
//        catch (CloneNotSupportedException ex)
//        {
//            throw new IllegalStateException(ex);
//        }
    }
};
#endif  //AbstractFieldValidator
