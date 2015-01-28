// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/RequestCache.java
#ifndef RequestCacheH
#define RequestCacheH

#include <map>
#include "RequestIdentifier.h"
#include "ActionResponse.h"

class RequestCache
{

private:
	std::map<RequestIdentifierPtr, ActionResponsePtr> requests;
public:
	std::map<RequestIdentifierPtr, ActionResponsePtr> getRequests();
	ActionResponsePtr getRequest(RequestIdentifierPtr requestId);

	void addRequest(RequestIdentifierPtr requestId, ActionResponsePtr actionRequest);
	void removeRequest(RequestIdentifierPtr requestId);
	void clear();
};

#endif
