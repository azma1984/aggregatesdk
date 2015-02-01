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
