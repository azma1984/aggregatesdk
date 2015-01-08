#ifndef ActionCommandH
#define ActionCommandH

#include "ActionResponse.h"
#include "RequestIdentifier.h"
#include "util/Interface.h"
#include "util/Cloneable.h"

class ActionCommand// : /*public Cloneable,*/ public Interface
{
	virtual bool isResponseValid(ActionResponse* actionRequest) = 0;
	virtual RequestIdentifier* getRequestId() = 0;
    virtual void setBatchEntry(bool batchEntry) = 0;
    virtual bool isBatchEntry() = 0;
    virtual ActionCommand* clone() = 0;
    virtual bool isInteractive() = 0;
};

#endif
