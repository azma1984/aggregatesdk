#include "datatable/validator/NonNullValidator.h"

#include "datatable/FieldFormat.h"
#include "datatable/ValidationException.h"

NonNullValidator::NonNullValidator()
{

}

NonNullValidator::NonNullValidator(const std::string& message)
{
    this->message = message;
}

bool NonNullValidator::shouldEncode()
{
    return true;
}

std::string NonNullValidator::encode()
{
    return "";
}

char NonNullValidator::getType()
{
    return FieldFormat::VALIDATOR_NON_NULL;
}

void* NonNullValidator::validate(void* value) /* throws(ValidationException) */
{
    if (value == NULL) {
        //throw new ValidationException(message != null ? message : Cres.get().getString("dtValueIsRequired"));
    }

    return value;
}

//TODO: need?
//int NonNullValidator::hashode()
//{
//    final int prime = 31;
//    int result = 1;
//    result = prime * result + ((message == null) ? 0 : message.hashCode());
//    return result;
//}

bool NonNullValidator::equals(void* obj)
{
    if (this == obj) {
        return true;
    }

    if (!AbstractFieldValidator::equals(obj)) {
        return false;
    }

    //TODO:
//    if (getClass() != obj.getClass())
//    {
//      return false;
//    }

    NonNullValidator* other = dynamic_cast<NonNullValidator*>(obj);
    if (message == NULL) {
        if (other->message != message) {
            return false;
        }
    }

    return true;
}
