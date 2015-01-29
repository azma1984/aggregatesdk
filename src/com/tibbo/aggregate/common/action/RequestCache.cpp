
#include "action/RequestCache.h"



std::map<RequestIdentifierPtr, ActionResponsePtr>  RequestCache::getRequests()
{
	return requests;
}

ActionResponsePtr RequestCache::getRequest(RequestIdentifierPtr requestId)
{
	return requests[requestId];
}

void RequestCache::addRequest(RequestIdentifierPtr requestId, ActionResponsePtr actionRequest)
{
	requests[requestId] = actionRequest;
}

void RequestCache::removeRequest(RequestIdentifierPtr requestId)
{
	requests.erase(requestId);
}

void RequestCache::clear()
{
	requests.clear();
}



