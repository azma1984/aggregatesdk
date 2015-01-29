#ifndef ActionCommandH
#define ActionCommandH

#include "ActionResponse.h"
#include "RequestIdentifier.h"
#include "util/Interface.h"
#include "util/Cloneable.h"

class ActionCommand : public Cloneable, public Interface
{
  public:
	virtual bool isResponseValid(ActionResponsePtr actionRequest) = 0;
	virtual RequestIdentifierPtr getRequestId() = 0;
    virtual void setBatchEntry(bool batchEntry) = 0;
    virtual bool isBatchEntry() = 0;
    virtual ActionCommandPtr clone() = 0;
    virtual bool isInteractive() = 0;
};

#endif
