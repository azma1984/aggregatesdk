#pragma once

#include "util/Cloneable.h"
#include "util/Interface.h"
#include "util/AgObject.h"
#include <string>

class RecordValidator : public Interface, public Cloneable, public AgObject
{
public:
    virtual char getType() = 0;
    virtual std::string encode() = 0;
    virtual void validate(boost::shared_ptr<DataTable> table, boost::shared_ptr<DataRecord> record) = 0; 
};
