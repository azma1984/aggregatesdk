// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/RequestCache.java
#ifndef RequestCacheH
#define RequestCacheH

#include <map>
#include "RequestIdentifier.h"
#include "ActionResponse.h"

class RequestCache
{

private:
	std::map<RequestIdentifier*, ActionResponse*> requests;
public:
	std::map<RequestIdentifier*, ActionResponse*>* getRequests();
	ActionResponse* getRequest(RequestIdentifier* requestId);

	void addRequest(RequestIdentifier *requestId, ActionResponse *actionRequest);
	void removeRequest(RequestIdentifier* requestId);
	void clear();
};

#endif
