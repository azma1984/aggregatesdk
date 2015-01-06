// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/GenericActionResponse.java

#ifndef GenericActionResponseH
#define GenericActionResponseH

#include "ActionResponse.h"
#include "RequestIdentifier.h"
#include "DataTable.h"


class GenericActionResponse: public ActionResponse
{
private:
	DataTable* parameters;
    bool remember;
    RequestIdentifier* requestId;

public:
	GenericActionResponse(DataTable* parameters);
	GenericActionResponse(DataTable* parameters, bool remember, RequestIdentifier* requestId);

	DataTable* getParameters();
	bool shouldRemember();
	RequestIdentifier* getRequestId();
	void setParameters(DataTable* parameters);
	void setRemember(bool remember);
	void setRequestId(RequestIdentifier* requestId);
};

#endif
