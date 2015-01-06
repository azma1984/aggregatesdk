// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionCommand.java

#ifndef ActionCommandH
#define ActionCommandH

#include "ActionResponse.h"
#include "RequestIdentifier.h"

class ActionCommand
{
	virtual bool isResponseValid(ActionResponse* actionRequest) = 0;
	virtual RequestIdentifier* getRequestId() = 0;
    virtual void setBatchEntry(bool batchEntry) = 0;
    virtual bool isBatchEntry() = 0;
    virtual ActionCommand* clone() = 0;
    virtual bool isInteractive() = 0;
};

#endif
