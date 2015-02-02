#include "datatable/validator/AbstractFieldValidator.h"

bool AbstractFieldValidator::shouldEncode()
{
    return false;
}

std::string AbstractFieldValidator::encode()
{
    return "";
}

char AbstractFieldValidator::getType()
{
    return 0;
}

bool AbstractFieldValidator::equals(AgObject *obj)
{
    if (obj == NULL)
    {
        return false;
    }

    if (!(dynamic_cast<FieldValidator *>(obj)))
    {
        return false;
    }

    return typeid(*this) == typeid(obj);
}
