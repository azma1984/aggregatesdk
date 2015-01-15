#ifndef _IdValidator_H_
#define _IdValidator_H_

#include "datatable/validator/AbstractFieldValidator.h"
#include "datatable/FieldFormat.h"


class IdValidator : public AbstractFieldValidator
{
public:
    virtual bool shouldEncode() {
        return true;
    }

    virtual std::string encode() {
        return "";
    }

    virtual char getType() {
        return FieldFormat::VALIDATOR_ID;
    }

    void* validate(void* value) {// throws(ValidationException)
        if (value != NULL) {
            const std::string & obj = dynamic_cast<const std::string &>(value);
            if (obj)
                return Util::descriptionToName(*obj);
        }

        return value;
    }

    IdValidator() {

    }
};
#endif  //IdValidator
