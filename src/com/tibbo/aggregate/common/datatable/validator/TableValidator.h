#ifndef _TABLE_VALIDATOR_H_
#define _TABLE_VALIDATOR_H_

#include "util/Cloneable.h"
#include "util/Interface.h"

#include <string>

class TableValidator : public Interface, public Cloneable
{
    std::string/*Character **/ getType();
    std::string encode();
    void validate(DataTable* table) /* throws(ValidationException) */;
};
#endif  //_TABLE_VALIDATOR_H_
