#ifndef RequestCacheH
#define RequestCacheH

#include <map>
#include "action/RequestIdentifier.h"
#include "action/ActionResponse.h"
#include "action/ActionResponse.h"
#include "action/RequestIdentifier.h"

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
