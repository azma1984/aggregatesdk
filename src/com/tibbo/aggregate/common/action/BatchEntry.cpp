// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/BatchEntry.java
#include "BatchEntry.h"


BatchEntry::BatchEntry(ActionContextPtr actionContext, InitialRequestPtr initialRequest)
{
    //TODO: exception
//    if(actionContext == 0) {
//		std::exception("Pointer = NULL!");
//	}
//	if(initialRequest == 0) {
//		std::exception("Pointer = NULL!");
//	}
	this->actionContext = actionContext;
	this->initialRequest = initialRequest;
}

/*
ActionContextPtr BatchEntry::getActionContext()
{
	return actionContext;
}     */

InitialRequestPtr BatchEntry::getInitialRequest()
{
    return initialRequest;
}

bool BatchEntry::isFulfilled()
{
	return fulfilled;
}

void BatchEntry::setFulfilled(bool fulfilled)
{
    this->fulfilled = fulfilled;
}

std::string BatchEntry::toString()
{
    return std::string("");//actionContext-> +" (" + initialRequest + ")";
}




