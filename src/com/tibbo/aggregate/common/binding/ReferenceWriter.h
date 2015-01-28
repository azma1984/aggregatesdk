#ifndef ReferenceWriterH
#define ReferenceWriterH

#include "expression/Reference.h"
#include "util/Interface.h"
#include <boost/shared_ptr.hpp>

class ReferenceWriter : public Interface
{
public:
    virtual void writeReference(ReferencePtr ref, AgObjectPtr value) = 0;
};

#endif
