#include "ServerActionInput.h"
#include "iostream"

#include "AggreGateException.h"

ServerActionInput::ServerActionInput()
{
    init();
}

ServerActionInput::ServerActionInput(GenericActionResponse* request)
{
    init();

    if (request == 0) {
        throw AggreGateException("ServerActionInput - Null pointer");
    }

    if (request->getParameters() != 0) {
        data = request->getParameters()->clone();
    }
}

ServerActionInput::ServerActionInput(DataTable* dataTable)
{
	init();
    if (dataTable != 0) {
        data = dataTable->clone();
	}
}

void ServerActionInput::init()
{
    remember = false;
    data = new DataTable();
}

DataTable* ServerActionInput::getData()
{
    return data.get();
}

bool ServerActionInput::shouldRemember()
{
	return remember;
}

void ServerActionInput::setRemember(bool flag)
{
    this->remember = flag;
}

void ServerActionInput::setRequestId(RequestIdentifier* requestId)
{
    this->requestId = requestId;
}

RequestIdentifier* ServerActionInput::getRequestId()
{
    return requestId.get();
}



