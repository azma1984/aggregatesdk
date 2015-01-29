#pragma once

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

 public:
	BatchEntry(ActionContextPtr actionContext, InitialRequestPtr initialRequest);
	ActionContextPtr getActionContext();
	InitialRequestPtr getInitialRequest();
	bool isFulfilled();
	std::string toString();

};
