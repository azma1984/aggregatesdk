// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/BatchEntry.java
#ifndef BatchEntryH
#define BatchEntryH

//#include "ActionContext.h"
#include "InitialRequest.h"
 #include <exception>

class BatchEntry
{
 private:
   //	ActionContext* actionContext;
	InitialRequest* initialRequest;
	bool fulfilled;


 protected:
	void setFulfilled(bool fulfilled);


 public:
   //	BatchEntry(ActionContext* actionContext, InitialRequest* initialRequest);
    //todo
   //	ActionContext* getActionContext();
	InitialRequest* getInitialRequest();
	bool isFulfilled();
   // std::string toString();

};

#endif
