// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/RequestCache.java
#include "RequestCache.h"

#include "ActionResponse.h"
#include "RequestIdentifier.h"

std::map<RequestIdentifier*, ActionResponse*>*  RequestCache::getRequests()
{
	return &requests;
}

ActionResponse* RequestCache::getRequest(RequestIdentifier* requestId)
{
	return requests[requestId];
}

void RequestCache::addRequest(RequestIdentifier* requestId, ActionResponse* actionRequest)
{
	requests[requestId] = actionRequest;
}

void RequestCache::removeRequest(RequestIdentifier* requestId)
{
	requests.erase(requestId);
}

void RequestCache::clear()
{
	requests.clear();
}



