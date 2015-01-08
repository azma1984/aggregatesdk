#ifndef GenericActionResponseH
#define GenericActionResponseH

#include "action/ActionResponse.h"
#include "action/RequestIdentifier.h"
#include "datatable/DataTable.h"


class GenericActionResponse: public ActionResponse
{
private:
    boost::shared_ptr<DataTable> parameters;
    bool remember;
    RequestIdentifier* requestId;

public:
	GenericActionResponse(DataTable* parameters);
	GenericActionResponse(DataTable* parameters, bool remember, RequestIdentifier* requestId);

    //TODO:
	DataTable* getParameters();
	bool shouldRemember();
	RequestIdentifier* getRequestId();
	void setParameters(DataTable* parameters);
	void setRemember(bool remember);
	void setRequestId(RequestIdentifier* requestId);
};

#endif
