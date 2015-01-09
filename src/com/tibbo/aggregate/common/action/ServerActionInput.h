// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ServerActionInput.java

#ifndef ServerActionInputH
#define ServerActionInputH

#include <boost/shared_ptr.hpp>
#include "action/InitialRequest.h"
#include "action/GenericActionResponse.h"
#include "action/RequestIdentifier.h"
#include "datatable/DataTable.h"


class ServerActionInput : public InitialRequest
{
 private:
    boost::shared_ptr<DataTable> data;
    boost::shared_ptr<RequestIdentifier> requestId;
    bool remember;

 public:
	ServerActionInput();
	ServerActionInput(GenericActionResponse* request);
	ServerActionInput(DataTable* dataTable);

	DataTable* getData();	
	void setRemember(bool flag);
	void setRequestId(RequestIdentifier* requestId);
    virtual bool shouldRemember();
    virtual RequestIdentifier* getRequestId();
	void init();
};

#endif
