#include "ServerActionInput.h"
#include "iostream"

#include "AggreGateException.h"

ServerActionInput::ServerActionInput()
{
    init();
}

ServerActionInput::ServerActionInput(GenericActionResponsePtr request)
{
    init();

    if (request == 0) {
        throw AggreGateException("ServerActionInput - Null pointer");
    }

	if (request->getParameters() != 0)
	{
	  //  data = request->getParameters()->clone(); todo
    }
}

ServerActionInput::ServerActionInput(DataTablePtr dataTable)
{
	init();
	if (dataTable != 0)
	{
	  //data = dataTable->clone();todo
	}
}

void ServerActionInput::init()
{
    remember = false;
	//data = new DataTable(); todo
}

DataTablePtr ServerActionInput::getData()
{
	return data;
}

bool ServerActionInput::shouldRemember()
{
	return remember;
}

void ServerActionInput::setRemember(bool flag)
{
    this->remember = flag;
}

void ServerActionInput::setRequestId(RequestIdentifierPtr requestId)
{
    this->requestId = requestId;
}

RequestIdentifierPtr ServerActionInput::getRequestId()
{
    return requestId;
}



