#ifndef GenericActionResponseH
#define GenericActionResponseH

#include <boost/shared_ptr.hpp>
#include "action/ActionResponse.h"
#include "action/RequestIdentifier.h"
//#include "datatable/DataTable.h"


class GenericActionResponse: public ActionResponse
{
private:
    DataTablePtr parameters;    
    RequestIdentifierPtr requestId;
    bool remember;

public:
	GenericActionResponse(DataTablePtr parameters);
	GenericActionResponse(DataTablePtr parameters, bool remember, RequestIdentifierPtr requestId);

	DataTablePtr getParameters();
	bool shouldRemember();
	RequestIdentifierPtr getRequestId();
	void setParameters(DataTablePtr parameters);
	void setRemember(bool remember);
	void setRequestId(RequestIdentifierPtr requestId);
};

#endif
