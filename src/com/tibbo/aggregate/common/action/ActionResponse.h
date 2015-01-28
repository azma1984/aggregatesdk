#ifndef ActionResponseH
#define ActionResponseH

#include "RequestIdentifier.h"
#include "util/Interface.h"
#include "util/pointers.h"

class ActionResponse : public Interface
{
public:
    virtual bool shouldRemember() = 0;
    virtual RequestIdentifierPtr getRequestId() = 0;
};

#endif
