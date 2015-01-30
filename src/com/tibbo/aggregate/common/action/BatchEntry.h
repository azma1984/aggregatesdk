#pragma once
#ifndef BatchEntryH
#define BatchEntryH

#include "ActionContext.h"
#include "InitialRequest.h"
#include <exception>

class BatchEntry
{
 private:
	ActionContextPtr actionContext;
	InitialRequestPtr initialRequest;
	bool fulfilled;



 public:
	void setFulfilled(bool fulfilled);
	bool isFulfilled();
	ActionContextPtr getActionContext();
	InitialRequestPtr getInitialRequest();

	std::string toString();

	BatchEntry(ActionContextPtr actionContext, InitialRequestPtr initialRequest);
};

#endif
