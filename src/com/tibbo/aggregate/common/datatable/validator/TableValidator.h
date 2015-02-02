#pragma once

#include "util/Cloneable.h"
#include "util/Interface.h"
#include "util/AgObject.h"
#include "util/Pointers.h"

class TableValidator : public Interface, public Cloneable, public AgObject
{
public:
    virtual char getType() = 0;
    virtual std::string encode() = 0;
    virtual void validate(DataTablePtr table) = 0;
};
