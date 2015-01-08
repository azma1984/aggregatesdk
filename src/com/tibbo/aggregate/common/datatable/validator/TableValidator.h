#ifndef _TABLE_VALIDATOR_H_
#define _TABLE_VALIDATOR_H_

#include "util/Cloneable.h"
#include "util/Interface.h"
#include "datatable/DataTable.h"

#include <string>


class TableValidator : public Interface, public Cloneable
{
    virtual std::string/*Character **/ getType();
    virtual std::string encode();
    virtual void validate(DataTable* table); /* throws(ValidationException) */
};
#endif  //_TABLE_VALIDATOR_H_
