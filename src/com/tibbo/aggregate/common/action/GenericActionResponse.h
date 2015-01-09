#ifndef GenericActionResponseH
#define GenericActionResponseH

#include <boost/shared_ptr.hpp>
#include "action/ActionResponse.h"
#include "action/RequestIdentifier.h"
#include "datatable/DataTable.h"


class GenericActionResponse: public ActionResponse
{
private:
    boost::shared_ptr<DataTable> parameters;    
    boost::shared_ptr<RequestIdentifier> requestId;
    bool remember;

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
