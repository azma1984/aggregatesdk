#include "datatable/validator/NonNullValidator.h"

#include "datatable/FieldFormat.h"
#include "datatable/ValidationException.h"
#include "Cres.h"
#include <boost/functional/hash.hpp>

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

AgObjectPtr NonNullValidator::validate(AgObjectPtr value)
{
    if (value.get() == NULL)
    {
        throw ValidationException(message.length() != NULL ? message : Cres::get()->getString("dtValueIsRequired"));
    }

    return value;
}

int NonNullValidator::hashode()
{
    static int prime = 31;
    int result = 1;
    boost::hash<std::string> string_hash;
    result = prime * result + ((message.length() == NULL) ? 0 : string_hash(message));
    return result;
}

bool NonNullValidator::equals(AgObjectPtr obj)
{
    if (this == obj.get())
    {
        return true;
    }

    if (!AbstractFieldValidator::equals(obj.get()))
    {
        return false;
    }

    NonNullValidator* other = dynamic_cast<NonNullValidator*>(obj.get());
    if (other)
    {
         if (other->message != message)
         {
            return false;
         }
    }
    else
    {
        throw ValidationException("dynamic_cast<NonNullValidator*> error in NonNullValidator::equals()");
    }

    return true;
}
