#include "util/simpleobject/AgBoolean.h"


AgBoolean::AgBoolean()
{
    value = false;
}

void AgBoolean::setValue(bool value)
{
    this->value = value;
}

bool AgBoolean::getValue()
{
    return value;
}



