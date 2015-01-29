#ifndef ServerActionInputH
#define ServerActionInputH

#include <boost/shared_ptr.hpp>
#include "action/InitialRequest.h"
#include "action/GenericActionResponse.h"
#include "action/RequestIdentifier.h"
#include "datatable/DataTable.h"
#include "util/Pointers.h"


class ServerActionInput : public InitialRequest
{
 private:
    DataTablePtr data;
    RequestIdentifierPtr requestId;
    bool remember;

 public:
	ServerActionInput();
	ServerActionInput(GenericActionResponsePtr request);
	ServerActionInput(DataTablePtr dataTable);

	DataTablePtr getData();	
	void setRemember(bool flag);
	void setRequestId(RequestIdentifierPtr requestId);
    virtual bool shouldRemember();
    virtual RequestIdentifierPtr getRequestId();
	void init();
};

#endif
