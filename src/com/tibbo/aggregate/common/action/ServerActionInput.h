// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ServerActionInput.java

#ifndef ServerActionInputH
#define ServerActionInputH

#include "InitialRequest.h"

#include "GenericActionResponse.h"
#include "RequestIdentifier.h"
#include "DataTable.h"


class ServerActionInput : public InitialRequest
{
 private:
	DataTable *data;
    bool remember;
	RequestIdentifier* requestId;

 public:
	ServerActionInput();
	ServerActionInput(GenericActionResponse* request);
	ServerActionInput(DataTable* dataTable);

	DataTable* getData();
	bool shouldRemember();
	void setRemember(bool flag);
	void setRequestId(RequestIdentifier* requestId);
	RequestIdentifier* getRequestId();
	void init();
};

#endif
