#pragma once

#include "expression/Reference.h"
#include "util/Interface.h"
#include <boost/shared_ptr.hpp>

class ReferenceWriter : public Interface
{
public:
    virtual void writeReference(boost::shared_ptr<Reference> ref, void*/*Object*/ value) = 0/* throws(BindingException) */;
};
