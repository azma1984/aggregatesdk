// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ServerActionInput.java
#include "ServerActionInput.h"
#include "iostream"





ServerActionInput::ServerActionInput(GenericActionResponse* request)
{
  init();

  if(request == 0)
  {
	std::cout<<("Pointer = NULL!");
  }

  if(request->getParameters() != 0)
   {
	data = request->getParameters()->clone();
   }


}

void ServerActionInput::init()
{
	data = new DataTable();
}


ServerActionInput::ServerActionInput(DataTable* dataTable)
{
	init();
	if(dataTable != 0)
	{
	 data = dataTable->clone();
	}
}


DataTable* ServerActionInput::getData()
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

void ServerActionInput::setRequestId(RequestIdentifier* requestId)
{
    this->requestId = requestId;
}

RequestIdentifier* ServerActionInput::getRequestId()
{
    return requestId;
}



